/********************************************************************************
** Form generated from reading UI file 'MSALoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MSALOGINDIALOG_H
#define UI_MSALOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MSALoginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QPushButton *actionButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MSALoginDialog)
    {
        if (MSALoginDialog->objectName().isEmpty())
            MSALoginDialog->setObjectName("MSALoginDialog");
        MSALoginDialog->resize(491, 143);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MSALoginDialog->sizePolicy().hasHeightForWidth());
        MSALoginDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(MSALoginDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(MSALoginDialog);
        label->setObjectName("label");
        label->setText(QString::fromUtf8("Message label placeholder.\n"
"\n"
"aaaaa"));
        label->setTextFormat(Qt::RichText);
        label->setOpenExternalLinks(true);
        label->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(label);

        progressBar = new QProgressBar(MSALoginDialog);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(24);
        progressBar->setTextVisible(false);

        verticalLayout->addWidget(progressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        actionButton = new QPushButton(MSALoginDialog);
        actionButton->setObjectName("actionButton");

        horizontalLayout->addWidget(actionButton);

        buttonBox = new QDialogButtonBox(MSALoginDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(MSALoginDialog);

        QMetaObject::connectSlotsByName(MSALoginDialog);
    } // setupUi

    void retranslateUi(QDialog *MSALoginDialog)
    {
        MSALoginDialog->setWindowTitle(QCoreApplication::translate("MSALoginDialog", "Add Microsoft Account", nullptr));
        actionButton->setText(QCoreApplication::translate("MSALoginDialog", "Open page and copy code", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MSALoginDialog: public Ui_MSALoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MSALOGINDIALOG_H
