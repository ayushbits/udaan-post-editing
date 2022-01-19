/********************************************************************************
** Form generated from reading UI file 'resizeimageview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESIZEIMAGEVIEW_H
#define UI_RESIZEIMAGEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ResizeImageView
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDoubleSpinBox *widthSpinBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDoubleSpinBox *hightSpinBox;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Cancel;
    QPushButton *Ok;

    void setupUi(QDialog *ResizeImageView)
    {
        if (ResizeImageView->objectName().isEmpty())
            ResizeImageView->setObjectName(QString::fromUtf8("ResizeImageView"));
        ResizeImageView->resize(310, 192);
        ResizeImageView->setStyleSheet(QString::fromUtf8("font: 11pt \"Work Sans\"; \n"
"background-color: rgb(32, 33, 72);"));
        verticalLayout_3 = new QVBoxLayout(ResizeImageView);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(ResizeImageView);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout_2->addWidget(label);

        widthSpinBox = new QDoubleSpinBox(ResizeImageView);
        widthSpinBox->setObjectName(QString::fromUtf8("widthSpinBox"));
        widthSpinBox->setStyleSheet(QString::fromUtf8("color:black; \n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(widthSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(ResizeImageView);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout->addWidget(label_2);

        hightSpinBox = new QDoubleSpinBox(ResizeImageView);
        hightSpinBox->setObjectName(QString::fromUtf8("hightSpinBox"));
        hightSpinBox->setStyleSheet(QString::fromUtf8("color:black; \n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(hightSpinBox);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        checkBox = new QCheckBox(ResizeImageView);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setStyleSheet(QString::fromUtf8("color:white;"));

        verticalLayout_2->addWidget(checkBox);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Cancel = new QPushButton(ResizeImageView);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));
        Cancel->setStyleSheet(QString::fromUtf8("QPushButton{background-color:rgb(227, 228, 228);border:0px; color: rgb(32, 33, 72); height:26.96px; width: 113.5px; padding-top:1px; border-radius:4.8px; padding-left:1.3px; selection-color: rgb(32, 33, 72); selection-background-color: rgb(136, 138, 133);\n"
"} QPushButton:checked{background-color: rgb(136, 138, 133);} QPushButton:pressed {background-color: rgb(136, 138, 133);}"));

        horizontalLayout_3->addWidget(Cancel);

        Ok = new QPushButton(ResizeImageView);
        Ok->setObjectName(QString::fromUtf8("Ok"));
        Ok->setStyleSheet(QString::fromUtf8("QPushButton{background-color:rgb(227, 228, 228);border:0px; color: rgb(32, 33, 72); height:26.96px; width: 113.5px; padding-top:1px; border-radius:4.8px; padding-left:1.3px; selection-color: rgb(32, 33, 72); selection-background-color: rgb(136, 138, 133);\n"
"} QPushButton:checked{background-color: rgb(136, 138, 133);} QPushButton:pressed {background-color: rgb(136, 138, 133);}"));

        horizontalLayout_3->addWidget(Ok);


        verticalLayout_3->addLayout(horizontalLayout_3);


        retranslateUi(ResizeImageView);

        QMetaObject::connectSlotsByName(ResizeImageView);
    } // setupUi

    void retranslateUi(QDialog *ResizeImageView)
    {
        ResizeImageView->setWindowTitle(QApplication::translate("ResizeImageView", "Dialog", nullptr));
        label->setText(QApplication::translate("ResizeImageView", "Image Width", nullptr));
        label_2->setText(QApplication::translate("ResizeImageView", "Image Height", nullptr));
        checkBox->setText(QApplication::translate("ResizeImageView", "Keep Aspect Ratio", nullptr));
        Cancel->setText(QApplication::translate("ResizeImageView", "Cancel", nullptr));
        Ok->setText(QApplication::translate("ResizeImageView", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResizeImageView: public Ui_ResizeImageView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESIZEIMAGEVIEW_H
