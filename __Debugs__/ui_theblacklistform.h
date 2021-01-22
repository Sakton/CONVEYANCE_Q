/********************************************************************************
** Form generated from reading UI file 'theblacklistform.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEBLACKLISTFORM_H
#define UI_THEBLACKLISTFORM_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheBlackListForm
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *TheBlackList)
    {
        if (TheBlackList->objectName().isEmpty())
            TheBlackList->setObjectName(QString::fromUtf8("TheBlackList"));
        TheBlackList->resize(400, 318);
        TheBlackList->setMinimumSize(QSize(400, 0));
        gridLayout_2 = new QGridLayout(TheBlackList);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonBox = new QDialogButtonBox(TheBlackList);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox = new QComboBox(TheBlackList);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(comboBox);

        pushButton = new QPushButton(TheBlackList);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        label = new QLabel(TheBlackList);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(TheBlackList);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 2, 1, 1, 1);

        label_4 = new QLabel(TheBlackList);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_3 = new QLabel(TheBlackList);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        comboBox_2 = new QComboBox(TheBlackList);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 3, 1, 1, 1);

        lineEdit = new QLineEdit(TheBlackList);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        label_2 = new QLabel(TheBlackList);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(TheBlackList);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        dateEdit = new QDateEdit(TheBlackList);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2021, 1, 1));

        gridLayout->addWidget(dateEdit, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        groupBox = new QGroupBox(TheBlackList);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout_3->addWidget(plainTextEdit, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(TheBlackList);

        QMetaObject::connectSlotsByName(TheBlackList);
    } // setupUi

    void retranslateUi(QWidget *TheBlackList)
    {
        TheBlackList->setWindowTitle(QCoreApplication::translate("TheBlackListForm", "BlackList", nullptr));
        pushButton->setText(QCoreApplication::translate("TheBlackListForm", "Add", nullptr));
        label->setText(QCoreApplication::translate("TheBlackListForm", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("TheBlackListForm", "Why?", nullptr));
        label_3->setText(QCoreApplication::translate("TheBlackListForm", "Sity", nullptr));
        label_2->setText(QCoreApplication::translate("TheBlackListForm", "NIP", nullptr));
        label_5->setText(QCoreApplication::translate("TheBlackListForm", "Date Add", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TheBlackListForm", "Note", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheBlackListForm: public Ui_TheBlackListForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEBLACKLISTFORM_H
