/********************************************************************************
** Form generated from reading UI file 'theautomobilform.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEAUTOMOBILFORM_H
#define UI_THEAUTOMOBILFORM_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheAutomobilForm
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_2;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_7;
    QDateEdit *dateEdit_2;
    QCheckBox *checkBox_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame_2;
    QGridLayout *gridLayout_7;
    QLineEdit *lineEdit_5;
    QComboBox *comboBox_3;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_6;
    QLabel *label_12;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label_16;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout_6;
    QLabel *label_13;
    QLineEdit *lineEdit_2;
    QLabel *label_7;
    QLabel *label_14;
    QLineEdit *lineEdit_3;
    QLabel *label_9;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QLabel *label_15;
    QLabel *label_10;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_8;
    QPlainTextEdit *plainTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *TheAutomobilForm)
    {
        if (TheAutomobilForm->objectName().isEmpty())
            TheAutomobilForm->setObjectName(QString::fromUtf8("TheAutomobilForm"));
        TheAutomobilForm->resize(450, 539);
        TheAutomobilForm->setMinimumSize(QSize(450, 0));
        gridLayout = new QGridLayout(TheAutomobilForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(TheAutomobilForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy);
        dateEdit->setMinimumSize(QSize(90, 0));
        dateEdit->setCalendarPopup(false);

        gridLayout_2->addWidget(dateEdit, 1, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(comboBox);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(pushButton);


        gridLayout_2->addLayout(horizontalLayout, 0, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        sizePolicy1.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(comboBox_2);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_3->addWidget(pushButton_2);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 2, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 2, 2, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        dateEdit_2 = new QDateEdit(groupBox);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setMaximumSize(QSize(90, 16777215));
        dateEdit_2->setCalendarPopup(true);
        dateEdit_2->setDate(QDate(2021, 1, 1));

        horizontalLayout_7->addWidget(dateEdit_2);

        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout_7->addWidget(checkBox_2);


        gridLayout_2->addLayout(horizontalLayout_7, 4, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(TheAutomobilForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        frame_2 = new QFrame(groupBox_2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy3);
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Sunken);
        gridLayout_7 = new QGridLayout(frame_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        lineEdit_5 = new QLineEdit(frame_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy4);
        lineEdit_5->setMaximumSize(QSize(70, 16777215));

        gridLayout_7->addWidget(lineEdit_5, 0, 0, 1, 1);

        comboBox_3 = new QComboBox(frame_2);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(comboBox_3->sizePolicy().hasHeightForWidth());
        comboBox_3->setSizePolicy(sizePolicy5);
        comboBox_3->setMaximumSize(QSize(50, 16777215));

        gridLayout_7->addWidget(comboBox_3, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(12, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        lineEdit_6 = new QLineEdit(frame_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setMaximumSize(QSize(70, 16777215));

        gridLayout_7->addWidget(lineEdit_6, 0, 4, 1, 1);

        label_12 = new QLabel(frame_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_12, 0, 3, 1, 1);

        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);

        gridLayout_7->addWidget(label_11, 0, 5, 1, 1);


        horizontalLayout_5->addWidget(frame_2);


        gridLayout_4->addLayout(horizontalLayout_5, 1, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_6->addWidget(checkBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        gridLayout_4->addLayout(horizontalLayout_6, 3, 2, 1, 1);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_4->addWidget(label_16, 3, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 0, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        frame = new QFrame(groupBox_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout_6 = new QGridLayout(frame);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_13 = new QLabel(frame);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_6->addWidget(label_13, 0, 2, 1, 1);

        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(30, 16777215));

        gridLayout_6->addWidget(lineEdit_2, 0, 1, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_6->addWidget(label_7, 0, 0, 1, 1);

        label_14 = new QLabel(frame);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_6->addWidget(label_14, 0, 5, 1, 1);

        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMaximumSize(QSize(30, 16777215));

        gridLayout_6->addWidget(lineEdit_3, 0, 4, 1, 1);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy6);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_9, 0, 6, 1, 1);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy6.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy6);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_8, 0, 3, 1, 1);

        lineEdit_4 = new QLineEdit(frame);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMaximumSize(QSize(30, 16777215));

        gridLayout_6->addWidget(lineEdit_4, 0, 7, 1, 1);

        label_15 = new QLabel(frame);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_6->addWidget(label_15, 0, 8, 1, 1);


        horizontalLayout_4->addWidget(frame);


        gridLayout_4->addLayout(horizontalLayout_4, 0, 2, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 1, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(TheAutomobilForm);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_8 = new QGridLayout(groupBox_3);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        plainTextEdit = new QPlainTextEdit(groupBox_3);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout_8->addWidget(plainTextEdit, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(TheAutomobilForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(TheAutomobilForm);

        QMetaObject::connectSlotsByName(TheAutomobilForm);
    } // setupUi

    void retranslateUi(QWidget *TheAutomobilForm)
    {
        TheAutomobilForm->setWindowTitle(QCoreApplication::translate("TheAutomobilForm", "Automobil Adding", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TheAutomobilForm", "Common Data", nullptr));
        label_3->setText(QCoreApplication::translate("TheAutomobilForm", "VIN", nullptr));
        label_2->setText(QCoreApplication::translate("TheAutomobilForm", "Year Of Issue", nullptr));
        label_5->setText(QCoreApplication::translate("TheAutomobilForm", "Date Next\n"
"Technical\n"
"Inspection", nullptr));
        label->setText(QCoreApplication::translate("TheAutomobilForm", "Name Auto", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("TheAutomobilForm", "yyyy", nullptr));
        pushButton->setText(QCoreApplication::translate("TheAutomobilForm", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TheAutomobilForm", "Add", nullptr));
        label_4->setText(QCoreApplication::translate("TheAutomobilForm", "EKO Class", nullptr));
        checkBox_2->setText(QCoreApplication::translate("TheAutomobilForm", "Enable Reminder", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TheAutomobilForm", "Options", nullptr));
        comboBox_3->setCurrentText(QString());
        label_12->setText(QCoreApplication::translate("TheAutomobilForm", "Maximal\n"
"\320\241arrying", nullptr));
        label_11->setText(QCoreApplication::translate("TheAutomobilForm", "T", nullptr));
        checkBox->setText(QString());
        label_16->setText(QCoreApplication::translate("TheAutomobilForm", "Tail Lift", nullptr));
        label_6->setText(QCoreApplication::translate("TheAutomobilForm", "Dimensions\n"
"Cargon\n"
"Compartment", nullptr));
        label_13->setText(QCoreApplication::translate("TheAutomobilForm", "m;", nullptr));
        label_7->setText(QCoreApplication::translate("TheAutomobilForm", "Lenth    ", nullptr));
        label_14->setText(QCoreApplication::translate("TheAutomobilForm", "m;", nullptr));
        label_9->setText(QCoreApplication::translate("TheAutomobilForm", "Height", nullptr));
        label_8->setText(QCoreApplication::translate("TheAutomobilForm", "Width", nullptr));
        label_15->setText(QCoreApplication::translate("TheAutomobilForm", "m;", nullptr));
        label_10->setText(QCoreApplication::translate("TheAutomobilForm", "Volume Cargon\n"
"Compartment", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("TheAutomobilForm", "Comments", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheAutomobilForm: public Ui_TheAutomobilForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEAUTOMOBILFORM_H