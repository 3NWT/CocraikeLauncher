/********************************************************************************
** Form generated from reading UI file 'NewComponentDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCOMPONENTDIALOG_H
#define UI_NEWCOMPONENTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewComponentDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *nameTextBox;
    QLineEdit *uidTextBox;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewComponentDialog)
    {
        if (NewComponentDialog->objectName().isEmpty())
            NewComponentDialog->setObjectName("NewComponentDialog");
        NewComponentDialog->setWindowModality(Qt::ApplicationModal);
        NewComponentDialog->resize(345, 146);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/toolbar/copy"), QSize(), QIcon::Normal, QIcon::Off);
        NewComponentDialog->setWindowIcon(icon);
        NewComponentDialog->setModal(true);
        verticalLayout = new QVBoxLayout(NewComponentDialog);
        verticalLayout->setObjectName("verticalLayout");
        nameTextBox = new QLineEdit(NewComponentDialog);
        nameTextBox->setObjectName("nameTextBox");

        verticalLayout->addWidget(nameTextBox);

        uidTextBox = new QLineEdit(NewComponentDialog);
        uidTextBox->setObjectName("uidTextBox");

        verticalLayout->addWidget(uidTextBox);

        line = new QFrame(NewComponentDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(NewComponentDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(nameTextBox, uidTextBox);

        retranslateUi(NewComponentDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NewComponentDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NewComponentDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NewComponentDialog);
    } // setupUi

    void retranslateUi(QDialog *NewComponentDialog)
    {
        NewComponentDialog->setWindowTitle(QCoreApplication::translate("NewComponentDialog", "Add Empty Component", nullptr));
        nameTextBox->setPlaceholderText(QCoreApplication::translate("NewComponentDialog", "Name", nullptr));
        uidTextBox->setPlaceholderText(QCoreApplication::translate("NewComponentDialog", "uid", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewComponentDialog: public Ui_NewComponentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCOMPONENTDIALOG_H
