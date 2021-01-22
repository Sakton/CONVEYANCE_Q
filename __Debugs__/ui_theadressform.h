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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheAdressForm
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QPushButton *pushButton;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QComboBox *comboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *TheAdress)
    {
        if (TheAdress->objectName().isEmpty())
            TheAdress->setObjectName(QString::fromUtf8("TheAdress"));
        TheAdress->resize(400, 251);
        TheAdress->setMinimumSize(QSize(400, 0));
        gridLayout = new QGridLayout(TheAdress);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(TheAdress);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 4, 0, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_3->addWidget(pushButton, 1, 1, 1, 1);

        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout_3->addWidget(lineEdit_4, 4, 1, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout_3->addWidget(lineEdit_3, 3, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_3->addWidget(lineEdit_2, 2, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 3, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 5, 0, 1, 1);

        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout_3->addWidget(lineEdit_5, 5, 1, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_3->addWidget(comboBox, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(TheAdress);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(TheAdress);

        QMetaObject::connectSlotsByName(TheAdress);
    } // setupUi

    void retranslateUi(QWidget *TheAdress)
    {
        TheAdress->setWindowTitle(QCoreApplication::translate("TheAdressForm", "Adress Adding", nullptr));
        groupBox->setTitle(QString());
        label_5->setText(QCoreApplication::translate("TheAdressForm", "Adress", nullptr));
        pushButton->setText(QCoreApplication::translate("TheAdressForm", "Add Contragent", nullptr));
        label_2->setText(QCoreApplication::translate("TheAdressForm", "Contargent", nullptr));
        label->setText(QCoreApplication::translate("TheAdressForm", "Type Adress", nullptr));
        label_3->setText(QCoreApplication::translate("TheAdressForm", "Index", nullptr));
        label_4->setText(QCoreApplication::translate("TheAdressForm", "Sity", nullptr));
        label_6->setText(QCoreApplication::translate("TheAdressForm", "Land", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheAdressForm: public Ui_TheAdressForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEADRESSFORM_H
