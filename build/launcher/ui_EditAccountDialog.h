/********************************************************************************
** Form generated from reading UI file 'EditAccountDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITACCOUNTDIALOG_H
#define UI_EDITACCOUNTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditAccountDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *userTextBox;
    QLineEdit *passTextBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditAccountDialog)
    {
        if (EditAccountDialog->objectName().isEmpty())
            EditAccountDialog->setObjectName("EditAccountDialog");
        EditAccountDialog->resize(400, 148);
        verticalLayout = new QVBoxLayout(EditAccountDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(EditAccountDialog);
        label->setObjectName("label");
        label->setText(QString::fromUtf8("Message label placeholder."));
        label->setTextFormat(Qt::RichText);
        label->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(label);

        userTextBox = new QLineEdit(EditAccountDialog);
        userTextBox->setObjectName("userTextBox");

        verticalLayout->addWidget(userTextBox);

        passTextBox = new QLineEdit(EditAccountDialog);
        passTextBox->setObjectName("passTextBox");
        passTextBox->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passTextBox);

        buttonBox = new QDialogButtonBox(EditAccountDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EditAccountDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EditAccountDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EditAccountDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EditAccountDialog);
    } // setupUi

    void retranslateUi(QDialog *EditAccountDialog)
    {
        EditAccountDialog->setWindowTitle(QCoreApplication::translate("EditAccountDialog", "Login", nullptr));
        userTextBox->setPlaceholderText(QCoreApplication::translate("EditAccountDialog", "Email", nullptr));
        passTextBox->setPlaceholderText(QCoreApplication::translate("EditAccountDialog", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditAccountDialog: public Ui_EditAccountDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITACCOUNTDIALOG_H
