/********************************************************************************
** Form generated from reading UI file 'ReviewMessageBox.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVIEWMESSAGEBOX_H
#define UI_REVIEWMESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_ReviewMessageBox
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *modTreeWidget;
    QLabel *explainLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *onlyCheckedLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ReviewMessageBox)
    {
        if (ReviewMessageBox->objectName().isEmpty())
            ReviewMessageBox->setObjectName("ReviewMessageBox");
        ReviewMessageBox->resize(500, 350);
        ReviewMessageBox->setSizeGripEnabled(true);
        ReviewMessageBox->setModal(true);
        gridLayout = new QGridLayout(ReviewMessageBox);
        gridLayout->setObjectName("gridLayout");
        modTreeWidget = new QTreeWidget(ReviewMessageBox);
        modTreeWidget->headerItem()->setText(0, QString());
        modTreeWidget->headerItem()->setText(1, QString());
        modTreeWidget->setObjectName("modTreeWidget");
        modTreeWidget->setAlternatingRowColors(true);
        modTreeWidget->setSelectionMode(QAbstractItemView::NoSelection);
        modTreeWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
        modTreeWidget->header()->setVisible(false);

        gridLayout->addWidget(modTreeWidget, 2, 0, 1, 1);

        explainLabel = new QLabel(ReviewMessageBox);
        explainLabel->setObjectName("explainLabel");

        gridLayout->addWidget(explainLabel, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        onlyCheckedLabel = new QLabel(ReviewMessageBox);
        onlyCheckedLabel->setObjectName("onlyCheckedLabel");

        horizontalLayout->addWidget(onlyCheckedLabel);

        buttonBox = new QDialogButtonBox(ReviewMessageBox);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout, 5, 0, 2, 1);


        retranslateUi(ReviewMessageBox);

        QMetaObject::connectSlotsByName(ReviewMessageBox);
    } // setupUi

    void retranslateUi(QDialog *ReviewMessageBox)
    {
        (void)ReviewMessageBox;
    } // retranslateUi

};

namespace Ui {
    class ReviewMessageBox: public Ui_ReviewMessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVIEWMESSAGEBOX_H
