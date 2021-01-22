/********************************************************************************
** Form generated from reading UI file 'thenoteform.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
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
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QComboBox *comboBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QLabel *label_4;
    QDateEdit *dateEdit_3;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_2;
    QDateEdit *dateEdit_2;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_3;
    QLabel *label_9;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *TheNote)
    {
        if (TheNote->objectName().isEmpty())
            TheNote->setObjectName(QString::fromUtf8("TheNote"));
        TheNote->resize(400, 422);
        TheNote->setMinimumSize(QSize(400, 0));
        gridLayout_2 = new QGridLayout(TheNote);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(TheNote);
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

        groupBox_3 = new QGroupBox(TheNote);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_6 = new QGridLayout(groupBox_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(groupBox_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        dateEdit = new QDateEdit(groupBox_3);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2021, 1, 1));

        gridLayout->addWidget(dateEdit, 2, 1, 1, 1);

        comboBox = new QComboBox(groupBox_3);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 3, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(TheNote);
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

        dateEdit_3 = new QDateEdit(groupBox_2);
        dateEdit_3->setObjectName(QString::fromUtf8("dateEdit_3"));
        dateEdit_3->setCalendarPopup(true);
        dateEdit_3->setDate(QDate(2021, 1, 1));

        gridLayout_4->addWidget(dateEdit_3, 3, 1, 1, 1);

        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout_4->addWidget(comboBox_2, 1, 1, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_4->addWidget(lineEdit_2, 0, 1, 1, 1);

        dateEdit_2 = new QDateEdit(groupBox_2);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setCalendarPopup(true);
        dateEdit_2->setDate(QDate(2021, 1, 1));

        gridLayout_4->addWidget(dateEdit_2, 2, 1, 1, 1);

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
        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_2->addWidget(lineEdit_3);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_2->addWidget(label_9);

        comboBox_3 = new QComboBox(groupBox_2);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout_2->addWidget(comboBox_3);


        gridLayout_4->addLayout(horizontalLayout_2, 4, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_2 = new QPushButton(TheNote);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        buttonBox = new QDialogButtonBox(TheNote);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(TheNote);

        QMetaObject::connectSlotsByName(TheNote);
    } // setupUi

    void retranslateUi(QWidget *TheNote)
    {
        TheNote->setWindowTitle(QCoreApplication::translate("TheNoteForm", "Nota", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("TheNoteForm", "Create from", nullptr));
        groupBox_3->setTitle(QString());
        label_3->setText(QCoreApplication::translate("TheNoteForm", "Contactor", nullptr));
        label->setText(QCoreApplication::translate("TheNoteForm", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("TheNoteForm", "Date", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TheNoteForm", "Note requisites", nullptr));
        label_6->setText(QCoreApplication::translate("TheNoteForm", "Date", nullptr));
        label_4->setText(QCoreApplication::translate("TheNoteForm", "\320\245\320\245\320\245???\320\245\320\245", nullptr));
        label_7->setText(QCoreApplication::translate("TheNoteForm", "Termin ???", nullptr));
        label_5->setText(QCoreApplication::translate("TheNoteForm", "Invoice VAT", nullptr));
        label_8->setText(QCoreApplication::translate("TheNoteForm", "Sum", nullptr));
        label_9->setText(QCoreApplication::translate("TheNoteForm", "Currency", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TheNoteForm", "Print Note", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheNoteForm: public Ui_TheNoteForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THENOTEFORM_H
