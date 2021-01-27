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
#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
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
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditIdPayment;
    QLabel *label_2;
    QDateEdit *dateEditPayment;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxCounter;
    QPushButton *pushButtonCouterParty;
    QLineEdit *lineEditNumberDocument;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBoxBaseDocument;
    QPushButton *pushButtonDocBase;
    QHBoxLayout *horizontalLayout_4;
    QDateEdit *dateEditDateReceipt;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBoxSplitPayment;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QLabel *label_12;
    QLabel *label_10;
    QLineEdit *lineEditNet;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_16;
    QLineEdit *lineEditVAT;
    QLabel *label_17;
    QComboBox *comboBoxCurrencyNet;
    QComboBox *comboBoxCurrencyVat;
    QLabel *label_14;
    QLabel *label_15;
    QDialogButtonBox *buttonBoxPayment;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_11;
    QVBoxLayout *verticalLayout_2;
    QFrame *framePay;
    QGridLayout *gridLayout_10;
    QFrame *frame;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelTO_PAY;
    QLabel *labelSUMMA_PAYMENT;
    QGridLayout *gridLayout_6;
    QLineEdit *lineEditGross;
    QLabel *label_9;
    QLabel *label_8;
    QComboBox *comboBoxCurrencyGross;

    void setupUi(QWidget *ThePaymentForm)
    {
        if (ThePaymentForm->objectName().isEmpty())
            ThePaymentForm->setObjectName(QString::fromUtf8("ThePaymentForm"));
        ThePaymentForm->resize(400, 615);
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
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
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

        lineEditIdPayment = new QLineEdit(groupBox_2);
        lineEditIdPayment->setObjectName(QString::fromUtf8("lineEditIdPayment"));

        horizontalLayout->addWidget(lineEditIdPayment);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(50, 0));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        dateEditPayment = new QDateEdit(groupBox_2);
        dateEditPayment->setObjectName(QString::fromUtf8("dateEditPayment"));
        dateEditPayment->setMinimumSize(QSize(85, 0));
        dateEditPayment->setCalendarPopup(true);

        horizontalLayout->addWidget(dateEditPayment);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
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
        comboBoxCounter = new QComboBox(groupBox_3);
        comboBoxCounter->setObjectName(QString::fromUtf8("comboBoxCounter"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBoxCounter->sizePolicy().hasHeightForWidth());
        comboBoxCounter->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(comboBoxCounter);

        pushButtonCouterParty = new QPushButton(groupBox_3);
        pushButtonCouterParty->setObjectName(QString::fromUtf8("pushButtonCouterParty"));
        pushButtonCouterParty->setMinimumSize(QSize(0, 0));
        pushButtonCouterParty->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_2->addWidget(pushButtonCouterParty);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        lineEditNumberDocument = new QLineEdit(groupBox_3);
        lineEditNumberDocument->setObjectName(QString::fromUtf8("lineEditNumberDocument"));

        gridLayout_2->addWidget(lineEditNumberDocument, 2, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comboBoxBaseDocument = new QComboBox(groupBox_3);
        comboBoxBaseDocument->setObjectName(QString::fromUtf8("comboBoxBaseDocument"));
        sizePolicy2.setHeightForWidth(comboBoxBaseDocument->sizePolicy().hasHeightForWidth());
        comboBoxBaseDocument->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(comboBoxBaseDocument);

        pushButtonDocBase = new QPushButton(groupBox_3);
        pushButtonDocBase->setObjectName(QString::fromUtf8("pushButtonDocBase"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButtonDocBase->sizePolicy().hasHeightForWidth());
        pushButtonDocBase->setSizePolicy(sizePolicy3);
        pushButtonDocBase->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_3->addWidget(pushButtonDocBase);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        dateEditDateReceipt = new QDateEdit(groupBox_3);
        dateEditDateReceipt->setObjectName(QString::fromUtf8("dateEditDateReceipt"));
        dateEditDateReceipt->setMinimumSize(QSize(85, 0));
        dateEditDateReceipt->setCalendarPopup(true);
        dateEditDateReceipt->setDate(QDate(2021, 1, 1));

        horizontalLayout_4->addWidget(dateEditDateReceipt);

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

        groupBoxSplitPayment = new QGroupBox(groupBox);
        groupBoxSplitPayment->setObjectName(QString::fromUtf8("groupBoxSplitPayment"));
        groupBoxSplitPayment->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);"));
        groupBoxSplitPayment->setCheckable(true);
        groupBoxSplitPayment->setChecked(false);
        gridLayout_8 = new QGridLayout(groupBoxSplitPayment);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_12 = new QLabel(groupBoxSplitPayment);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_12, 2, 0, 1, 1);

        label_10 = new QLabel(groupBoxSplitPayment);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(80, 0));

        gridLayout_7->addWidget(label_10, 0, 0, 1, 1);

        lineEditNet = new QLineEdit(groupBoxSplitPayment);
        lineEditNet->setObjectName(QString::fromUtf8("lineEditNet"));

        gridLayout_7->addWidget(lineEditNet, 2, 1, 1, 1);

        label_11 = new QLabel(groupBoxSplitPayment);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy4);

        gridLayout_7->addWidget(label_11, 0, 1, 1, 1);

        label_13 = new QLabel(groupBoxSplitPayment);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(50, 0));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_13, 2, 2, 1, 1);

        label_16 = new QLabel(groupBoxSplitPayment);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_16, 4, 0, 1, 1);

        lineEditVAT = new QLineEdit(groupBoxSplitPayment);
        lineEditVAT->setObjectName(QString::fromUtf8("lineEditVAT"));

        gridLayout_7->addWidget(lineEditVAT, 4, 1, 1, 1);

        label_17 = new QLabel(groupBoxSplitPayment);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_17, 4, 2, 1, 1);

        comboBoxCurrencyNet = new QComboBox(groupBoxSplitPayment);
        comboBoxCurrencyNet->setObjectName(QString::fromUtf8("comboBoxCurrencyNet"));

        gridLayout_7->addWidget(comboBoxCurrencyNet, 2, 3, 1, 1);

        comboBoxCurrencyVat = new QComboBox(groupBoxSplitPayment);
        comboBoxCurrencyVat->setObjectName(QString::fromUtf8("comboBoxCurrencyVat"));

        gridLayout_7->addWidget(comboBoxCurrencyVat, 4, 3, 1, 1);

        label_14 = new QLabel(groupBoxSplitPayment);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QFont font;
        font.setPointSize(11);
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));

        gridLayout_7->addWidget(label_14, 1, 0, 1, 2);

        label_15 = new QLabel(groupBoxSplitPayment);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));

        gridLayout_7->addWidget(label_15, 3, 0, 1, 2);


        gridLayout_8->addLayout(gridLayout_7, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBoxSplitPayment, 3, 0, 1, 1);

        buttonBoxPayment = new QDialogButtonBox(groupBox);
        buttonBoxPayment->setObjectName(QString::fromUtf8("buttonBoxPayment"));
        buttonBoxPayment->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBoxPayment, 4, 0, 1, 1);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_11 = new QGridLayout(groupBox_4);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        framePay = new QFrame(groupBox_4);
        framePay->setObjectName(QString::fromUtf8("framePay"));
        framePay->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);"));
        framePay->setFrameShape(QFrame::StyledPanel);
        framePay->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(framePay);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        frame = new QFrame(framePay);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout_9 = new QGridLayout(frame);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelTO_PAY = new QLabel(frame);
        labelTO_PAY->setObjectName(QString::fromUtf8("labelTO_PAY"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(labelTO_PAY->sizePolicy().hasHeightForWidth());
        labelTO_PAY->setSizePolicy(sizePolicy5);
        labelTO_PAY->setMinimumSize(QSize(100, 0));
        QFont font1;
        font1.setPointSize(18);
        labelTO_PAY->setFont(font1);
        labelTO_PAY->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));
        labelTO_PAY->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelTO_PAY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(labelTO_PAY);

        labelSUMMA_PAYMENT = new QLabel(frame);
        labelSUMMA_PAYMENT->setObjectName(QString::fromUtf8("labelSUMMA_PAYMENT"));
        sizePolicy4.setHeightForWidth(labelSUMMA_PAYMENT->sizePolicy().hasHeightForWidth());
        labelSUMMA_PAYMENT->setSizePolicy(sizePolicy4);
        labelSUMMA_PAYMENT->setFont(font1);
        labelSUMMA_PAYMENT->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 0);"));
        labelSUMMA_PAYMENT->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(labelSUMMA_PAYMENT);


        gridLayout_9->addLayout(horizontalLayout_5, 0, 1, 1, 1);


        gridLayout_10->addWidget(frame, 0, 0, 1, 1);


        verticalLayout_2->addWidget(framePay);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        lineEditGross = new QLineEdit(groupBox_4);
        lineEditGross->setObjectName(QString::fromUtf8("lineEditGross"));

        gridLayout_6->addWidget(lineEditGross, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(50, 0));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_9, 1, 2, 1, 1);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_8, 1, 0, 1, 1);

        comboBoxCurrencyGross = new QComboBox(groupBox_4);
        comboBoxCurrencyGross->setObjectName(QString::fromUtf8("comboBoxCurrencyGross"));

        gridLayout_6->addWidget(comboBoxCurrencyGross, 1, 3, 1, 1);


        verticalLayout_2->addLayout(gridLayout_6);


        gridLayout_11->addLayout(verticalLayout_2, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_4, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ThePaymentForm);

        QMetaObject::connectSlotsByName(ThePaymentForm);
    } // setupUi

    void retranslateUi(QWidget *ThePaymentForm)
    {
        ThePaymentForm->setWindowTitle(QCoreApplication::translate("ThePaymentForm", "Payment", nullptr));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QCoreApplication::translate("ThePaymentForm", "Payment Number", nullptr));
        label->setText(QCoreApplication::translate("ThePaymentForm", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("ThePaymentForm", "Date", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ThePaymentForm", "Base payment", nullptr));
        label_3->setText(QCoreApplication::translate("ThePaymentForm", "Counterparty", nullptr));
        pushButtonCouterParty->setText(QCoreApplication::translate("ThePaymentForm", "...", nullptr));
        pushButtonDocBase->setText(QCoreApplication::translate("ThePaymentForm", "...", nullptr));
        label_6->setText(QCoreApplication::translate("ThePaymentForm", "Payment receipt date", nullptr));
        label_4->setText(QCoreApplication::translate("ThePaymentForm", "A document base", nullptr));
        label_5->setText(QCoreApplication::translate("ThePaymentForm", "Number Document", nullptr));
        groupBoxSplitPayment->setTitle(QCoreApplication::translate("ThePaymentForm", "SplitPayment", nullptr));
        label_12->setText(QCoreApplication::translate("ThePaymentForm", "Net", nullptr));
        label_10->setText(QCoreApplication::translate("ThePaymentForm", "Exchange Rates: ", nullptr));
        label_11->setText(QCoreApplication::translate("ThePaymentForm", "3.00", nullptr));
        label_13->setText(QCoreApplication::translate("ThePaymentForm", "Currency", nullptr));
        label_16->setText(QCoreApplication::translate("ThePaymentForm", "VAT", nullptr));
        label_17->setText(QCoreApplication::translate("ThePaymentForm", "\320\241urrency", nullptr));
        label_14->setText(QCoreApplication::translate("ThePaymentForm", "Split header net PLN", nullptr));
        label_15->setText(QCoreApplication::translate("ThePaymentForm", "Split header VAT PLN", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ThePaymentForm", "To Pay", nullptr));
        labelTO_PAY->setText(QCoreApplication::translate("ThePaymentForm", "TO PAY:", nullptr));
        labelSUMMA_PAYMENT->setText(QCoreApplication::translate("ThePaymentForm", "559,4 PLN || 123", nullptr));
        label_9->setText(QCoreApplication::translate("ThePaymentForm", "Currency", nullptr));
        label_8->setText(QCoreApplication::translate("ThePaymentForm", "Gross", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThePaymentForm: public Ui_ThePaymentForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEPAYMENTFORM_H
