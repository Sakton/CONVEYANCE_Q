/********************************************************************************
** Form generated from reading UI file 'thecountryform.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THECOUNTRYFORM_H
#define UI_THECOUNTRYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheCountryForm
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEditName;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditPhoneCode;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditAbbreviated;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditVatRate;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonBoxLand;

    void setupUi(QWidget *TheCountryForm)
    {
        if (TheCountryForm->objectName().isEmpty())
            TheCountryForm->setObjectName(QString::fromUtf8("TheCountryForm"));
        TheCountryForm->resize(400, 260);
        TheCountryForm->setMinimumSize(QSize(400, 0));
        gridLayout = new QGridLayout(TheCountryForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(TheCountryForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEditName = new QLineEdit(groupBox);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        gridLayout_2->addWidget(lineEditName, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEditPhoneCode = new QLineEdit(groupBox);
        lineEditPhoneCode->setObjectName(QString::fromUtf8("lineEditPhoneCode"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditPhoneCode->sizePolicy().hasHeightForWidth());
        lineEditPhoneCode->setSizePolicy(sizePolicy);
        lineEditPhoneCode->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(lineEditPhoneCode);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEditAbbreviated = new QLineEdit(groupBox);
        lineEditAbbreviated->setObjectName(QString::fromUtf8("lineEditAbbreviated"));
        lineEditAbbreviated->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(lineEditAbbreviated);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(TheCountryForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEditVatRate = new QLineEdit(groupBox_2);
        lineEditVatRate->setObjectName(QString::fromUtf8("lineEditVatRate"));
        lineEditVatRate->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(lineEditVatRate);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        buttonBoxLand = new QDialogButtonBox(TheCountryForm);
        buttonBoxLand->setObjectName(QString::fromUtf8("buttonBoxLand"));
        buttonBoxLand->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBoxLand);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(TheCountryForm);

        QMetaObject::connectSlotsByName(TheCountryForm);
    } // setupUi

    void retranslateUi(QWidget *TheCountryForm)
    {
        TheCountryForm->setWindowTitle(QCoreApplication::translate("TheCountryForm", "Country", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TheCountryForm", "Country", nullptr));
        label->setText(QCoreApplication::translate("TheCountryForm", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("TheCountryForm", "Phone Code", nullptr));
        label_2->setText(QCoreApplication::translate("TheCountryForm", "Abbreviated", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TheCountryForm", "VAT Rate", nullptr));
        label_4->setText(QCoreApplication::translate("TheCountryForm", "VAT Rate      ", nullptr));
        label_5->setText(QCoreApplication::translate("TheCountryForm", "%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheCountryForm: public Ui_TheCountryForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THECOUNTRYFORM_H
