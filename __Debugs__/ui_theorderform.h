/********************************************************************************
** Form generated from reading UI file 'theorderform.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEORDERFORM_H
#define UI_THEORDERFORM_H

#include <QtCore/QDate>
#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheOrderForm
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_9;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *dateEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_16;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboBox_4;
    QPushButton *pushButton_2;
    QLabel *label_15;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QLabel *label_17;
    QLineEdit *lineEdit_7;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label_7;
    QComboBox *comboBox_5;
    QLabel *label_8;
    QComboBox *comboBox_6;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLineEdit *lineEdit_2;
    QLabel *label_10;
    QLineEdit *lineEdit_3;
    QLabel *label_11;
    QLineEdit *lineEdit_4;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_12;
    QComboBox *comboBox_7;
    QLabel *label_13;
    QCheckBox *checkBox;
    QLabel *label_14;
    QCheckBox *checkBox_2;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_7;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QWidget *TheOrderForm)
    {
        if (TheOrderForm->objectName().isEmpty())
            TheOrderForm->setObjectName(QString::fromUtf8("TheOrderForm"));
        TheOrderForm->resize(400, 738);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TheOrderForm->sizePolicy().hasHeightForWidth());
        TheOrderForm->setSizePolicy(sizePolicy);
        TheOrderForm->setMinimumSize(QSize(400, 0));
        TheOrderForm->setFocusPolicy(Qt::NoFocus);
        TheOrderForm->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        gridLayout_2 = new QGridLayout(TheOrderForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_7 = new QGroupBox(TheOrderForm);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_9 = new QGridLayout(groupBox_7);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        pushButton_3 = new QPushButton(groupBox_7);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_9->addWidget(pushButton_3, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_7);

        groupBox_2 = new QGroupBox(TheOrderForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);

        dateEdit = new QDateEdit(groupBox_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy2);
        dateEdit->setMinimumSize(QSize(90, 0));
        dateEdit->setFrame(true);
        dateEdit->setAccelerated(false);
        dateEdit->setProperty("showGroupSeparator", QVariant(true));
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2020, 1, 1));

        horizontalLayout->addWidget(dateEdit);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(comboBox);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(TheOrderForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy5);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 1, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout_3->addWidget(comboBox_3);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy6);
        pushButton->setMinimumSize(QSize(85, 0));

        horizontalLayout_3->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_3, 5, 1, 1, 1);

        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setReadOnly(true);

        gridLayout->addWidget(lineEdit_5, 0, 1, 1, 1);

        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout->addWidget(lineEdit_6, 1, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        comboBox_4 = new QComboBox(groupBox);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        horizontalLayout_4->addWidget(comboBox_4);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy6.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy6);
        pushButton_2->setMinimumSize(QSize(85, 0));

        horizontalLayout_4->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout_4, 3, 1, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 4, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 2, 0, 1, 1);

        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        gridLayout->addWidget(lineEdit_7, 2, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(TheOrderForm);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        gridLayout_6 = new QGridLayout(groupBox_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy7(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy7);
        label_6->setMinimumSize(QSize(40, 0));

        horizontalLayout_5->addWidget(label_6);

        lineEdit = new QLineEdit(groupBox_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy4.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy4);

        horizontalLayout_5->addWidget(lineEdit);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy7.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy7);
        label_7->setMinimumSize(QSize(40, 0));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_7);

        comboBox_5 = new QComboBox(groupBox_3);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        sizePolicy4.setHeightForWidth(comboBox_5->sizePolicy().hasHeightForWidth());
        comboBox_5->setSizePolicy(sizePolicy4);

        horizontalLayout_5->addWidget(comboBox_5);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy7.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy7);
        label_8->setMinimumSize(QSize(50, 0));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_8);

        comboBox_6 = new QComboBox(groupBox_3);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        sizePolicy4.setHeightForWidth(comboBox_6->sizePolicy().hasHeightForWidth());
        comboBox_6->setSizePolicy(sizePolicy4);

        horizontalLayout_5->addWidget(comboBox_6);


        gridLayout_6->addLayout(horizontalLayout_5, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(TheOrderForm);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy8);
        gridLayout_8 = new QGridLayout(groupBox_4);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(40, 0));

        horizontalLayout_6->addWidget(label_9);

        lineEdit_2 = new QLineEdit(groupBox_4);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_6->addWidget(lineEdit_2);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy3.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy3);
        label_10->setMinimumSize(QSize(38, 0));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_10);

        lineEdit_3 = new QLineEdit(groupBox_4);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_6->addWidget(lineEdit_3);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy9(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy9);
        label_11->setMinimumSize(QSize(45, 0));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_11);

        lineEdit_4 = new QLineEdit(groupBox_4);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_6->addWidget(lineEdit_4);


        gridLayout_8->addLayout(horizontalLayout_6, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(TheOrderForm);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy3.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy3);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_12->setWordWrap(false);
        label_12->setIndent(0);

        horizontalLayout_2->addWidget(label_12);

        comboBox_7 = new QComboBox(groupBox_5);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));

        horizontalLayout_2->addWidget(comboBox_7);

        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy3.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy3);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_13);

        checkBox = new QCheckBox(groupBox_5);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        sizePolicy6.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy6);
        checkBox->setContextMenuPolicy(Qt::CustomContextMenu);
        checkBox->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        checkBox->setChecked(false);
        checkBox->setAutoRepeat(false);
        checkBox->setAutoExclusive(false);

        horizontalLayout_2->addWidget(checkBox);

        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy3.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy3);
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_14);

        checkBox_2 = new QCheckBox(groupBox_5);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        sizePolicy6.setHeightForWidth(checkBox_2->sizePolicy().hasHeightForWidth());
        checkBox_2->setSizePolicy(sizePolicy6);

        horizontalLayout_2->addWidget(checkBox_2);


        gridLayout_5->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(TheOrderForm);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_7 = new QGridLayout(groupBox_6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        plainTextEdit = new QPlainTextEdit(groupBox_6);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout_7->addWidget(plainTextEdit, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_4 = new QPushButton(TheOrderForm);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_7->addWidget(pushButton_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        pushButton_5 = new QPushButton(TheOrderForm);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_7->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(TheOrderForm);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_7->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout_7);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(TheOrderForm);

        QMetaObject::connectSlotsByName(TheOrderForm);
    } // setupUi

    void retranslateUi(QWidget *TheOrderForm)
    {
        TheOrderForm->setWindowTitle(QCoreApplication::translate("TheOrderForm", "OrderCreate", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("TheOrderForm", "Create an Order for a Exist Order", nullptr));
        pushButton_3->setText(QCoreApplication::translate("TheOrderForm", "Create an Order for a Exist Order", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TheOrderForm", "Date and Place", nullptr));
        label->setText(QCoreApplication::translate("TheOrderForm", "Date", nullptr));
        label_2->setText(QCoreApplication::translate("TheOrderForm", "Place", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TheOrderForm", "Contract", nullptr));
        label_4->setText(QCoreApplication::translate("TheOrderForm", "Driver", nullptr));
        label_16->setText(QCoreApplication::translate("TheOrderForm", "Contract  \342\204\226 ", nullptr));
        label_5->setText(QCoreApplication::translate("TheOrderForm", "Contacts", nullptr));
        pushButton->setText(QCoreApplication::translate("TheOrderForm", "Add Contact", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TheOrderForm", "Add Customer", nullptr));
        label_15->setText(QCoreApplication::translate("TheOrderForm", "ID", nullptr));
        label_3->setText(QCoreApplication::translate("TheOrderForm", "Customer", nullptr));
        label_17->setText(QCoreApplication::translate("TheOrderForm", "Order \342\204\226", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("TheOrderForm", "Cost", nullptr));
        label_6->setText(QCoreApplication::translate("TheOrderForm", "Price", nullptr));
        label_7->setText(QCoreApplication::translate("TheOrderForm", "Period", nullptr));
        label_8->setText(QCoreApplication::translate("TheOrderForm", "Currency", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("TheOrderForm", "Route", nullptr));
        label_9->setText(QCoreApplication::translate("TheOrderForm", "Arrival", nullptr));
        label_10->setText(QCoreApplication::translate("TheOrderForm", "Route", nullptr));
        label_11->setText(QCoreApplication::translate("TheOrderForm", "Rate", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("TheOrderForm", "Return Documents", nullptr));
        label_12->setText(QCoreApplication::translate("TheOrderForm", "Max Time\n"
"Sending And\n"
"Processing Post", nullptr));
        label_13->setText(QCoreApplication::translate("TheOrderForm", "2 copy\n"
"CMR", nullptr));
        checkBox->setText(QString());
        label_14->setText(QCoreApplication::translate("TheOrderForm", "Contract\n"
"original", nullptr));
        checkBox_2->setText(QString());
        groupBox_6->setTitle(QCoreApplication::translate("TheOrderForm", "Notes", nullptr));
        pushButton_4->setText(QCoreApplication::translate("TheOrderForm", "Create an invoice for the order", nullptr));
        pushButton_5->setText(QCoreApplication::translate("TheOrderForm", "OK", nullptr));
        pushButton_6->setText(QCoreApplication::translate("TheOrderForm", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheOrderForm: public Ui_TheOrderForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEORDERFORM_H
