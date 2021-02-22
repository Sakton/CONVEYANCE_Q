/********************************************************************************
** Form generated from reading UI file 'thenoteform.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THENOTEFORM_H
#define UI_THENOTEFORM_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheNoteForm
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout;
    QLineEdit *lineEditID;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBoxContactor;
    QHBoxLayout *horizontalLayout_5;
    QDateEdit *dateEditDate;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QLabel *label_4;
    QComboBox *comboBoxInvoiceVat;
    QLineEdit *lineEditContract;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditSum;
    QLabel *label_9;
    QComboBox *comboBoxCurrency;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QDateEdit *dateEditDateRequisites;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QDateEdit *dateEditTermin;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonPrintNote;
    QDialogButtonBox *buttonBoxNote;

    void setupUi(QWidget *TheNoteForm)
    {
        if (TheNoteForm->objectName().isEmpty())
            TheNoteForm->setObjectName(QString::fromUtf8("TheNoteForm"));
        TheNoteForm->resize(400, 428);
        TheNoteForm->setMinimumSize(QSize(400, 0));
        gridLayout_2 = new QGridLayout(TheNoteForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(TheNoteForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_3->addWidget(pushButton, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(TheNoteForm);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_6 = new QGridLayout(groupBox_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEditID = new QLineEdit(groupBox_3);
        lineEditID->setObjectName(QString::fromUtf8("lineEditID"));
        lineEditID->setMaximumSize(QSize(90, 16777215));

        gridLayout->addWidget(lineEditID, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        comboBoxContactor = new QComboBox(groupBox_3);
        comboBoxContactor->setObjectName(QString::fromUtf8("comboBoxContactor"));

        gridLayout->addWidget(comboBoxContactor, 3, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        dateEditDate = new QDateEdit(groupBox_3);
        dateEditDate->setObjectName(QString::fromUtf8("dateEditDate"));
        dateEditDate->setMinimumSize(QSize(90, 0));
        dateEditDate->setCalendarPopup(true);
        dateEditDate->setDate(QDate(2021, 1, 1));

        horizontalLayout_5->addWidget(dateEditDate);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_5, 2, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(TheNoteForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 2, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        comboBoxInvoiceVat = new QComboBox(groupBox_2);
        comboBoxInvoiceVat->setObjectName(QString::fromUtf8("comboBoxInvoiceVat"));

        gridLayout_4->addWidget(comboBoxInvoiceVat, 1, 1, 1, 1);

        lineEditContract = new QLineEdit(groupBox_2);
        lineEditContract->setObjectName(QString::fromUtf8("lineEditContract"));

        gridLayout_4->addWidget(lineEditContract, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 3, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 1, 0, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEditSum = new QLineEdit(groupBox_2);
        lineEditSum->setObjectName(QString::fromUtf8("lineEditSum"));
        lineEditSum->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_2->addWidget(lineEditSum);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_2->addWidget(label_9);

        comboBoxCurrency = new QComboBox(groupBox_2);
        comboBoxCurrency->setObjectName(QString::fromUtf8("comboBoxCurrency"));
        comboBoxCurrency->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(comboBoxCurrency);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout_4->addLayout(horizontalLayout_2, 4, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        dateEditDateRequisites = new QDateEdit(groupBox_2);
        dateEditDateRequisites->setObjectName(QString::fromUtf8("dateEditDateRequisites"));
        dateEditDateRequisites->setMinimumSize(QSize(90, 0));
        dateEditDateRequisites->setCalendarPopup(true);
        dateEditDateRequisites->setDate(QDate(2021, 1, 1));

        horizontalLayout->addWidget(dateEditDateRequisites);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_4->addLayout(horizontalLayout, 2, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        dateEditTermin = new QDateEdit(groupBox_2);
        dateEditTermin->setObjectName(QString::fromUtf8("dateEditTermin"));
        dateEditTermin->setMinimumSize(QSize(90, 0));
        dateEditTermin->setCalendarPopup(true);
        dateEditTermin->setDate(QDate(2021, 1, 1));

        horizontalLayout_4->addWidget(dateEditTermin);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout_4->addLayout(horizontalLayout_4, 3, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButtonPrintNote = new QPushButton(TheNoteForm);
        pushButtonPrintNote->setObjectName(QString::fromUtf8("pushButtonPrintNote"));

        horizontalLayout_3->addWidget(pushButtonPrintNote);

        buttonBoxNote = new QDialogButtonBox(TheNoteForm);
        buttonBoxNote->setObjectName(QString::fromUtf8("buttonBoxNote"));
        buttonBoxNote->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBoxNote);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(TheNoteForm);

        QMetaObject::connectSlotsByName(TheNoteForm);
    } // setupUi

    void retranslateUi(QWidget *TheNoteForm)
    {
        TheNoteForm->setWindowTitle(QCoreApplication::translate("TheNoteForm", "Nota", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("TheNoteForm", "Create from", nullptr));
        groupBox_3->setTitle(QString());
        label_3->setText(QCoreApplication::translate("TheNoteForm", "Counterparty", nullptr));
        label->setText(QCoreApplication::translate("TheNoteForm", "Number", nullptr));
        label_2->setText(QCoreApplication::translate("TheNoteForm", "Date", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TheNoteForm", "Note requisites", nullptr));
        label_6->setText(QCoreApplication::translate("TheNoteForm", "Date", nullptr));
        label_4->setText(QCoreApplication::translate("TheNoteForm", "Contract", nullptr));
        label_7->setText(QCoreApplication::translate("TheNoteForm", "Termin", nullptr));
        label_5->setText(QCoreApplication::translate("TheNoteForm", "Invoice VAT", nullptr));
        label_8->setText(QCoreApplication::translate("TheNoteForm", "Sum", nullptr));
        label_9->setText(QCoreApplication::translate("TheNoteForm", "Currency", nullptr));
        pushButtonPrintNote->setText(QCoreApplication::translate("TheNoteForm", "Print Note", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheNoteForm: public Ui_TheNoteForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THENOTEFORM_H
