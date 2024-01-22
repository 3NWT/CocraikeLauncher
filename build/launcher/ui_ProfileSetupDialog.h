/********************************************************************************
** Form generated from reading UI file 'ProfileSetupDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILESETUPDIALOG_H
#define UI_PROFILESETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_ProfileSetupDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *descriptionLabel;
    QLineEdit *nameEdit;
    QDialogButtonBox *buttonBox;
    QLabel *errorLabel;

    void setupUi(QDialog *ProfileSetupDialog)
    {
        if (ProfileSetupDialog->objectName().isEmpty())
            ProfileSetupDialog->setObjectName("ProfileSetupDialog");
        ProfileSetupDialog->resize(615, 208);
        gridLayout = new QGridLayout(ProfileSetupDialog);
        gridLayout->setObjectName("gridLayout");
        descriptionLabel = new QLabel(ProfileSetupDialog);
        descriptionLabel->setObjectName("descriptionLabel");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(descriptionLabel->sizePolicy().hasHeightForWidth());
        descriptionLabel->setSizePolicy(sizePolicy);
        descriptionLabel->setWordWrap(true);

        gridLayout->addWidget(descriptionLabel, 0, 0, 1, 2);

        nameEdit = new QLineEdit(ProfileSetupDialog);
        nameEdit->setObjectName("nameEdit");

        gridLayout->addWidget(nameEdit, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ProfileSetupDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 2);

        errorLabel = new QLabel(ProfileSetupDialog);
        errorLabel->setObjectName("errorLabel");
        errorLabel->setEnabled(true);
        errorLabel->setText(QString::fromUtf8("Errors go here"));
        errorLabel->setWordWrap(true);
        errorLabel->setOpenExternalLinks(true);
        errorLabel->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(errorLabel, 3, 0, 1, 1);

#if QT_CONFIG(shortcut)
        descriptionLabel->setBuddy(nameEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ProfileSetupDialog);

        QMetaObject::connectSlotsByName(ProfileSetupDialog);
    } // setupUi

    void retranslateUi(QDialog *ProfileSetupDialog)
    {
        ProfileSetupDialog->setWindowTitle(QCoreApplication::translate("ProfileSetupDialog", "Choose Minecraft name", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("ProfileSetupDialog", "You just need to take one more step to be able to play Minecraft on this account.\n"
"\n"
"Choose your name carefully:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileSetupDialog: public Ui_ProfileSetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILESETUPDIALOG_H
