/********************************************************************************
** Form generated from reading UI file 'thepostform.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEPOSTFORM_H
#define UI_THEPOSTFORM_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThePostForm
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QDateEdit *dateEdit;
    QLabel *label_6;
    QLabel *label_8;
    QCheckBox *checkBox;
    QLabel *label_5;
    QComboBox *comboBox;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QComboBox *comboBox_2;
    QLabel *label_9;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QDateEdit *dateEdit_2;
    QLabel *label_10;
    QCheckBox *checkBox_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *ThePostForm)
    {
        if (ThePostForm->objectName().isEmpty())
            ThePostForm->setObjectName(QString::fromUtf8("ThePostForm"));
        ThePostForm->resize(400, 300);
        ThePostForm->setMinimumSize(QSize(400, 0));
        gridLayout_2 = new QGridLayout(ThePostForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dateEdit = new QDateEdit(ThePostForm);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2021, 1, 1));

        gridLayout->addWidget(dateEdit, 2, 1, 1, 1);

        label_6 = new QLabel(ThePostForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_8 = new QLabel(ThePostForm);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        checkBox = new QCheckBox(ThePostForm);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 7, 1, 1, 1);

        label_5 = new QLabel(ThePostForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        comboBox = new QComboBox(ThePostForm);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_3 = new QLabel(ThePostForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(ThePostForm);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(ThePostForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_7 = new QLabel(ThePostForm);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        lineEdit_3 = new QLineEdit(ThePostForm);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 8, 1, 1, 1);

        lineEdit = new QLineEdit(ThePostForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        comboBox_2 = new QComboBox(ThePostForm);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 5, 1, 1, 1);

        label_9 = new QLabel(ThePostForm);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        comboBox_3 = new QComboBox(ThePostForm);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout->addWidget(comboBox_3, 6, 1, 1, 1);

        lineEdit_2 = new QLineEdit(ThePostForm);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 4, 1, 1, 1);

        label_4 = new QLabel(ThePostForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        dateEdit_2 = new QDateEdit(ThePostForm);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setCalendarPopup(true);
        dateEdit_2->setDate(QDate(2021, 1, 1));

        gridLayout->addWidget(dateEdit_2, 3, 1, 1, 1);

        label_10 = new QLabel(ThePostForm);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 9, 0, 1, 1);

        checkBox_2 = new QCheckBox(ThePostForm);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        gridLayout->addWidget(checkBox_2, 9, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ThePostForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(ThePostForm);

        QMetaObject::connectSlotsByName(ThePostForm);
    } // setupUi

    void retranslateUi(QWidget *ThePostForm)
    {
        ThePostForm->setWindowTitle(QCoreApplication::translate("ThePostForm", "Post", nullptr));
        label_6->setText(QCoreApplication::translate("ThePostForm", "Type Post", nullptr));
        label_8->setText(QCoreApplication::translate("ThePostForm", "Priority", nullptr));
        checkBox->setText(QString());
        label_5->setText(QCoreApplication::translate("ThePostForm", "Answer API", nullptr));
        label_3->setText(QCoreApplication::translate("ThePostForm", "Date Send", nullptr));
        label->setText(QCoreApplication::translate("ThePostForm", "Order", nullptr));
        label_2->setText(QCoreApplication::translate("ThePostForm", "Code Post", nullptr));
        label_7->setText(QCoreApplication::translate("ThePostForm", "Post  Office", nullptr));
        label_9->setText(QCoreApplication::translate("ThePostForm", "Price", nullptr));
        label_4->setText(QCoreApplication::translate("ThePostForm", "Date Received", nullptr));
        label_10->setText(QCoreApplication::translate("ThePostForm", "Delivered", nullptr));
        checkBox_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ThePostForm: public Ui_ThePostForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEPOSTFORM_H
