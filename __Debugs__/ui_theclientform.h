/********************************************************************************
** Form generated from reading UI file 'theclientform.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
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
    QVBoxLayout *verticalLayout;
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
    QWidget *tab;
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
    QPushButton *pushButtonAddLandLegal;
    QLabel *label_6;
    QLineEdit *lineEditIndexLegal;
    QWidget *tab_2;
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
        TheClientForm->resize(400, 374);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TheClientForm->sizePolicy().hasHeightForWidth());
        TheClientForm->setSizePolicy(sizePolicy);
        TheClientForm->setMinimumSize(QSize(400, 0));
        gridLayout = new QGridLayout(TheClientForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(TheClientForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(TheClientForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(50, 0));

        horizontalLayout->addWidget(label);

        lineEditNip = new QLineEdit(groupBox_2);
        lineEditNip->setObjectName(QString::fromUtf8("lineEditNip"));

        horizontalLayout->addWidget(lineEditNip);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(50, 0));

        horizontalLayout_2->addWidget(label_2);

        lineEditFirm = new QLineEdit(groupBox_2);
        lineEditFirm->setObjectName(QString::fromUtf8("lineEditFirm"));

        horizontalLayout_2->addWidget(lineEditFirm);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget = new QTabWidget(groupBox_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(35, 0));

        horizontalLayout_3->addWidget(label_3);

        lineEditCityLegal = new QLineEdit(tab);
        lineEditCityLegal->setObjectName(QString::fromUtf8("lineEditCityLegal"));

        horizontalLayout_3->addWidget(lineEditCityLegal);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(35, 0));

        horizontalLayout_5->addWidget(label_4);

        lineEditAdressLegal = new QLineEdit(tab);
        lineEditAdressLegal->setObjectName(QString::fromUtf8("lineEditAdressLegal"));

        horizontalLayout_5->addWidget(lineEditAdressLegal);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setMinimumSize(QSize(35, 0));

        horizontalLayout_6->addWidget(label_5);

        comboBoxLandLegal = new QComboBox(tab);
        comboBoxLandLegal->setObjectName(QString::fromUtf8("comboBoxLandLegal"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBoxLandLegal->sizePolicy().hasHeightForWidth());
        comboBoxLandLegal->setSizePolicy(sizePolicy2);
        comboBoxLandLegal->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_6->addWidget(comboBoxLandLegal);

        pushButtonAddLandLegal = new QPushButton(tab);
        pushButtonAddLandLegal->setObjectName(QString::fromUtf8("pushButtonAddLandLegal"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButtonAddLandLegal->sizePolicy().hasHeightForWidth());
        pushButtonAddLandLegal->setSizePolicy(sizePolicy3);
        pushButtonAddLandLegal->setMinimumSize(QSize(30, 0));
        pushButtonAddLandLegal->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_6->addWidget(pushButtonAddLandLegal);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(label_6);

        lineEditIndexLegal = new QLineEdit(tab);
        lineEditIndexLegal->setObjectName(QString::fromUtf8("lineEditIndexLegal"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEditIndexLegal->sizePolicy().hasHeightForWidth());
        lineEditIndexLegal->setSizePolicy(sizePolicy4);
        lineEditIndexLegal->setMinimumSize(QSize(0, 0));
        lineEditIndexLegal->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_6->addWidget(lineEditIndexLegal);


        verticalLayout_3->addLayout(horizontalLayout_6);


        gridLayout_4->addLayout(verticalLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(35, 0));

        horizontalLayout_7->addWidget(label_7);

        lineEditCityMailing = new QLineEdit(tab_2);
        lineEditCityMailing->setObjectName(QString::fromUtf8("lineEditCityMailing"));

        horizontalLayout_7->addWidget(lineEditCityMailing);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(35, 0));

        horizontalLayout_8->addWidget(label_8);

        lineEditAdressMailing = new QLineEdit(tab_2);
        lineEditAdressMailing->setObjectName(QString::fromUtf8("lineEditAdressMailing"));

        horizontalLayout_8->addWidget(lineEditAdressMailing);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setMinimumSize(QSize(35, 0));

        horizontalLayout_9->addWidget(label_9);

        comboBoxLandMailing = new QComboBox(tab_2);
        comboBoxLandMailing->setObjectName(QString::fromUtf8("comboBoxLandMailing"));
        sizePolicy2.setHeightForWidth(comboBoxLandMailing->sizePolicy().hasHeightForWidth());
        comboBoxLandMailing->setSizePolicy(sizePolicy2);
        comboBoxLandMailing->setMinimumSize(QSize(0, 0));

        horizontalLayout_9->addWidget(comboBoxLandMailing);

        pushButtonAddLandMailing = new QPushButton(tab_2);
        pushButtonAddLandMailing->setObjectName(QString::fromUtf8("pushButtonAddLandMailing"));
        sizePolicy2.setHeightForWidth(pushButtonAddLandMailing->sizePolicy().hasHeightForWidth());
        pushButtonAddLandMailing->setSizePolicy(sizePolicy2);
        pushButtonAddLandMailing->setMinimumSize(QSize(30, 0));
        pushButtonAddLandMailing->setMaximumSize(QSize(30, 16777215));
        pushButtonAddLandMailing->setAutoDefault(false);
        pushButtonAddLandMailing->setFlat(false);

        horizontalLayout_9->addWidget(pushButtonAddLandMailing);

        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(label_10);

        lineEditIndexMailing = new QLineEdit(tab_2);
        lineEditIndexMailing->setObjectName(QString::fromUtf8("lineEditIndexMailing"));
        sizePolicy4.setHeightForWidth(lineEditIndexMailing->sizePolicy().hasHeightForWidth());
        lineEditIndexMailing->setSizePolicy(sizePolicy4);
        lineEditIndexMailing->setMinimumSize(QSize(0, 0));
        lineEditIndexMailing->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_9->addWidget(lineEditIndexMailing);


        verticalLayout_4->addLayout(horizontalLayout_9);


        gridLayout_5->addLayout(verticalLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_3->addWidget(tabWidget, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        buttonBoxClient = new QDialogButtonBox(TheClientForm);
        buttonBoxClient->setObjectName(QString::fromUtf8("buttonBoxClient"));
        buttonBoxClient->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        buttonBoxClient->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBoxClient);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(TheClientForm);

        tabWidget->setCurrentIndex(1);
        pushButtonAddLandMailing->setDefault(false);


        QMetaObject::connectSlotsByName(TheClientForm);
    } // setupUi

    void retranslateUi(QWidget *TheClientForm)
    {
        TheClientForm->setWindowTitle(QCoreApplication::translate("TheClientForm", "Client", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TheClientForm", "Create Client for a Exist Client", nullptr));
        pushButton->setText(QCoreApplication::translate("TheClientForm", "Create Client for a Exist Client", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TheClientForm", "Client Details", nullptr));
        label->setText(QCoreApplication::translate("TheClientForm", "NIP:", nullptr));
        label_2->setText(QCoreApplication::translate("TheClientForm", "Firm", nullptr));
        label_3->setText(QCoreApplication::translate("TheClientForm", "City", nullptr));
        label_4->setText(QCoreApplication::translate("TheClientForm", "Adress", nullptr));
        label_5->setText(QCoreApplication::translate("TheClientForm", "Land", nullptr));
        pushButtonAddLandLegal->setText(QCoreApplication::translate("TheClientForm", "Add", nullptr));
        label_6->setText(QCoreApplication::translate("TheClientForm", "Index", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("TheClientForm", "Legal Address", nullptr));
        label_7->setText(QCoreApplication::translate("TheClientForm", "City", nullptr));
        label_8->setText(QCoreApplication::translate("TheClientForm", "Adress", nullptr));
        label_9->setText(QCoreApplication::translate("TheClientForm", "Land", nullptr));
        pushButtonAddLandMailing->setText(QCoreApplication::translate("TheClientForm", "Add", nullptr));
        label_10->setText(QCoreApplication::translate("TheClientForm", "Index", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("TheClientForm", "Mailing Address", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheClientForm: public Ui_TheClientForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THECLIENTFORM_H
