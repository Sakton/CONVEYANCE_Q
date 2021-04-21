#ifndef MAINWINDOWAUTOPARK_H
#define MAINWINDOWAUTOPARK_H

#include <QWidget>

namespace Ui {
class MainWindowAutopark;
}

class MainWindowAutopark : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindowAutopark(QWidget *parent = nullptr);
    ~MainWindowAutopark();

private:
    Ui::MainWindowAutopark *ui;
};

#endif // MAINWINDOWAUTOPARK_H
