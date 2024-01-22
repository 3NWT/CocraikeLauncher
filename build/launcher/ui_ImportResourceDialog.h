/********************************************************************************
** Form generated from reading UI file 'ImportResourceDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTRESOURCEDIALOG_H
#define UI_IMPORTRESOURCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ImportResourceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_file_path;
    QListView *instanceView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ImportResourceDialog)
    {
        if (ImportResourceDialog->objectName().isEmpty())
            ImportResourceDialog->setObjectName("ImportResourceDialog");
        ImportResourceDialog->resize(676, 555);
        verticalLayout = new QVBoxLayout(ImportResourceDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ImportResourceDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_file_path = new QLabel(ImportResourceDialog);
        label_file_path->setObjectName("label_file_path");

        verticalLayout->addWidget(label_file_path);

        instanceView = new QListView(ImportResourceDialog);
        instanceView->setObjectName("instanceView");

        verticalLayout->addWidget(instanceView);

        buttonBox = new QDialogButtonBox(ImportResourceDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ImportResourceDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ImportResourceDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ImportResourceDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ImportResourceDialog);
    } // setupUi

    void retranslateUi(QDialog *ImportResourceDialog)
    {
        ImportResourceDialog->setWindowTitle(QCoreApplication::translate("ImportResourceDialog", "Choose instance to import to", nullptr));
        label->setText(QCoreApplication::translate("ImportResourceDialog", "Choose the instance you would like to import this resource pack to.", nullptr));
        label_file_path->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ImportResourceDialog: public Ui_ImportResourceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTRESOURCEDIALOG_H
