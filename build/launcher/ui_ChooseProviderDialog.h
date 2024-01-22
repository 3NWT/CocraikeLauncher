/********************************************************************************
** Form generated from reading UI file 'ChooseProviderDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEPROVIDERDIALOG_H
#define UI_CHOOSEPROVIDERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChooseProviderDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *explanationLabel;
    QFormLayout *providersLayout;
    QHBoxLayout *buttonsLayout;
    QPushButton *skipOneButton;
    QPushButton *skipAllButton;
    QPushButton *confirmAllButton;
    QPushButton *confirmOneButton;
    QCheckBox *tryOthersCheckbox;

    void setupUi(QDialog *ChooseProviderDialog)
    {
        if (ChooseProviderDialog->objectName().isEmpty())
            ChooseProviderDialog->setObjectName("ChooseProviderDialog");
        ChooseProviderDialog->resize(453, 197);
        gridLayout = new QGridLayout(ChooseProviderDialog);
        gridLayout->setObjectName("gridLayout");
        explanationLabel = new QLabel(ChooseProviderDialog);
        explanationLabel->setObjectName("explanationLabel");
        explanationLabel->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        explanationLabel->setWordWrap(true);
        explanationLabel->setIndent(-1);

        gridLayout->addWidget(explanationLabel, 0, 0, 1, 2);

        providersLayout = new QFormLayout();
        providersLayout->setObjectName("providersLayout");
        providersLayout->setLabelAlignment(Qt::AlignHCenter|Qt::AlignTop);
        providersLayout->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addLayout(providersLayout, 1, 0, 1, 2);

        buttonsLayout = new QHBoxLayout();
        buttonsLayout->setObjectName("buttonsLayout");
        skipOneButton = new QPushButton(ChooseProviderDialog);
        skipOneButton->setObjectName("skipOneButton");

        buttonsLayout->addWidget(skipOneButton);

        skipAllButton = new QPushButton(ChooseProviderDialog);
        skipAllButton->setObjectName("skipAllButton");

        buttonsLayout->addWidget(skipAllButton);

        confirmAllButton = new QPushButton(ChooseProviderDialog);
        confirmAllButton->setObjectName("confirmAllButton");

        buttonsLayout->addWidget(confirmAllButton);

        confirmOneButton = new QPushButton(ChooseProviderDialog);
        confirmOneButton->setObjectName("confirmOneButton");

        buttonsLayout->addWidget(confirmOneButton);


        gridLayout->addLayout(buttonsLayout, 4, 0, 1, 2);

        tryOthersCheckbox = new QCheckBox(ChooseProviderDialog);
        tryOthersCheckbox->setObjectName("tryOthersCheckbox");
        tryOthersCheckbox->setChecked(true);

        gridLayout->addWidget(tryOthersCheckbox, 3, 0, 1, 1);


        retranslateUi(ChooseProviderDialog);

        confirmOneButton->setDefault(true);


        QMetaObject::connectSlotsByName(ChooseProviderDialog);
    } // setupUi

    void retranslateUi(QDialog *ChooseProviderDialog)
    {
        ChooseProviderDialog->setWindowTitle(QCoreApplication::translate("ChooseProviderDialog", "Choose a mod provider", nullptr));
        skipOneButton->setText(QCoreApplication::translate("ChooseProviderDialog", "Skip this mod", nullptr));
        skipAllButton->setText(QCoreApplication::translate("ChooseProviderDialog", "Skip all", nullptr));
        confirmAllButton->setText(QCoreApplication::translate("ChooseProviderDialog", "Confirm for all", nullptr));
        confirmOneButton->setText(QCoreApplication::translate("ChooseProviderDialog", "Confirm", nullptr));
        tryOthersCheckbox->setText(QCoreApplication::translate("ChooseProviderDialog", "Try to automatically use other providers if the chosen one fails", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseProviderDialog: public Ui_ChooseProviderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEPROVIDERDIALOG_H
