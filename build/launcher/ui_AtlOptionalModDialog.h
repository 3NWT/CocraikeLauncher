/********************************************************************************
** Form generated from reading UI file 'AtlOptionalModDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATLOPTIONALMODDIALOG_H
#define UI_ATLOPTIONALMODDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include "ui/widgets/ModListView.h"

QT_BEGIN_NAMESPACE

class Ui_AtlOptionalModDialog
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *installButton;
    QPushButton *shareCodeButton;
    QPushButton *selectRecommendedButton;
    QPushButton *clearAllButton;
    ModListView *treeView;

    void setupUi(QDialog *AtlOptionalModDialog)
    {
        if (AtlOptionalModDialog->objectName().isEmpty())
            AtlOptionalModDialog->setObjectName("AtlOptionalModDialog");
        AtlOptionalModDialog->resize(550, 310);
        gridLayout_2 = new QGridLayout(AtlOptionalModDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        installButton = new QPushButton(AtlOptionalModDialog);
        installButton->setObjectName("installButton");

        gridLayout_2->addWidget(installButton, 1, 3, 1, 1);

        shareCodeButton = new QPushButton(AtlOptionalModDialog);
        shareCodeButton->setObjectName("shareCodeButton");
        shareCodeButton->setEnabled(true);

        gridLayout_2->addWidget(shareCodeButton, 1, 0, 1, 1);

        selectRecommendedButton = new QPushButton(AtlOptionalModDialog);
        selectRecommendedButton->setObjectName("selectRecommendedButton");

        gridLayout_2->addWidget(selectRecommendedButton, 1, 1, 1, 1);

        clearAllButton = new QPushButton(AtlOptionalModDialog);
        clearAllButton->setObjectName("clearAllButton");

        gridLayout_2->addWidget(clearAllButton, 1, 2, 1, 1);

        treeView = new ModListView(AtlOptionalModDialog);
        treeView->setObjectName("treeView");

        gridLayout_2->addWidget(treeView, 0, 0, 1, 4);


        retranslateUi(AtlOptionalModDialog);

        installButton->setDefault(true);


        QMetaObject::connectSlotsByName(AtlOptionalModDialog);
    } // setupUi

    void retranslateUi(QDialog *AtlOptionalModDialog)
    {
        AtlOptionalModDialog->setWindowTitle(QCoreApplication::translate("AtlOptionalModDialog", "Select Mods To Install", nullptr));
        installButton->setText(QCoreApplication::translate("AtlOptionalModDialog", "Install", nullptr));
        shareCodeButton->setText(QCoreApplication::translate("AtlOptionalModDialog", "Use Share Code", nullptr));
        selectRecommendedButton->setText(QCoreApplication::translate("AtlOptionalModDialog", "Select Recommended", nullptr));
        clearAllButton->setText(QCoreApplication::translate("AtlOptionalModDialog", "Clear All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AtlOptionalModDialog: public Ui_AtlOptionalModDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATLOPTIONALMODDIALOG_H
