/********************************************************************************
** Form generated from reading UI file 'dlgSerialSetting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSERIALSETTING_H
#define UI_DLGSERIALSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogSerialSetting
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QWidget *QGirdWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *cBox_airpressure;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *cBox_gimabl;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *cBox_radio;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *cBox_gnss;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_apply;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_cancle;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *DialogSerialSetting)
    {
        if (DialogSerialSetting->objectName().isEmpty())
            DialogSerialSetting->setObjectName(QString::fromUtf8("DialogSerialSetting"));
        DialogSerialSetting->resize(598, 243);
        DialogSerialSetting->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(DialogSerialSetting);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(DialogSerialSetting);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        QGirdWidget = new QWidget(groupBox);
        QGirdWidget->setObjectName(QString::fromUtf8("QGirdWidget"));
        QGirdWidget->setStyleSheet(QString::fromUtf8("border-right-color: rgb(186, 189, 182);\n"
"border-bottom-color: rgb(186, 189, 182);"));
        gridLayout = new QGridLayout(QGirdWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(QGirdWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        cBox_airpressure = new QComboBox(QGirdWidget);
        cBox_airpressure->setObjectName(QString::fromUtf8("cBox_airpressure"));
        cBox_airpressure->setMaxVisibleItems(5);

        horizontalLayout_2->addWidget(cBox_airpressure);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(QGirdWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        cBox_gimabl = new QComboBox(QGirdWidget);
        cBox_gimabl->setObjectName(QString::fromUtf8("cBox_gimabl"));
        cBox_gimabl->setMaxVisibleItems(5);

        horizontalLayout_3->addWidget(cBox_gimabl);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(QGirdWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        cBox_radio = new QComboBox(QGirdWidget);
        cBox_radio->setObjectName(QString::fromUtf8("cBox_radio"));
        cBox_radio->setMaxVisibleItems(5);

        horizontalLayout_5->addWidget(cBox_radio);


        gridLayout->addLayout(horizontalLayout_5, 1, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(QGirdWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        cBox_gnss = new QComboBox(QGirdWidget);
        cBox_gnss->setObjectName(QString::fromUtf8("cBox_gnss"));
        cBox_gnss->setMaxVisibleItems(5);

        horizontalLayout_4->addWidget(cBox_gnss);


        gridLayout->addLayout(horizontalLayout_4, 0, 1, 1, 1);


        verticalLayout_2->addWidget(QGirdWidget);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_apply = new QPushButton(DialogSerialSetting);
        btn_apply->setObjectName(QString::fromUtf8("btn_apply"));

        horizontalLayout->addWidget(btn_apply);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btn_cancle = new QPushButton(DialogSerialSetting);
        btn_cancle->setObjectName(QString::fromUtf8("btn_cancle"));

        horizontalLayout->addWidget(btn_cancle);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(1, 1);

        retranslateUi(DialogSerialSetting);

        QMetaObject::connectSlotsByName(DialogSerialSetting);
    } // setupUi

    void retranslateUi(QDialog *DialogSerialSetting)
    {
        DialogSerialSetting->setWindowTitle(QApplication::translate("DialogSerialSetting", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
        groupBox->setTitle(QApplication::translate("DialogSerialSetting", "\344\270\262\345\217\243\351\200\211\346\213\251", nullptr));
        label_2->setText(QApplication::translate("DialogSerialSetting", "\346\260\224\345\216\213\351\253\230\345\272\246\350\256\241", nullptr));
        label->setText(QApplication::translate("DialogSerialSetting", "\345\220\212\350\210\261", nullptr));
        label_4->setText(QApplication::translate("DialogSerialSetting", "\346\227\240\347\272\277\347\224\265\351\253\230\345\272\246\350\256\241", nullptr));
        label_3->setText(QApplication::translate("DialogSerialSetting", "\347\273\204\345\220\210\346\203\257\345\257\274", nullptr));
        btn_apply->setText(QApplication::translate("DialogSerialSetting", "\345\272\224\347\224\250", nullptr));
        btn_cancle->setText(QApplication::translate("DialogSerialSetting", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSerialSetting: public Ui_DialogSerialSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGSERIALSETTING_H
