/********************************************************************************
** Form generated from reading UI file 'ScrollMessageBox.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCROLLMESSAGEBOX_H
#define UI_SCROLLMESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_ScrollMessageBox
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *ScrollMessageBox)
    {
        if (ScrollMessageBox->objectName().isEmpty())
            ScrollMessageBox->setObjectName("ScrollMessageBox");
        ScrollMessageBox->resize(500, 455);
        ScrollMessageBox->setWindowTitle(QString::fromUtf8("ScrollMessageBox"));
        gridLayout = new QGridLayout(ScrollMessageBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(ScrollMessageBox);
        label->setObjectName("label");
        label->setText(QString::fromUtf8(""));
        label->setTextFormat(Qt::RichText);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ScrollMessageBox);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        textBrowser = new QTextBrowser(ScrollMessageBox);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setAcceptRichText(true);
        textBrowser->setOpenExternalLinks(true);

        gridLayout->addWidget(textBrowser, 1, 0, 1, 1);


        retranslateUi(ScrollMessageBox);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ScrollMessageBox, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ScrollMessageBox, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ScrollMessageBox);
    } // setupUi

    void retranslateUi(QDialog *ScrollMessageBox)
    {
        (void)ScrollMessageBox;
    } // retranslateUi

};

namespace Ui {
    class ScrollMessageBox: public Ui_ScrollMessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCROLLMESSAGEBOX_H
