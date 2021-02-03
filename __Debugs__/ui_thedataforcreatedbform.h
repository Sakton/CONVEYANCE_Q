/********************************************************************************
** Form generated from reading UI file 'thedataforcreatedbform.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEDATAFORCREATEDBFORM_H
#define UI_THEDATAFORCREATEDBFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheDataForCreateDBForm
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *TheDataForCreateDBForm)
    {
        if (TheDataForCreateDBForm->objectName().isEmpty())
            TheDataForCreateDBForm->setObjectName(QString::fromUtf8("TheDataForCreateDBForm"));
        TheDataForCreateDBForm->resize(400, 152);
        TheDataForCreateDBForm->setMinimumSize(QSize(400, 0));
        gridLayout = new QGridLayout(TheDataForCreateDBForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(TheDataForCreateDBForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setLineWidth(2);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(frame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 4, 0, 1, 2);

        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout_2->addWidget(lineEdit_3, 1, 1, 1, 1);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLayoutDirection(Qt::RightToLeft);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(lineEdit_2, 2, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(TheDataForCreateDBForm);

        QMetaObject::connectSlotsByName(TheDataForCreateDBForm);
    } // setupUi

    void retranslateUi(QWidget *TheDataForCreateDBForm)
    {
        TheDataForCreateDBForm->setWindowTitle(QCoreApplication::translate("TheDataForCreateDBForm", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("TheDataForCreateDBForm", "User Name", nullptr));
        label_2->setText(QCoreApplication::translate("TheDataForCreateDBForm", "Password", nullptr));
        label->setText(QCoreApplication::translate("TheDataForCreateDBForm", "Name Data Base", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheDataForCreateDBForm: public Ui_TheDataForCreateDBForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEDATAFORCREATEDBFORM_H
