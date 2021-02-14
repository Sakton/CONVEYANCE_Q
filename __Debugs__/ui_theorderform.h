/********************************************************************************
** Form generated from reading UI file 'theorderform.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
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
    QDateEdit *dateEditDate;
    QLabel *label_2;
    QComboBox *comboBoxPlace;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *labelContractNum;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBoxContacts;
    QPushButton *pushButton;
    QLineEdit *lineEditID;
    QLineEdit *lineEditContract;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboBoxCustomer;
    QPushButton *pushButtonAddCustomer;
    QLabel *label_15;
    QComboBox *comboBoxDriver;
    QLabel *label_3;
    QLabel *label_17;
    QLineEdit *lineEditOrderNum;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEditPrice;
    QLabel *label_7;
    QComboBox *comboBoxPeriod;
    QLabel *label_8;
    QComboBox *comboBoxCurrency;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLineEdit *lineEditArrival;
    QLabel *label_10;
    QLineEdit *lineEditRoute;
    QLabel *label_11;
    QLineEdit *lineEditRate;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_12;
    QComboBox *comboBoxMaxTime;
    QLabel *label_13;
    QCheckBox *checkBoxCopyCMR;
    QLabel *label_14;
    QCheckBox *checkBoxContractOriginal;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_7;
    QPlainTextEdit *plainTextEditNotes;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButtonCreateOrder;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOKForm;
    QPushButton *pushButtonCancelForm;

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

        dateEditDate = new QDateEdit(groupBox_2);
        dateEditDate->setObjectName(QString::fromUtf8("dateEditDate"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dateEditDate->sizePolicy().hasHeightForWidth());
        dateEditDate->setSizePolicy(sizePolicy2);
        dateEditDate->setMinimumSize(QSize(90, 0));
        dateEditDate->setFrame(true);
        dateEditDate->setAccelerated(false);
        dateEditDate->setProperty("showGroupSeparator", QVariant(true));
        dateEditDate->setCalendarPopup(true);
        dateEditDate->setDate(QDate(2020, 1, 1));

        horizontalLayout->addWidget(dateEditDate);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        comboBoxPlace = new QComboBox(groupBox_2);
        comboBoxPlace->setObjectName(QString::fromUtf8("comboBoxPlace"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(comboBoxPlace->sizePolicy().hasHeightForWidth());
        comboBoxPlace->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(comboBoxPlace);


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

        labelContractNum = new QLabel(groupBox);
        labelContractNum->setObjectName(QString::fromUtf8("labelContractNum"));

        gridLayout->addWidget(labelContractNum, 1, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comboBoxContacts = new QComboBox(groupBox);
        comboBoxContacts->setObjectName(QString::fromUtf8("comboBoxContacts"));

        horizontalLayout_3->addWidget(comboBoxContacts);

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

        lineEditID = new QLineEdit(groupBox);
        lineEditID->setObjectName(QString::fromUtf8("lineEditID"));
        lineEditID->setReadOnly(false);

        gridLayout->addWidget(lineEditID, 0, 1, 1, 1);

        lineEditContract = new QLineEdit(groupBox);
        lineEditContract->setObjectName(QString::fromUtf8("lineEditContract"));

        gridLayout->addWidget(lineEditContract, 1, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        comboBoxCustomer = new QComboBox(groupBox);
        comboBoxCustomer->setObjectName(QString::fromUtf8("comboBoxCustomer"));

        horizontalLayout_4->addWidget(comboBoxCustomer);

        pushButtonAddCustomer = new QPushButton(groupBox);
        pushButtonAddCustomer->setObjectName(QString::fromUtf8("pushButtonAddCustomer"));
        sizePolicy6.setHeightForWidth(pushButtonAddCustomer->sizePolicy().hasHeightForWidth());
        pushButtonAddCustomer->setSizePolicy(sizePolicy6);
        pushButtonAddCustomer->setMinimumSize(QSize(85, 0));

        horizontalLayout_4->addWidget(pushButtonAddCustomer);


        gridLayout->addLayout(horizontalLayout_4, 3, 1, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 0, 0, 1, 1);

        comboBoxDriver = new QComboBox(groupBox);
        comboBoxDriver->setObjectName(QString::fromUtf8("comboBoxDriver"));

        gridLayout->addWidget(comboBoxDriver, 4, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 2, 0, 1, 1);

        lineEditOrderNum = new QLineEdit(groupBox);
        lineEditOrderNum->setObjectName(QString::fromUtf8("lineEditOrderNum"));

        gridLayout->addWidget(lineEditOrderNum, 2, 1, 1, 1);


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

        lineEditPrice = new QLineEdit(groupBox_3);
        lineEditPrice->setObjectName(QString::fromUtf8("lineEditPrice"));
        sizePolicy4.setHeightForWidth(lineEditPrice->sizePolicy().hasHeightForWidth());
        lineEditPrice->setSizePolicy(sizePolicy4);

        horizontalLayout_5->addWidget(lineEditPrice);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy7.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy7);
        label_7->setMinimumSize(QSize(40, 0));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_7);

        comboBoxPeriod = new QComboBox(groupBox_3);
        comboBoxPeriod->setObjectName(QString::fromUtf8("comboBoxPeriod"));
        sizePolicy4.setHeightForWidth(comboBoxPeriod->sizePolicy().hasHeightForWidth());
        comboBoxPeriod->setSizePolicy(sizePolicy4);

        horizontalLayout_5->addWidget(comboBoxPeriod);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy7.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy7);
        label_8->setMinimumSize(QSize(50, 0));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_8);

        comboBoxCurrency = new QComboBox(groupBox_3);
        comboBoxCurrency->setObjectName(QString::fromUtf8("comboBoxCurrency"));
        sizePolicy4.setHeightForWidth(comboBoxCurrency->sizePolicy().hasHeightForWidth());
        comboBoxCurrency->setSizePolicy(sizePolicy4);

        horizontalLayout_5->addWidget(comboBoxCurrency);


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

        lineEditArrival = new QLineEdit(groupBox_4);
        lineEditArrival->setObjectName(QString::fromUtf8("lineEditArrival"));

        horizontalLayout_6->addWidget(lineEditArrival);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy3.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy3);
        label_10->setMinimumSize(QSize(38, 0));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_10);

        lineEditRoute = new QLineEdit(groupBox_4);
        lineEditRoute->setObjectName(QString::fromUtf8("lineEditRoute"));

        horizontalLayout_6->addWidget(lineEditRoute);

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

        lineEditRate = new QLineEdit(groupBox_4);
        lineEditRate->setObjectName(QString::fromUtf8("lineEditRate"));

        horizontalLayout_6->addWidget(lineEditRate);


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

        comboBoxMaxTime = new QComboBox(groupBox_5);
        comboBoxMaxTime->setObjectName(QString::fromUtf8("comboBoxMaxTime"));

        horizontalLayout_2->addWidget(comboBoxMaxTime);

        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy3.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy3);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_13);

        checkBoxCopyCMR = new QCheckBox(groupBox_5);
        checkBoxCopyCMR->setObjectName(QString::fromUtf8("checkBoxCopyCMR"));
        sizePolicy6.setHeightForWidth(checkBoxCopyCMR->sizePolicy().hasHeightForWidth());
        checkBoxCopyCMR->setSizePolicy(sizePolicy6);
        checkBoxCopyCMR->setContextMenuPolicy(Qt::CustomContextMenu);
        checkBoxCopyCMR->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        checkBoxCopyCMR->setChecked(false);
        checkBoxCopyCMR->setAutoRepeat(false);
        checkBoxCopyCMR->setAutoExclusive(false);

        horizontalLayout_2->addWidget(checkBoxCopyCMR);

        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy3.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy3);
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_14);

        checkBoxContractOriginal = new QCheckBox(groupBox_5);
        checkBoxContractOriginal->setObjectName(QString::fromUtf8("checkBoxContractOriginal"));
        sizePolicy6.setHeightForWidth(checkBoxContractOriginal->sizePolicy().hasHeightForWidth());
        checkBoxContractOriginal->setSizePolicy(sizePolicy6);

        horizontalLayout_2->addWidget(checkBoxContractOriginal);


        gridLayout_5->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(TheOrderForm);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_7 = new QGridLayout(groupBox_6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        plainTextEditNotes = new QPlainTextEdit(groupBox_6);
        plainTextEditNotes->setObjectName(QString::fromUtf8("plainTextEditNotes"));

        gridLayout_7->addWidget(plainTextEditNotes, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButtonCreateOrder = new QPushButton(TheOrderForm);
        pushButtonCreateOrder->setObjectName(QString::fromUtf8("pushButtonCreateOrder"));

        horizontalLayout_7->addWidget(pushButtonCreateOrder);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        pushButtonOKForm = new QPushButton(TheOrderForm);
        pushButtonOKForm->setObjectName(QString::fromUtf8("pushButtonOKForm"));

        horizontalLayout_7->addWidget(pushButtonOKForm);

        pushButtonCancelForm = new QPushButton(TheOrderForm);
        pushButtonCancelForm->setObjectName(QString::fromUtf8("pushButtonCancelForm"));

        horizontalLayout_7->addWidget(pushButtonCancelForm);


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
        labelContractNum->setText(QCoreApplication::translate("TheOrderForm", "Contract  \342\204\226 ", nullptr));
        label_5->setText(QCoreApplication::translate("TheOrderForm", "Contacts", nullptr));
        pushButton->setText(QCoreApplication::translate("TheOrderForm", "Add Contact", nullptr));
        pushButtonAddCustomer->setText(QCoreApplication::translate("TheOrderForm", "Add Customer", nullptr));
        label_15->setText(QCoreApplication::translate("TheOrderForm", "Number", nullptr));
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
        checkBoxCopyCMR->setText(QString());
        label_14->setText(QCoreApplication::translate("TheOrderForm", "Contract\n"
"original", nullptr));
        checkBoxContractOriginal->setText(QString());
        groupBox_6->setTitle(QCoreApplication::translate("TheOrderForm", "Notes", nullptr));
        pushButtonCreateOrder->setText(QCoreApplication::translate("TheOrderForm", "Create an invoice for the order", nullptr));
        pushButtonOKForm->setText(QCoreApplication::translate("TheOrderForm", "OK", nullptr));
        pushButtonCancelForm->setText(QCoreApplication::translate("TheOrderForm", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheOrderForm: public Ui_TheOrderForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEORDERFORM_H
