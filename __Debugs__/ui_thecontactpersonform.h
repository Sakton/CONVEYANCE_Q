/********************************************************************************
** Form generated from reading UI file 'thecontactpersonform.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THECONTACTPERSONFORM_H
#define UI_THECONTACTPERSONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheContactPersonForm
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *labelPhone;
    QLineEdit *lineEditEmail;
    QLineEdit *lineEditTransId;
    QLabel *labelCounterparty;
    QLabel *label_5;
    QPushButton *pushButtonAddCounterParty;
    QLineEdit *lineEditFirstAndLastName;
    QLabel *labelFirstAndLastName;
    QLabel *labelTransId;
    QLineEdit *lineEditPhone;
    QComboBox *comboBoxCounterParty;
    QLabel *label_6;
    QComboBox *comboBoxFunction;
    QPushButton *pushButtonAddFunction;

    void setupUi(QWidget *TheContactPersonForm)
    {
        if (TheContactPersonForm->objectName().isEmpty())
            TheContactPersonForm->setObjectName(QString::fromUtf8("TheContactPersonForm"));
        TheContactPersonForm->resize(400, 237);
        TheContactPersonForm->setMinimumSize(QSize(400, 0));
        gridLayout = new QGridLayout(TheContactPersonForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(TheContactPersonForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelPhone = new QLabel(groupBox);
        labelPhone->setObjectName(QString::fromUtf8("labelPhone"));

        gridLayout_2->addWidget(labelPhone, 3, 0, 1, 1);

        lineEditEmail = new QLineEdit(groupBox);
        lineEditEmail->setObjectName(QString::fromUtf8("lineEditEmail"));

        gridLayout_2->addWidget(lineEditEmail, 4, 1, 1, 2);

        lineEditTransId = new QLineEdit(groupBox);
        lineEditTransId->setObjectName(QString::fromUtf8("lineEditTransId"));

        gridLayout_2->addWidget(lineEditTransId, 2, 1, 1, 2);

        labelCounterparty = new QLabel(groupBox);
        labelCounterparty->setObjectName(QString::fromUtf8("labelCounterparty"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelCounterparty->sizePolicy().hasHeightForWidth());
        labelCounterparty->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(labelCounterparty, 0, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        pushButtonAddCounterParty = new QPushButton(groupBox);
        pushButtonAddCounterParty->setObjectName(QString::fromUtf8("pushButtonAddCounterParty"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonAddCounterParty->sizePolicy().hasHeightForWidth());
        pushButtonAddCounterParty->setSizePolicy(sizePolicy1);
        pushButtonAddCounterParty->setMaximumSize(QSize(30, 16777215));

        gridLayout_2->addWidget(pushButtonAddCounterParty, 0, 2, 1, 1);

        lineEditFirstAndLastName = new QLineEdit(groupBox);
        lineEditFirstAndLastName->setObjectName(QString::fromUtf8("lineEditFirstAndLastName"));

        gridLayout_2->addWidget(lineEditFirstAndLastName, 1, 1, 1, 2);

        labelFirstAndLastName = new QLabel(groupBox);
        labelFirstAndLastName->setObjectName(QString::fromUtf8("labelFirstAndLastName"));

        gridLayout_2->addWidget(labelFirstAndLastName, 1, 0, 1, 1);

        labelTransId = new QLabel(groupBox);
        labelTransId->setObjectName(QString::fromUtf8("labelTransId"));

        gridLayout_2->addWidget(labelTransId, 2, 0, 1, 1);

        lineEditPhone = new QLineEdit(groupBox);
        lineEditPhone->setObjectName(QString::fromUtf8("lineEditPhone"));

        gridLayout_2->addWidget(lineEditPhone, 3, 1, 1, 2);

        comboBoxCounterParty = new QComboBox(groupBox);
        comboBoxCounterParty->setObjectName(QString::fromUtf8("comboBoxCounterParty"));

        gridLayout_2->addWidget(comboBoxCounterParty, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 5, 0, 1, 1);

        comboBoxFunction = new QComboBox(groupBox);
        comboBoxFunction->setObjectName(QString::fromUtf8("comboBoxFunction"));

        gridLayout_2->addWidget(comboBoxFunction, 5, 1, 1, 1);

        pushButtonAddFunction = new QPushButton(groupBox);
        pushButtonAddFunction->setObjectName(QString::fromUtf8("pushButtonAddFunction"));
        pushButtonAddFunction->setMaximumSize(QSize(30, 16777215));

        gridLayout_2->addWidget(pushButtonAddFunction, 5, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(TheContactPersonForm);

        QMetaObject::connectSlotsByName(TheContactPersonForm);
    } // setupUi

    void retranslateUi(QWidget *TheContactPersonForm)
    {
        TheContactPersonForm->setWindowTitle(QCoreApplication::translate("TheContactPersonForm", "Contact Person", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TheContactPersonForm", "Person Info", nullptr));
        labelPhone->setText(QCoreApplication::translate("TheContactPersonForm", "Phone", nullptr));
        labelCounterparty->setText(QCoreApplication::translate("TheContactPersonForm", "Counterparty", nullptr));
        label_5->setText(QCoreApplication::translate("TheContactPersonForm", "e-mail", nullptr));
        pushButtonAddCounterParty->setText(QCoreApplication::translate("TheContactPersonForm", "...", nullptr));
        labelFirstAndLastName->setText(QCoreApplication::translate("TheContactPersonForm", "First And Last name", nullptr));
        labelTransId->setText(QCoreApplication::translate("TheContactPersonForm", "Trans ID", nullptr));
        label_6->setText(QCoreApplication::translate("TheContactPersonForm", "Function", nullptr));
        pushButtonAddFunction->setText(QCoreApplication::translate("TheContactPersonForm", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheContactPersonForm: public Ui_TheContactPersonForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THECONTACTPERSONFORM_H
