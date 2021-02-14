/********************************************************************************
** Form generated from reading UI file 'theblacklistform.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheBlackListForm
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBoxWhy;
    QLineEdit *lineEditNIP;
    QLabel *label_4;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditName;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *lineEditSity;
    QHBoxLayout *horizontalLayout_5;
    QDateEdit *dateEditAdd;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *plainTextEditNote;
    QDialogButtonBox *buttonBoxBlackList;

    void setupUi(QWidget *TheBlackListForm)
    {
        if (TheBlackListForm->objectName().isEmpty())
            TheBlackListForm->setObjectName(QString::fromUtf8("TheBlackListForm"));
        TheBlackListForm->resize(400, 304);
        TheBlackListForm->setMinimumSize(QSize(400, 0));
        gridLayout_2 = new QGridLayout(TheBlackListForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(TheBlackListForm);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBoxWhy = new QComboBox(TheBlackListForm);
        comboBoxWhy->setObjectName(QString::fromUtf8("comboBoxWhy"));

        gridLayout->addWidget(comboBoxWhy, 3, 1, 1, 1);

        lineEditNIP = new QLineEdit(TheBlackListForm);
        lineEditNIP->setObjectName(QString::fromUtf8("lineEditNIP"));

        gridLayout->addWidget(lineEditNIP, 1, 1, 1, 1);

        label_4 = new QLabel(TheBlackListForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_2 = new QLabel(TheBlackListForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEditName = new QLineEdit(TheBlackListForm);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        horizontalLayout->addWidget(lineEditName);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        label_5 = new QLabel(TheBlackListForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_3 = new QLabel(TheBlackListForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEditSity = new QLineEdit(TheBlackListForm);
        lineEditSity->setObjectName(QString::fromUtf8("lineEditSity"));

        gridLayout->addWidget(lineEditSity, 2, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        dateEditAdd = new QDateEdit(TheBlackListForm);
        dateEditAdd->setObjectName(QString::fromUtf8("dateEditAdd"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateEditAdd->sizePolicy().hasHeightForWidth());
        dateEditAdd->setSizePolicy(sizePolicy);
        dateEditAdd->setMinimumSize(QSize(90, 0));
        dateEditAdd->setCalendarPopup(true);
        dateEditAdd->setDate(QDate(2021, 1, 1));

        horizontalLayout_5->addWidget(dateEditAdd);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_5, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        groupBox = new QGroupBox(TheBlackListForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        plainTextEditNote = new QPlainTextEdit(groupBox);
        plainTextEditNote->setObjectName(QString::fromUtf8("plainTextEditNote"));

        gridLayout_3->addWidget(plainTextEditNote, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        buttonBoxBlackList = new QDialogButtonBox(TheBlackListForm);
        buttonBoxBlackList->setObjectName(QString::fromUtf8("buttonBoxBlackList"));
        buttonBoxBlackList->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBoxBlackList, 1, 0, 1, 1);


        retranslateUi(TheBlackListForm);

        QMetaObject::connectSlotsByName(TheBlackListForm);
    } // setupUi

    void retranslateUi(QWidget *TheBlackListForm)
    {
        TheBlackListForm->setWindowTitle(QCoreApplication::translate("TheBlackListForm", "BlackList", nullptr));
        label->setText(QCoreApplication::translate("TheBlackListForm", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("TheBlackListForm", "Why?", nullptr));
        label_2->setText(QCoreApplication::translate("TheBlackListForm", "NIP", nullptr));
        label_5->setText(QCoreApplication::translate("TheBlackListForm", "Date Add", nullptr));
        label_3->setText(QCoreApplication::translate("TheBlackListForm", "Sity", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TheBlackListForm", "Note", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheBlackListForm: public Ui_TheBlackListForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEBLACKLISTFORM_H
