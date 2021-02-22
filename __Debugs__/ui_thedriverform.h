/********************************************************************************
** Form generated from reading UI file 'thedriverform.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEDRIVERFORM_H
#define UI_THEDRIVERFORM_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheDriverForm
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QComboBox *comboBoxNationality;
    QLineEdit *lineEditFamily;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditPhone;
    QGroupBox *groupBoxLanguage;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayoutLanguage;
    QCheckBox *checkBoxHungarian;
    QCheckBox *checkBoxEnglish;
    QCheckBox *checkBoxSpanish;
    QCheckBox *checkBoxPortuguese;
    QCheckBox *checkBoxBulgarian;
    QCheckBox *checkBoxGerman;
    QCheckBox *checkBoxPolish;
    QCheckBox *checkBoxFrench;
    QCheckBox *checkBoxItalian;
    QCheckBox *checkBoxRomanian;
    QCheckBox *checkBoxCzech;
    QCheckBox *checkBoxSwedish;
    QCheckBox *checkBoxRussian;
    QGroupBox *groupBoxDriveLicense;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QCheckBox *checkBoxB1;
    QCheckBox *checkBoxB;
    QCheckBox *checkBoxC1;
    QCheckBox *checkBoxC;
    QCheckBox *checkBoxBE;
    QCheckBox *checkBoxC1E;
    QCheckBox *checkBoxCE;
    QCheckBox *checkBoxD1E;
    QCheckBox *checkBoxDE;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *TheDriverForm)
    {
        if (TheDriverForm->objectName().isEmpty())
            TheDriverForm->setObjectName(QString::fromUtf8("TheDriverForm"));
        TheDriverForm->resize(400, 384);
        TheDriverForm->setMinimumSize(QSize(400, 0));
        gridLayout_2 = new QGridLayout(TheDriverForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(TheDriverForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        comboBoxNationality = new QComboBox(TheDriverForm);
        comboBoxNationality->setObjectName(QString::fromUtf8("comboBoxNationality"));

        gridLayout->addWidget(comboBoxNationality, 2, 1, 1, 1);

        lineEditFamily = new QLineEdit(TheDriverForm);
        lineEditFamily->setObjectName(QString::fromUtf8("lineEditFamily"));

        gridLayout->addWidget(lineEditFamily, 0, 1, 1, 1);

        label = new QLabel(TheDriverForm);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(TheDriverForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditPhone = new QLineEdit(TheDriverForm);
        lineEditPhone->setObjectName(QString::fromUtf8("lineEditPhone"));

        gridLayout->addWidget(lineEditPhone, 1, 1, 1, 1);

        groupBoxLanguage = new QGroupBox(TheDriverForm);
        groupBoxLanguage->setObjectName(QString::fromUtf8("groupBoxLanguage"));
        groupBoxLanguage->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        gridLayout_4 = new QGridLayout(groupBoxLanguage);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayoutLanguage = new QGridLayout();
        gridLayoutLanguage->setObjectName(QString::fromUtf8("gridLayoutLanguage"));
        checkBoxHungarian = new QCheckBox(groupBoxLanguage);
        checkBoxHungarian->setObjectName(QString::fromUtf8("checkBoxHungarian"));

        gridLayoutLanguage->addWidget(checkBoxHungarian, 0, 2, 1, 1);

        checkBoxEnglish = new QCheckBox(groupBoxLanguage);
        checkBoxEnglish->setObjectName(QString::fromUtf8("checkBoxEnglish"));

        gridLayoutLanguage->addWidget(checkBoxEnglish, 0, 0, 1, 1);

        checkBoxSpanish = new QCheckBox(groupBoxLanguage);
        checkBoxSpanish->setObjectName(QString::fromUtf8("checkBoxSpanish"));

        gridLayoutLanguage->addWidget(checkBoxSpanish, 1, 2, 1, 1);

        checkBoxPortuguese = new QCheckBox(groupBoxLanguage);
        checkBoxPortuguese->setObjectName(QString::fromUtf8("checkBoxPortuguese"));

        gridLayoutLanguage->addWidget(checkBoxPortuguese, 2, 2, 1, 1);

        checkBoxBulgarian = new QCheckBox(groupBoxLanguage);
        checkBoxBulgarian->setObjectName(QString::fromUtf8("checkBoxBulgarian"));

        gridLayoutLanguage->addWidget(checkBoxBulgarian, 0, 1, 1, 1);

        checkBoxGerman = new QCheckBox(groupBoxLanguage);
        checkBoxGerman->setObjectName(QString::fromUtf8("checkBoxGerman"));

        gridLayoutLanguage->addWidget(checkBoxGerman, 1, 0, 1, 1);

        checkBoxPolish = new QCheckBox(groupBoxLanguage);
        checkBoxPolish->setObjectName(QString::fromUtf8("checkBoxPolish"));

        gridLayoutLanguage->addWidget(checkBoxPolish, 1, 1, 1, 1);

        checkBoxFrench = new QCheckBox(groupBoxLanguage);
        checkBoxFrench->setObjectName(QString::fromUtf8("checkBoxFrench"));

        gridLayoutLanguage->addWidget(checkBoxFrench, 2, 1, 1, 1);

        checkBoxItalian = new QCheckBox(groupBoxLanguage);
        checkBoxItalian->setObjectName(QString::fromUtf8("checkBoxItalian"));

        gridLayoutLanguage->addWidget(checkBoxItalian, 0, 3, 1, 1);

        checkBoxRomanian = new QCheckBox(groupBoxLanguage);
        checkBoxRomanian->setObjectName(QString::fromUtf8("checkBoxRomanian"));

        gridLayoutLanguage->addWidget(checkBoxRomanian, 1, 3, 1, 1);

        checkBoxCzech = new QCheckBox(groupBoxLanguage);
        checkBoxCzech->setObjectName(QString::fromUtf8("checkBoxCzech"));

        gridLayoutLanguage->addWidget(checkBoxCzech, 2, 0, 1, 1);

        checkBoxSwedish = new QCheckBox(groupBoxLanguage);
        checkBoxSwedish->setObjectName(QString::fromUtf8("checkBoxSwedish"));

        gridLayoutLanguage->addWidget(checkBoxSwedish, 2, 3, 1, 1);

        checkBoxRussian = new QCheckBox(groupBoxLanguage);
        checkBoxRussian->setObjectName(QString::fromUtf8("checkBoxRussian"));

        gridLayoutLanguage->addWidget(checkBoxRussian, 3, 0, 1, 1);


        gridLayout_4->addLayout(gridLayoutLanguage, 0, 0, 1, 1);


        gridLayout->addWidget(groupBoxLanguage, 3, 1, 1, 1);

        groupBoxDriveLicense = new QGroupBox(TheDriverForm);
        groupBoxDriveLicense->setObjectName(QString::fromUtf8("groupBoxDriveLicense"));
        groupBoxDriveLicense->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        groupBoxDriveLicense->setFlat(false);
        gridLayout_6 = new QGridLayout(groupBoxDriveLicense);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        checkBoxB1 = new QCheckBox(groupBoxDriveLicense);
        checkBoxB1->setObjectName(QString::fromUtf8("checkBoxB1"));

        gridLayout_5->addWidget(checkBoxB1, 0, 0, 1, 1);

        checkBoxB = new QCheckBox(groupBoxDriveLicense);
        checkBoxB->setObjectName(QString::fromUtf8("checkBoxB"));

        gridLayout_5->addWidget(checkBoxB, 0, 1, 1, 1);

        checkBoxC1 = new QCheckBox(groupBoxDriveLicense);
        checkBoxC1->setObjectName(QString::fromUtf8("checkBoxC1"));

        gridLayout_5->addWidget(checkBoxC1, 0, 2, 1, 1);

        checkBoxC = new QCheckBox(groupBoxDriveLicense);
        checkBoxC->setObjectName(QString::fromUtf8("checkBoxC"));

        gridLayout_5->addWidget(checkBoxC, 0, 3, 1, 1);

        checkBoxBE = new QCheckBox(groupBoxDriveLicense);
        checkBoxBE->setObjectName(QString::fromUtf8("checkBoxBE"));

        gridLayout_5->addWidget(checkBoxBE, 1, 0, 1, 1);

        checkBoxC1E = new QCheckBox(groupBoxDriveLicense);
        checkBoxC1E->setObjectName(QString::fromUtf8("checkBoxC1E"));

        gridLayout_5->addWidget(checkBoxC1E, 1, 1, 1, 1);

        checkBoxCE = new QCheckBox(groupBoxDriveLicense);
        checkBoxCE->setObjectName(QString::fromUtf8("checkBoxCE"));

        gridLayout_5->addWidget(checkBoxCE, 1, 2, 1, 1);

        checkBoxD1E = new QCheckBox(groupBoxDriveLicense);
        checkBoxD1E->setObjectName(QString::fromUtf8("checkBoxD1E"));

        gridLayout_5->addWidget(checkBoxD1E, 1, 3, 1, 1);

        checkBoxDE = new QCheckBox(groupBoxDriveLicense);
        checkBoxDE->setObjectName(QString::fromUtf8("checkBoxDE"));

        gridLayout_5->addWidget(checkBoxDE, 2, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);


        gridLayout->addWidget(groupBoxDriveLicense, 4, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(TheDriverForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(TheDriverForm);

        QMetaObject::connectSlotsByName(TheDriverForm);
    } // setupUi

    void retranslateUi(QWidget *TheDriverForm)
    {
        TheDriverForm->setWindowTitle(QCoreApplication::translate("TheDriverForm", "Driver", nullptr));
        label_3->setText(QCoreApplication::translate("TheDriverForm", "Nationality", nullptr));
        label->setText(QCoreApplication::translate("TheDriverForm", "Family", nullptr));
        label_2->setText(QCoreApplication::translate("TheDriverForm", "Phone", nullptr));
        groupBoxLanguage->setTitle(QCoreApplication::translate("TheDriverForm", "Language", nullptr));
        checkBoxHungarian->setText(QCoreApplication::translate("TheDriverForm", "Hungarian", nullptr));
        checkBoxEnglish->setText(QCoreApplication::translate("TheDriverForm", "English", nullptr));
        checkBoxSpanish->setText(QCoreApplication::translate("TheDriverForm", "Spanish", nullptr));
        checkBoxPortuguese->setText(QCoreApplication::translate("TheDriverForm", "Portuguese", nullptr));
        checkBoxBulgarian->setText(QCoreApplication::translate("TheDriverForm", "Bulgarian", nullptr));
        checkBoxGerman->setText(QCoreApplication::translate("TheDriverForm", "German", nullptr));
        checkBoxPolish->setText(QCoreApplication::translate("TheDriverForm", "Polish", nullptr));
        checkBoxFrench->setText(QCoreApplication::translate("TheDriverForm", "French", nullptr));
        checkBoxItalian->setText(QCoreApplication::translate("TheDriverForm", "Italian", nullptr));
        checkBoxRomanian->setText(QCoreApplication::translate("TheDriverForm", "Romanian", nullptr));
        checkBoxCzech->setText(QCoreApplication::translate("TheDriverForm", "Czech", nullptr));
        checkBoxSwedish->setText(QCoreApplication::translate("TheDriverForm", "Swedish", nullptr));
        checkBoxRussian->setText(QCoreApplication::translate("TheDriverForm", "Russian", nullptr));
        groupBoxDriveLicense->setTitle(QCoreApplication::translate("TheDriverForm", "Drive License", nullptr));
        checkBoxB1->setText(QCoreApplication::translate("TheDriverForm", "B1", nullptr));
        checkBoxB->setText(QCoreApplication::translate("TheDriverForm", "B", nullptr));
        checkBoxC1->setText(QCoreApplication::translate("TheDriverForm", "C1", nullptr));
        checkBoxC->setText(QCoreApplication::translate("TheDriverForm", "C", nullptr));
        checkBoxBE->setText(QCoreApplication::translate("TheDriverForm", "BE", nullptr));
        checkBoxC1E->setText(QCoreApplication::translate("TheDriverForm", "C1E", nullptr));
        checkBoxCE->setText(QCoreApplication::translate("TheDriverForm", "CE", nullptr));
        checkBoxD1E->setText(QCoreApplication::translate("TheDriverForm", "D1E", nullptr));
        checkBoxDE->setText(QCoreApplication::translate("TheDriverForm", "DE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheDriverForm: public Ui_TheDriverForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEDRIVERFORM_H
