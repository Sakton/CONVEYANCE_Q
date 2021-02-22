/********************************************************************************
** Form generated from reading UI file 'theclientform.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THECLIENTFORM_H
#define UI_THECLIENTFORM_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheClientForm
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditNip;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditFirm;
    QTabWidget *tabWidget;
    QWidget *LegalAdress;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditCityLegal;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEditAdressLegal;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QComboBox *comboBoxLandLegal;
    QPushButton *pushButtonAddCountryLegal;
    QLabel *label_6;
    QLineEdit *lineEditIndexLegal;
    QWidget *MailingAdress;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEditCityMailing;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEditAdressMailing;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QComboBox *comboBoxLandMailing;
    QPushButton *pushButtonAddLandMailing;
    QLabel *label_10;
    QLineEdit *lineEditIndexMailing;
    QDialogButtonBox *buttonBoxClient;

    void setupUi(QWidget *TheClientForm)
    {
        if (TheClientForm->objectName().isEmpty())
            TheClientForm->setObjectName(QString::fromUtf8("TheClientForm"));
        TheClientForm->resize(400, 382);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TheClientForm->sizePolicy().hasHeightForWidth());
        TheClientForm->setSizePolicy(sizePolicy);
        TheClientForm->setMinimumSize(QSize(400, 0));
        gridLayout = new QGridLayout(TheClientForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBox = new QGroupBox(TheClientForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(TheClientForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(70, 0));

        horizontalLayout->addWidget(label);

        lineEditNip = new QLineEdit(groupBox_2);
        lineEditNip->setObjectName(QString::fromUtf8("lineEditNip"));

        horizontalLayout->addWidget(lineEditNip);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(70, 0));

        horizontalLayout_2->addWidget(label_2);

        lineEditFirm = new QLineEdit(groupBox_2);
        lineEditFirm->setObjectName(QString::fromUtf8("lineEditFirm"));

        horizontalLayout_2->addWidget(lineEditFirm);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget = new QTabWidget(groupBox_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setToolTipDuration(0);
        tabWidget->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        LegalAdress = new QWidget();
        LegalAdress->setObjectName(QString::fromUtf8("LegalAdress"));
        gridLayout_4 = new QGridLayout(LegalAdress);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(LegalAdress);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(58, 0));

        horizontalLayout_3->addWidget(label_3);

        lineEditCityLegal = new QLineEdit(LegalAdress);
        lineEditCityLegal->setObjectName(QString::fromUtf8("lineEditCityLegal"));

        horizontalLayout_3->addWidget(lineEditCityLegal);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(LegalAdress);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(58, 0));

        horizontalLayout_5->addWidget(label_4);

        lineEditAdressLegal = new QLineEdit(LegalAdress);
        lineEditAdressLegal->setObjectName(QString::fromUtf8("lineEditAdressLegal"));

        horizontalLayout_5->addWidget(lineEditAdressLegal);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(LegalAdress);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setMinimumSize(QSize(58, 0));

        horizontalLayout_6->addWidget(label_5);

        comboBoxLandLegal = new QComboBox(LegalAdress);
        comboBoxLandLegal->setObjectName(QString::fromUtf8("comboBoxLandLegal"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboBoxLandLegal->sizePolicy().hasHeightForWidth());
        comboBoxLandLegal->setSizePolicy(sizePolicy3);
        comboBoxLandLegal->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_6->addWidget(comboBoxLandLegal);

        pushButtonAddCountryLegal = new QPushButton(LegalAdress);
        pushButtonAddCountryLegal->setObjectName(QString::fromUtf8("pushButtonAddCountryLegal"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButtonAddCountryLegal->sizePolicy().hasHeightForWidth());
        pushButtonAddCountryLegal->setSizePolicy(sizePolicy4);
        pushButtonAddCountryLegal->setMinimumSize(QSize(30, 0));
        pushButtonAddCountryLegal->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_6->addWidget(pushButtonAddCountryLegal);

        label_6 = new QLabel(LegalAdress);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(label_6);

        lineEditIndexLegal = new QLineEdit(LegalAdress);
        lineEditIndexLegal->setObjectName(QString::fromUtf8("lineEditIndexLegal"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lineEditIndexLegal->sizePolicy().hasHeightForWidth());
        lineEditIndexLegal->setSizePolicy(sizePolicy5);
        lineEditIndexLegal->setMinimumSize(QSize(0, 0));
        lineEditIndexLegal->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_6->addWidget(lineEditIndexLegal);


        verticalLayout_3->addLayout(horizontalLayout_6);


        gridLayout_4->addLayout(verticalLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(LegalAdress, QString());
        MailingAdress = new QWidget();
        MailingAdress->setObjectName(QString::fromUtf8("MailingAdress"));
        gridLayout_5 = new QGridLayout(MailingAdress);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(MailingAdress);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(58, 0));

        horizontalLayout_7->addWidget(label_7);

        lineEditCityMailing = new QLineEdit(MailingAdress);
        lineEditCityMailing->setObjectName(QString::fromUtf8("lineEditCityMailing"));

        horizontalLayout_7->addWidget(lineEditCityMailing);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(MailingAdress);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(58, 0));

        horizontalLayout_8->addWidget(label_8);

        lineEditAdressMailing = new QLineEdit(MailingAdress);
        lineEditAdressMailing->setObjectName(QString::fromUtf8("lineEditAdressMailing"));

        horizontalLayout_8->addWidget(lineEditAdressMailing);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(MailingAdress);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setMinimumSize(QSize(58, 0));

        horizontalLayout_9->addWidget(label_9);

        comboBoxLandMailing = new QComboBox(MailingAdress);
        comboBoxLandMailing->setObjectName(QString::fromUtf8("comboBoxLandMailing"));
        sizePolicy3.setHeightForWidth(comboBoxLandMailing->sizePolicy().hasHeightForWidth());
        comboBoxLandMailing->setSizePolicy(sizePolicy3);
        comboBoxLandMailing->setMinimumSize(QSize(0, 0));

        horizontalLayout_9->addWidget(comboBoxLandMailing);

        pushButtonAddLandMailing = new QPushButton(MailingAdress);
        pushButtonAddLandMailing->setObjectName(QString::fromUtf8("pushButtonAddLandMailing"));
        sizePolicy3.setHeightForWidth(pushButtonAddLandMailing->sizePolicy().hasHeightForWidth());
        pushButtonAddLandMailing->setSizePolicy(sizePolicy3);
        pushButtonAddLandMailing->setMinimumSize(QSize(30, 0));
        pushButtonAddLandMailing->setMaximumSize(QSize(30, 16777215));
        pushButtonAddLandMailing->setAutoDefault(false);
        pushButtonAddLandMailing->setFlat(false);

        horizontalLayout_9->addWidget(pushButtonAddLandMailing);

        label_10 = new QLabel(MailingAdress);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);

        horizontalLayout_9->addWidget(label_10);

        lineEditIndexMailing = new QLineEdit(MailingAdress);
        lineEditIndexMailing->setObjectName(QString::fromUtf8("lineEditIndexMailing"));
        sizePolicy5.setHeightForWidth(lineEditIndexMailing->sizePolicy().hasHeightForWidth());
        lineEditIndexMailing->setSizePolicy(sizePolicy5);
        lineEditIndexMailing->setMinimumSize(QSize(0, 0));
        lineEditIndexMailing->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_9->addWidget(lineEditIndexMailing);


        verticalLayout_4->addLayout(horizontalLayout_9);


        gridLayout_5->addLayout(verticalLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(MailingAdress, QString());

        gridLayout_3->addWidget(tabWidget, 1, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_2, 1, 0, 1, 1);

        buttonBoxClient = new QDialogButtonBox(TheClientForm);
        buttonBoxClient->setObjectName(QString::fromUtf8("buttonBoxClient"));
        buttonBoxClient->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        buttonBoxClient->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_6->addWidget(buttonBoxClient, 2, 0, 1, 1);


        gridLayout->addLayout(gridLayout_6, 0, 0, 1, 1);


        retranslateUi(TheClientForm);

        tabWidget->setCurrentIndex(0);
        pushButtonAddLandMailing->setDefault(false);


        QMetaObject::connectSlotsByName(TheClientForm);
    } // setupUi

    void retranslateUi(QWidget *TheClientForm)
    {
        TheClientForm->setWindowTitle(QCoreApplication::translate("TheClientForm", "Counterparty", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TheClientForm", "Create Client for a Exist Client", nullptr));
        pushButton->setText(QCoreApplication::translate("TheClientForm", "Create Client for a Exist Client ???", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TheClientForm", "Client Details", nullptr));
        label->setText(QCoreApplication::translate("TheClientForm", "NIP:", nullptr));
        label_2->setText(QCoreApplication::translate("TheClientForm", "Name of the\n"
"organization", nullptr));
        label_3->setText(QCoreApplication::translate("TheClientForm", "City", nullptr));
        label_4->setText(QCoreApplication::translate("TheClientForm", "Adress", nullptr));
        label_5->setText(QCoreApplication::translate("TheClientForm", "Country", nullptr));
        pushButtonAddCountryLegal->setText(QCoreApplication::translate("TheClientForm", "...", nullptr));
        label_6->setText(QCoreApplication::translate("TheClientForm", "Index", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(LegalAdress), QCoreApplication::translate("TheClientForm", "Legal Address", nullptr));
        label_7->setText(QCoreApplication::translate("TheClientForm", "City", nullptr));
        label_8->setText(QCoreApplication::translate("TheClientForm", "Adress", nullptr));
        label_9->setText(QCoreApplication::translate("TheClientForm", "Land", nullptr));
        pushButtonAddLandMailing->setText(QCoreApplication::translate("TheClientForm", "...", nullptr));
        label_10->setText(QCoreApplication::translate("TheClientForm", "Index", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(MailingAdress), QCoreApplication::translate("TheClientForm", "Mailing Address", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheClientForm: public Ui_TheClientForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THECLIENTFORM_H
