/********************************************************************************
** Form generated from reading UI file 'thepaymentform.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEPAYMENTFORM_H
#define UI_THEPAYMENTFORM_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
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

class Ui_ThePaymentForm
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_2;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_4;
    QDateEdit *dateEdit_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QLabel *label_9;
    QComboBox *comboBox_3;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QLabel *label_12;
    QLabel *label_10;
    QLineEdit *lineEdit_4;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *label_15;
    QLineEdit *lineEdit_6;
    QLabel *label_17;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;

    void setupUi(QWidget *ThePaymentForm)
    {
        if (ThePaymentForm->objectName().isEmpty())
            ThePaymentForm->setObjectName(QString::fromUtf8("ThePaymentForm"));
        ThePaymentForm->resize(400, 540);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ThePaymentForm->sizePolicy().hasHeightForWidth());
        ThePaymentForm->setSizePolicy(sizePolicy);
        ThePaymentForm->setMinimumSize(QSize(400, 0));
        gridLayout = new QGridLayout(ThePaymentForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(ThePaymentForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBox = new QComboBox(groupBox_3);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(comboBox);

        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 0));
        pushButton->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_2->addWidget(pushButton);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_2->addWidget(lineEdit_2, 2, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comboBox_2 = new QComboBox(groupBox_3);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        sizePolicy2.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(comboBox_2);

        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy3);
        pushButton_2->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_3->addWidget(pushButton_2);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        dateEdit_2 = new QDateEdit(groupBox_3);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setMinimumSize(QSize(85, 0));
        dateEdit_2->setCalendarPopup(true);
        dateEdit_2->setDate(QDate(2021, 1, 1));

        horizontalLayout_4->addWidget(dateEdit_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_4, 3, 1, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 3, 0, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        dateEdit = new QDateEdit(groupBox_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMinimumSize(QSize(85, 0));
        dateEdit->setCalendarPopup(true);

        horizontalLayout->addWidget(dateEdit);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_5->addWidget(label_8);

        lineEdit_3 = new QLineEdit(groupBox_4);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_5->addWidget(lineEdit_3);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_5->addWidget(label_9);

        comboBox_3 = new QComboBox(groupBox_4);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout_5->addWidget(comboBox_3);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout_6->addLayout(verticalLayout_2, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_4, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_5 = new QGroupBox(ThePaymentForm);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setCheckable(true);
        groupBox_5->setChecked(true);
        gridLayout_8 = new QGridLayout(groupBox_5);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_7->addWidget(label_12, 2, 0, 1, 1);

        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_7->addWidget(label_10, 0, 0, 1, 1);

        lineEdit_4 = new QLineEdit(groupBox_5);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout_7->addWidget(lineEdit_4, 2, 1, 1, 1);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy4);

        gridLayout_7->addWidget(label_11, 0, 1, 1, 1);

        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_7->addWidget(label_13, 2, 2, 1, 1);

        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_7->addWidget(label_14, 1, 0, 1, 4);

        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_7->addWidget(label_16, 4, 0, 1, 1);

        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_7->addWidget(label_15, 3, 0, 1, 4);

        lineEdit_6 = new QLineEdit(groupBox_5);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout_7->addWidget(lineEdit_6, 4, 1, 1, 1);

        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_7->addWidget(label_17, 4, 2, 1, 1);

        comboBox_4 = new QComboBox(groupBox_5);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        gridLayout_7->addWidget(comboBox_4, 2, 3, 1, 1);

        comboBox_5 = new QComboBox(groupBox_5);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        gridLayout_7->addWidget(comboBox_5, 4, 3, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_5);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ThePaymentForm);

        QMetaObject::connectSlotsByName(ThePaymentForm);
    } // setupUi

    void retranslateUi(QWidget *ThePaymentForm)
    {
        ThePaymentForm->setWindowTitle(QCoreApplication::translate("ThePaymentForm", "Payment", nullptr));
        groupBox->setTitle(QString());
        groupBox_3->setTitle(QCoreApplication::translate("ThePaymentForm", "Base payment", nullptr));
        label_3->setText(QCoreApplication::translate("ThePaymentForm", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("ThePaymentForm", "...", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ThePaymentForm", "...", nullptr));
        label_6->setText(QCoreApplication::translate("ThePaymentForm", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("ThePaymentForm", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("ThePaymentForm", "TextLabel", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ThePaymentForm", "Payment Number", nullptr));
        label->setText(QCoreApplication::translate("ThePaymentForm", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("ThePaymentForm", "TextLabel", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ThePaymentForm", "To Pay", nullptr));
        label_7->setText(QCoreApplication::translate("ThePaymentForm", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("ThePaymentForm", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("ThePaymentForm", "TextLabel", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("ThePaymentForm", "SplitPayment", nullptr));
        label_12->setText(QCoreApplication::translate("ThePaymentForm", "TextLabel", nullptr));
        label_10->setText(QCoreApplication::translate("ThePaymentForm", "Exchange Rates: ", nullptr));
        label_11->setText(QCoreApplication::translate("ThePaymentForm", "3.00", nullptr));
        label_13->setText(QCoreApplication::translate("ThePaymentForm", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("ThePaymentForm", "Split header net PLN", nullptr));
        label_16->setText(QCoreApplication::translate("ThePaymentForm", "VAT", nullptr));
        label_15->setText(QCoreApplication::translate("ThePaymentForm", "Split header VAT PLN", nullptr));
        label_17->setText(QCoreApplication::translate("ThePaymentForm", "\320\241urrency", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThePaymentForm: public Ui_ThePaymentForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEPAYMENTFORM_H
