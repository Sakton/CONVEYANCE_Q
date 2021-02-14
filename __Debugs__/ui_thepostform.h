/********************************************************************************
** Form generated from reading UI file 'thepostform.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
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
    QDateEdit *dateEditSend;
    QLabel *label_6;
    QLabel *label_8;
    QCheckBox *checkBoxPriority;
    QLabel *label_5;
    QComboBox *comboBoxOrderPost;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_7;
    QLineEdit *lineEditPrice;
    QLineEdit *lineEditCodePost;
    QComboBox *comboBoxTypePost;
    QLabel *label_9;
    QComboBox *comboBoxOffice;
    QLineEdit *lineEditAnswer_API;
    QLabel *label_4;
    QDateEdit *dateEditReceived;
    QLabel *label_10;
    QCheckBox *checkBoxDelivered;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *ThePostForm)
    {
        if (ThePostForm->objectName().isEmpty())
            ThePostForm->setObjectName(QString::fromUtf8("ThePostForm"));
        ThePostForm->resize(400, 330);
        ThePostForm->setMinimumSize(QSize(400, 0));
        gridLayout_2 = new QGridLayout(ThePostForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dateEditSend = new QDateEdit(ThePostForm);
        dateEditSend->setObjectName(QString::fromUtf8("dateEditSend"));
        dateEditSend->setMaximumSize(QSize(100, 16777215));
        dateEditSend->setCalendarPopup(true);
        dateEditSend->setDate(QDate(2021, 1, 1));

        gridLayout->addWidget(dateEditSend, 2, 1, 1, 1);

        label_6 = new QLabel(ThePostForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_8 = new QLabel(ThePostForm);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        checkBoxPriority = new QCheckBox(ThePostForm);
        checkBoxPriority->setObjectName(QString::fromUtf8("checkBoxPriority"));

        gridLayout->addWidget(checkBoxPriority, 7, 1, 1, 1);

        label_5 = new QLabel(ThePostForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        comboBoxOrderPost = new QComboBox(ThePostForm);
        comboBoxOrderPost->setObjectName(QString::fromUtf8("comboBoxOrderPost"));

        gridLayout->addWidget(comboBoxOrderPost, 0, 1, 1, 1);

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

        lineEditPrice = new QLineEdit(ThePostForm);
        lineEditPrice->setObjectName(QString::fromUtf8("lineEditPrice"));

        gridLayout->addWidget(lineEditPrice, 8, 1, 1, 1);

        lineEditCodePost = new QLineEdit(ThePostForm);
        lineEditCodePost->setObjectName(QString::fromUtf8("lineEditCodePost"));

        gridLayout->addWidget(lineEditCodePost, 1, 1, 1, 1);

        comboBoxTypePost = new QComboBox(ThePostForm);
        comboBoxTypePost->setObjectName(QString::fromUtf8("comboBoxTypePost"));

        gridLayout->addWidget(comboBoxTypePost, 5, 1, 1, 1);

        label_9 = new QLabel(ThePostForm);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        comboBoxOffice = new QComboBox(ThePostForm);
        comboBoxOffice->setObjectName(QString::fromUtf8("comboBoxOffice"));

        gridLayout->addWidget(comboBoxOffice, 6, 1, 1, 1);

        lineEditAnswer_API = new QLineEdit(ThePostForm);
        lineEditAnswer_API->setObjectName(QString::fromUtf8("lineEditAnswer_API"));

        gridLayout->addWidget(lineEditAnswer_API, 4, 1, 1, 1);

        label_4 = new QLabel(ThePostForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        dateEditReceived = new QDateEdit(ThePostForm);
        dateEditReceived->setObjectName(QString::fromUtf8("dateEditReceived"));
        dateEditReceived->setMaximumSize(QSize(100, 16777215));
        dateEditReceived->setCalendarPopup(true);
        dateEditReceived->setDate(QDate(2021, 1, 1));

        gridLayout->addWidget(dateEditReceived, 3, 1, 1, 1);

        label_10 = new QLabel(ThePostForm);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 9, 0, 1, 1);

        checkBoxDelivered = new QCheckBox(ThePostForm);
        checkBoxDelivered->setObjectName(QString::fromUtf8("checkBoxDelivered"));

        gridLayout->addWidget(checkBoxDelivered, 9, 1, 1, 1);


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
        checkBoxPriority->setText(QString());
        label_5->setText(QCoreApplication::translate("ThePostForm", "Answer API", nullptr));
        label_3->setText(QCoreApplication::translate("ThePostForm", "Date Send", nullptr));
        label->setText(QCoreApplication::translate("ThePostForm", "Order", nullptr));
        label_2->setText(QCoreApplication::translate("ThePostForm", "Code Post", nullptr));
        label_7->setText(QCoreApplication::translate("ThePostForm", "Post  Office", nullptr));
        label_9->setText(QCoreApplication::translate("ThePostForm", "Price", nullptr));
        label_4->setText(QCoreApplication::translate("ThePostForm", "Date Received", nullptr));
        label_10->setText(QCoreApplication::translate("ThePostForm", "Delivered", nullptr));
        checkBoxDelivered->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ThePostForm: public Ui_ThePostForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEPOSTFORM_H
