/********************************************************************************
** Form generated from reading UI file 'IconPickerDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICONPICKERDIALOG_H
#define UI_ICONPICKERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QListView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_IconPickerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListView *iconView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *IconPickerDialog)
    {
        if (IconPickerDialog->objectName().isEmpty())
            IconPickerDialog->setObjectName("IconPickerDialog");
        IconPickerDialog->resize(676, 555);
        verticalLayout = new QVBoxLayout(IconPickerDialog);
        verticalLayout->setObjectName("verticalLayout");
        iconView = new QListView(IconPickerDialog);
        iconView->setObjectName("iconView");

        verticalLayout->addWidget(iconView);

        buttonBox = new QDialogButtonBox(IconPickerDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(IconPickerDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, IconPickerDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, IconPickerDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(IconPickerDialog);
    } // setupUi

    void retranslateUi(QDialog *IconPickerDialog)
    {
        IconPickerDialog->setWindowTitle(QCoreApplication::translate("IconPickerDialog", "Pick icon", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IconPickerDialog: public Ui_IconPickerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICONPICKERDIALOG_H
