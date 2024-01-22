/********************************************************************************
** Form generated from reading UI file 'ProgressDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSDIALOG_H
#define UI_PROGRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ProgressDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *skipButton;
    QLabel *globalStatusLabel;
    QLabel *statusLabel;
    QProgressBar *taskProgressBar;
    QProgressBar *globalProgressBar;

    void setupUi(QDialog *ProgressDialog)
    {
        if (ProgressDialog->objectName().isEmpty())
            ProgressDialog->setObjectName("ProgressDialog");
        ProgressDialog->setMinimumSize(QSize(400, 0));
        ProgressDialog->setMaximumSize(QSize(600, 16777215));
        gridLayout = new QGridLayout(ProgressDialog);
        gridLayout->setObjectName("gridLayout");
        skipButton = new QPushButton(ProgressDialog);
        skipButton->setObjectName("skipButton");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(skipButton->sizePolicy().hasHeightForWidth());
        skipButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(skipButton, 4, 0, 1, 1);

        globalStatusLabel = new QLabel(ProgressDialog);
        globalStatusLabel->setObjectName("globalStatusLabel");

        gridLayout->addWidget(globalStatusLabel, 0, 0, 1, 1);

        statusLabel = new QLabel(ProgressDialog);
        statusLabel->setObjectName("statusLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy1);
        statusLabel->setWordWrap(true);

        gridLayout->addWidget(statusLabel, 2, 0, 1, 1);

        taskProgressBar = new QProgressBar(ProgressDialog);
        taskProgressBar->setObjectName("taskProgressBar");
        taskProgressBar->setValue(24);
        taskProgressBar->setTextVisible(false);

        gridLayout->addWidget(taskProgressBar, 3, 0, 1, 1);

        globalProgressBar = new QProgressBar(ProgressDialog);
        globalProgressBar->setObjectName("globalProgressBar");
        globalProgressBar->setEnabled(true);
        globalProgressBar->setValue(24);

        gridLayout->addWidget(globalProgressBar, 1, 0, 1, 1);


        retranslateUi(ProgressDialog);

        QMetaObject::connectSlotsByName(ProgressDialog);
    } // setupUi

    void retranslateUi(QDialog *ProgressDialog)
    {
        ProgressDialog->setWindowTitle(QCoreApplication::translate("ProgressDialog", "Please wait...", nullptr));
        skipButton->setText(QCoreApplication::translate("ProgressDialog", "Skip", nullptr));
        globalStatusLabel->setText(QCoreApplication::translate("ProgressDialog", "Global Task Status...", nullptr));
        statusLabel->setText(QCoreApplication::translate("ProgressDialog", "Task Status...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProgressDialog: public Ui_ProgressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSDIALOG_H
