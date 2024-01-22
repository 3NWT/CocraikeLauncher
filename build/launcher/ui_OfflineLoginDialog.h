/********************************************************************************
** Form generated from reading UI file 'OfflineLoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OFFLINELOGINDIALOG_H
#define UI_OFFLINELOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OfflineLoginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *userTextBox;
    QCheckBox *allowLongUsernames;
    QProgressBar *progressBar;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OfflineLoginDialog)
    {
        if (OfflineLoginDialog->objectName().isEmpty())
            OfflineLoginDialog->setObjectName("OfflineLoginDialog");
        OfflineLoginDialog->resize(400, 150);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OfflineLoginDialog->sizePolicy().hasHeightForWidth());
        OfflineLoginDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(OfflineLoginDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(OfflineLoginDialog);
        label->setObjectName("label");
        label->setText(QString::fromUtf8("Message label placeholder."));
        label->setTextFormat(Qt::RichText);
        label->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(label);

        userTextBox = new QLineEdit(OfflineLoginDialog);
        userTextBox->setObjectName("userTextBox");
        userTextBox->setMaxLength(16);

        verticalLayout->addWidget(userTextBox);

        allowLongUsernames = new QCheckBox(OfflineLoginDialog);
        allowLongUsernames->setObjectName("allowLongUsernames");

        verticalLayout->addWidget(allowLongUsernames);

        progressBar = new QProgressBar(OfflineLoginDialog);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(69);
        progressBar->setTextVisible(false);

        verticalLayout->addWidget(progressBar);

        buttonBox = new QDialogButtonBox(OfflineLoginDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OfflineLoginDialog);

        QMetaObject::connectSlotsByName(OfflineLoginDialog);
    } // setupUi

    void retranslateUi(QDialog *OfflineLoginDialog)
    {
        OfflineLoginDialog->setWindowTitle(QCoreApplication::translate("OfflineLoginDialog", "Add Account", nullptr));
        userTextBox->setPlaceholderText(QCoreApplication::translate("OfflineLoginDialog", "Username", nullptr));
#if QT_CONFIG(tooltip)
        allowLongUsernames->setToolTip(QCoreApplication::translate("OfflineLoginDialog", "Usernames longer than 16 characters cannot be used for LAN games or offline-mode servers.", nullptr));
#endif // QT_CONFIG(tooltip)
        allowLongUsernames->setText(QCoreApplication::translate("OfflineLoginDialog", "Allow long usernames", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OfflineLoginDialog: public Ui_OfflineLoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OFFLINELOGINDIALOG_H
