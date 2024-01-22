/********************************************************************************
** Form generated from reading UI file 'SkinUploadDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKINUPLOADDIALOG_H
#define UI_SKINUPLOADDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SkinUploadDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *fileBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *skinPathTextBox;
    QPushButton *skinBrowseBtn;
    QGroupBox *modelBox;
    QVBoxLayout *verticalLayout_1;
    QRadioButton *steveBtn;
    QRadioButton *alexBtn;
    QGroupBox *capeBox;
    QVBoxLayout *verticalLayout_2;
    QComboBox *capeCombo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SkinUploadDialog)
    {
        if (SkinUploadDialog->objectName().isEmpty())
            SkinUploadDialog->setObjectName("SkinUploadDialog");
        SkinUploadDialog->resize(394, 360);
        verticalLayout = new QVBoxLayout(SkinUploadDialog);
        verticalLayout->setObjectName("verticalLayout");
        fileBox = new QGroupBox(SkinUploadDialog);
        fileBox->setObjectName("fileBox");
        horizontalLayout = new QHBoxLayout(fileBox);
        horizontalLayout->setObjectName("horizontalLayout");
        skinPathTextBox = new QLineEdit(fileBox);
        skinPathTextBox->setObjectName("skinPathTextBox");

        horizontalLayout->addWidget(skinPathTextBox);

        skinBrowseBtn = new QPushButton(fileBox);
        skinBrowseBtn->setObjectName("skinBrowseBtn");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(skinBrowseBtn->sizePolicy().hasHeightForWidth());
        skinBrowseBtn->setSizePolicy(sizePolicy);
        skinBrowseBtn->setMaximumSize(QSize(28, 16777215));
        skinBrowseBtn->setText(QString::fromUtf8("..."));

        horizontalLayout->addWidget(skinBrowseBtn);


        verticalLayout->addWidget(fileBox);

        modelBox = new QGroupBox(SkinUploadDialog);
        modelBox->setObjectName("modelBox");
        verticalLayout_1 = new QVBoxLayout(modelBox);
        verticalLayout_1->setObjectName("verticalLayout_1");
        steveBtn = new QRadioButton(modelBox);
        steveBtn->setObjectName("steveBtn");
        steveBtn->setChecked(true);

        verticalLayout_1->addWidget(steveBtn);

        alexBtn = new QRadioButton(modelBox);
        alexBtn->setObjectName("alexBtn");

        verticalLayout_1->addWidget(alexBtn);


        verticalLayout->addWidget(modelBox);

        capeBox = new QGroupBox(SkinUploadDialog);
        capeBox->setObjectName("capeBox");
        verticalLayout_2 = new QVBoxLayout(capeBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        capeCombo = new QComboBox(capeBox);
        capeCombo->setObjectName("capeCombo");

        verticalLayout_2->addWidget(capeCombo);


        verticalLayout->addWidget(capeBox);

        buttonBox = new QDialogButtonBox(SkinUploadDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SkinUploadDialog);

        QMetaObject::connectSlotsByName(SkinUploadDialog);
    } // setupUi

    void retranslateUi(QDialog *SkinUploadDialog)
    {
        SkinUploadDialog->setWindowTitle(QCoreApplication::translate("SkinUploadDialog", "Skin Upload", nullptr));
        fileBox->setTitle(QCoreApplication::translate("SkinUploadDialog", "Skin File", nullptr));
        skinPathTextBox->setPlaceholderText(QCoreApplication::translate("SkinUploadDialog", "Leave empty to keep current skin", nullptr));
        modelBox->setTitle(QCoreApplication::translate("SkinUploadDialog", "Player Model", nullptr));
        steveBtn->setText(QCoreApplication::translate("SkinUploadDialog", "Steve Model", nullptr));
        alexBtn->setText(QCoreApplication::translate("SkinUploadDialog", "Alex Model", nullptr));
        capeBox->setTitle(QCoreApplication::translate("SkinUploadDialog", "Cape", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SkinUploadDialog: public Ui_SkinUploadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKINUPLOADDIALOG_H
