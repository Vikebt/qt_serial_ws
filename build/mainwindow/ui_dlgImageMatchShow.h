/********************************************************************************
** Form generated from reading UI file 'dlgImageMatchShow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGIMAGEMATCHSHOW_H
#define UI_DLGIMAGEMATCHSHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogImageMatchShow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_image;

    void setupUi(QDialog *DialogImageMatchShow)
    {
        if (DialogImageMatchShow->objectName().isEmpty())
            DialogImageMatchShow->setObjectName(QString::fromUtf8("DialogImageMatchShow"));
        DialogImageMatchShow->resize(575, 418);
        verticalLayout = new QVBoxLayout(DialogImageMatchShow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_image = new QLabel(DialogImageMatchShow);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_image->sizePolicy().hasHeightForWidth());
        label_image->setSizePolicy(sizePolicy);
        label_image->setMinimumSize(QSize(556, 400));
        label_image->setMaximumSize(QSize(556, 400));

        verticalLayout->addWidget(label_image);


        retranslateUi(DialogImageMatchShow);

        QMetaObject::connectSlotsByName(DialogImageMatchShow);
    } // setupUi

    void retranslateUi(QDialog *DialogImageMatchShow)
    {
        DialogImageMatchShow->setWindowTitle(QApplication::translate("DialogImageMatchShow", "\345\214\271\351\205\215\347\273\223\346\236\234", nullptr));
        label_image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogImageMatchShow: public Ui_DialogImageMatchShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGIMAGEMATCHSHOW_H
