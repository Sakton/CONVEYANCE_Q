/********************************************************************************
** Form generated from reading UI file 'theadressform.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEADRESSFORM_H
#define UI_THEADRESSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheAdressForm
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLineEdit *lineEditIndex;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *labelContragent;
    QLineEdit *lineEditAdress;
    QLabel *label_6;
    QLineEdit *lineEditLand;
    QComboBox *comboBoxTypeAdress;
    QLineEdit *lineEditSity;
    QLineEdit *lineEditContragent;
    QDialogButtonBox *buttonBoxAdressForm;

    void setupUi(QWidget *TheAdress)
    {
        if (TheAdress->objectName().isEmpty())
            TheAdress->setObjectName(QString::fromUtf8("TheAdress"));
        TheAdress->resize(400, 236);
        TheAdress->setMinimumSize(QSize(400, 0));
        gridLayout = new QGridLayout(TheAdress);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(TheAdress);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        lineEditIndex = new QLineEdit(groupBox);
        lineEditIndex->setObjectName(QString::fromUtf8("lineEditIndex"));

        gridLayout_3->addWidget(lineEditIndex, 3, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 4, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 5, 0, 1, 1);

        labelContragent = new QLabel(groupBox);
        labelContragent->setObjectName(QString::fromUtf8("labelContragent"));

        gridLayout_3->addWidget(labelContragent, 0, 0, 1, 1);

        lineEditAdress = new QLineEdit(groupBox);
        lineEditAdress->setObjectName(QString::fromUtf8("lineEditAdress"));

        gridLayout_3->addWidget(lineEditAdress, 5, 2, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 6, 0, 1, 1);

        lineEditLand = new QLineEdit(groupBox);
        lineEditLand->setObjectName(QString::fromUtf8("lineEditLand"));

        gridLayout_3->addWidget(lineEditLand, 6, 2, 1, 1);

        comboBoxTypeAdress = new QComboBox(groupBox);
        comboBoxTypeAdress->setObjectName(QString::fromUtf8("comboBoxTypeAdress"));

        gridLayout_3->addWidget(comboBoxTypeAdress, 1, 2, 1, 1);

        lineEditSity = new QLineEdit(groupBox);
        lineEditSity->setObjectName(QString::fromUtf8("lineEditSity"));

        gridLayout_3->addWidget(lineEditSity, 4, 2, 1, 1);

        lineEditContragent = new QLineEdit(groupBox);
        lineEditContragent->setObjectName(QString::fromUtf8("lineEditContragent"));

        gridLayout_3->addWidget(lineEditContragent, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        buttonBoxAdressForm = new QDialogButtonBox(TheAdress);
        buttonBoxAdressForm->setObjectName(QString::fromUtf8("buttonBoxAdressForm"));
        buttonBoxAdressForm->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBoxAdressForm, 1, 0, 1, 1);


        retranslateUi(TheAdress);

        QMetaObject::connectSlotsByName(TheAdress);
    } // setupUi

    void retranslateUi(QWidget *TheAdress)
    {
        TheAdress->setWindowTitle(QCoreApplication::translate("TheAdressForm", "Adress Adding", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("TheAdressForm", "Type Adress", nullptr));
        label_3->setText(QCoreApplication::translate("TheAdressForm", "Index", nullptr));
        label_4->setText(QCoreApplication::translate("TheAdressForm", "Sity", nullptr));
        label_5->setText(QCoreApplication::translate("TheAdressForm", "Adress", nullptr));
        labelContragent->setText(QCoreApplication::translate("TheAdressForm", "Contargent", nullptr));
        label_6->setText(QCoreApplication::translate("TheAdressForm", "Land", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheAdressForm: public Ui_TheAdressForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEADRESSFORM_H
