/********************************************************************************
** Form generated from reading UI file 'BlockedModsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKEDMODSDIALOG_H
#define UI_BLOCKEDMODSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BlockedModsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelDescription;
    QLabel *labelExplain;
    QTextBrowser *textBrowserModsListing;
    QLabel *labelWatched;
    QTextBrowser *textBrowserWatched;
    QHBoxLayout *bottomBoxH;
    QLabel *labelModsFound;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BlockedModsDialog)
    {
        if (BlockedModsDialog->objectName().isEmpty())
            BlockedModsDialog->setObjectName("BlockedModsDialog");
        BlockedModsDialog->resize(400, 400);
        BlockedModsDialog->setMinimumSize(QSize(0, 350));
        BlockedModsDialog->setWindowTitle(QString::fromUtf8("BlockedModsDialog"));
        verticalLayout = new QVBoxLayout(BlockedModsDialog);
        verticalLayout->setObjectName("verticalLayout");
        labelDescription = new QLabel(BlockedModsDialog);
        labelDescription->setObjectName("labelDescription");
        labelDescription->setText(QString::fromUtf8("Placeholder description"));
        labelDescription->setTextFormat(Qt::RichText);
        labelDescription->setWordWrap(true);

        verticalLayout->addWidget(labelDescription);

        labelExplain = new QLabel(BlockedModsDialog);
        labelExplain->setObjectName("labelExplain");
        labelExplain->setWordWrap(true);
        labelExplain->setOpenExternalLinks(true);

        verticalLayout->addWidget(labelExplain);

        textBrowserModsListing = new QTextBrowser(BlockedModsDialog);
        textBrowserModsListing->setObjectName("textBrowserModsListing");
        textBrowserModsListing->setAcceptRichText(true);
        textBrowserModsListing->setOpenExternalLinks(true);

        verticalLayout->addWidget(textBrowserModsListing);

        labelWatched = new QLabel(BlockedModsDialog);
        labelWatched->setObjectName("labelWatched");

        verticalLayout->addWidget(labelWatched);

        textBrowserWatched = new QTextBrowser(BlockedModsDialog);
        textBrowserWatched->setObjectName("textBrowserWatched");
        textBrowserWatched->setBaseSize(QSize(0, 12));
        textBrowserWatched->setOpenExternalLinks(true);
        textBrowserWatched->setOpenLinks(false);

        verticalLayout->addWidget(textBrowserWatched);

        bottomBoxH = new QHBoxLayout();
        bottomBoxH->setObjectName("bottomBoxH");
        labelModsFound = new QLabel(BlockedModsDialog);
        labelModsFound->setObjectName("labelModsFound");

        bottomBoxH->addWidget(labelModsFound);

        buttonBox = new QDialogButtonBox(BlockedModsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        bottomBoxH->addWidget(buttonBox);


        verticalLayout->addLayout(bottomBoxH);

        verticalLayout->setStretch(2, 3);
        verticalLayout->setStretch(4, 1);

        retranslateUi(BlockedModsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, BlockedModsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, BlockedModsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(BlockedModsDialog);
    } // setupUi

    void retranslateUi(QDialog *BlockedModsDialog)
    {
        labelExplain->setText(QCoreApplication::translate("BlockedModsDialog", "<html><head/><body><p>Your configured global mods folder and default downloads folder are automatically checked for the downloaded mods and they will be copied to the instance if found.</p><p>Optionally, you may drag and drop the downloaded mods onto this dialog or add a folder to watch if you did not download the mods to a default location.</p></body></html>", nullptr));
        labelWatched->setText(QCoreApplication::translate("BlockedModsDialog", "Watched Folders:", nullptr));
        labelModsFound->setText(QString());
        (void)BlockedModsDialog;
    } // retranslateUi

};

namespace Ui {
    class BlockedModsDialog: public Ui_BlockedModsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKEDMODSDIALOG_H
