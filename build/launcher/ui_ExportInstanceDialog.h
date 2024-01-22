/********************************************************************************
** Form generated from reading UI file 'ExportInstanceDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTINSTANCEDIALOG_H
#define UI_EXPORTINSTANCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportInstanceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *treeView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportInstanceDialog)
    {
        if (ExportInstanceDialog->objectName().isEmpty())
            ExportInstanceDialog->setObjectName("ExportInstanceDialog");
        ExportInstanceDialog->resize(720, 625);
        verticalLayout = new QVBoxLayout(ExportInstanceDialog);
        verticalLayout->setObjectName("verticalLayout");
        treeView = new QTreeView(ExportInstanceDialog);
        treeView->setObjectName("treeView");
        treeView->setAlternatingRowColors(true);
        treeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeView->setSortingEnabled(true);
        treeView->header()->setStretchLastSection(false);

        verticalLayout->addWidget(treeView);

        buttonBox = new QDialogButtonBox(ExportInstanceDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ExportInstanceDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ExportInstanceDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ExportInstanceDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ExportInstanceDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportInstanceDialog)
    {
        ExportInstanceDialog->setWindowTitle(QCoreApplication::translate("ExportInstanceDialog", "Export Instance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExportInstanceDialog: public Ui_ExportInstanceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTINSTANCEDIALOG_H
