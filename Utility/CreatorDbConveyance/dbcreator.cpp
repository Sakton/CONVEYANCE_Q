#include "dbcreator.h"

#include <QDebug>
#include <QMessageBox>
#include <QProcess>

#include "DBConnectConstant.h"
#include "errordatabase.h"

DBCreator::DBCreator() : process(new QProcess(this)) {
  connect(process,
          QOverload<QProcess::ProcessError>::of(&QProcess::errorOccurred), this,
          QOverload<int>::of(&DBCreator::slotProessError));
  connect(process, &QProcess::started, this,
          QOverload<>::of(&DBCreator::slotStarted));
  connect(process, &QProcess::finished, this, &DBCreator::slotFinished);
  connect(process, &QProcess::readyReadStandardOutput, this,
          &DBCreator::slotReadStdOut);
}

void DBCreator::createDatabase(const QString &nameDataBase) {
  /*
  решение задачи создания базы занных из программы.
    создать базу можно войдя в базу по умолчанию, которая существует всегда
(гарантия производителя) -с - -c команда
  --command=команда
Передаёт psql команду для выполнения. Этот ключ можно повторять и комбинировать
в любом порядке с ключом -f. Когда указывается -c или -f, psql не читает команды
со стандартного ввода; вместо этого она завершается сразу после обработки всех
ключей -c и -f по порядку. Для создания базы данных вы должны сначала
подключиться к другой базе данных (postgres). Это не подразумевает иерархию баз
данных.
  */
  process->setProgram("psql");

  QString arguments = QString("-c \"CREATE DATABASE ") + nameDataBase +
                      QString(
                          "\" \"user=postgres dbname=postgres password=postgres"
                          "\"");

  process->setNativeArguments(arguments);
  process->start();
  process->waitForFinished(-1);
  process->close();
}

void DBCreator::slotProessError(int error) {
  QString errorstring;
  switch (error) {
    case QProcess::ProcessError::FailedToStart:
      errorstring =
          tr("Не удалось запустить процесс создания базыданных."
             "Либо запущенная программа отсутствует, "
             "либо у вас может быть недостаточно прав или ресурсов для "
             "ее запуска.");
      break;
    case QProcess::ProcessError::Crashed:
      errorstring = tr(
          "Через некоторое время после успешного запуска процесс остановился.");
      break;
    case QProcess::ProcessError::Timedout:
      errorstring = tr("Истекло время ожидания");
      break;
    case QProcess::ProcessError::WriteError:
      errorstring = tr("Произошла ошибка при попытке записи в процесс.");
      break;
    case QProcess::ProcessError::ReadError:
      errorstring = tr("Произошла ошибка при попытке чтения из процесса");
      break;
    case QProcess::ProcessError::UnknownError:
      errorstring = tr("Произошла неизвестная ошибка.");
      break;
  }
  QMessageBox::critical(nullptr, "CRITICAL", errorstring);
  throw ErrorCreateDatabase(errorstring);
}

void DBCreator::slotFinished() {
  auto code = process->exitStatus();
  if (code == QProcess::ExitStatus::NormalExit) {
    QMessageBox::information(nullptr, "INFO", "DB CREATED SUCEFULL");
  }
}
