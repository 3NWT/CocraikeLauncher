/********************************************************************************
** Form generated from reading UI file 'NewsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSDIALOG_H
#define UI_NEWSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include "ui/widgets/ProjectDescriptionPage.h"

QT_BEGIN_NAMESPACE

class Ui_NewsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *leftVerticalLayout;
    QListWidget *articleListWidget;
    QVBoxLayout *rightVerticalLayout;
    QLabel *articleTitleLabel;
    ProjectDescriptionPage *currentArticleContentBrowser;
    QGridLayout *gridLayout;
    QPushButton *closeButton;
    QPushButton *toggleListButton;

    void setupUi(QDialog *NewsDialog)
    {
        if (NewsDialog->objectName().isEmpty())
            NewsDialog->setObjectName("NewsDialog");
        NewsDialog->resize(800, 500);
        NewsDialog->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(NewsDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        leftVerticalLayout = new QVBoxLayout();
        leftVerticalLayout->setObjectName("leftVerticalLayout");
        articleListWidget = new QListWidget(NewsDialog);
        articleListWidget->setObjectName("articleListWidget");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(articleListWidget->sizePolicy().hasHeightForWidth());
        articleListWidget->setSizePolicy(sizePolicy);

        leftVerticalLayout->addWidget(articleListWidget);


        horizontalLayout->addLayout(leftVerticalLayout);

        rightVerticalLayout = new QVBoxLayout();
        rightVerticalLayout->setObjectName("rightVerticalLayout");
        articleTitleLabel = new QLabel(NewsDialog);
        articleTitleLabel->setObjectName("articleTitleLabel");
        articleTitleLabel->setText(QString::fromUtf8("Placeholder"));
        articleTitleLabel->setAlignment(Qt::AlignCenter);
        articleTitleLabel->setOpenExternalLinks(true);

        rightVerticalLayout->addWidget(articleTitleLabel);

        currentArticleContentBrowser = new ProjectDescriptionPage(NewsDialog);
        currentArticleContentBrowser->setObjectName("currentArticleContentBrowser");
        currentArticleContentBrowser->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        currentArticleContentBrowser->setOpenExternalLinks(true);
        currentArticleContentBrowser->setOpenLinks(true);

        rightVerticalLayout->addWidget(currentArticleContentBrowser);


        horizontalLayout->addLayout(rightVerticalLayout);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        closeButton = new QPushButton(NewsDialog);
        closeButton->setObjectName("closeButton");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(closeButton, 0, 1, 1, 1);

        toggleListButton = new QPushButton(NewsDialog);
        toggleListButton->setObjectName("toggleListButton");

        gridLayout->addWidget(toggleListButton, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(NewsDialog);
        QObject::connect(closeButton, &QPushButton::clicked, NewsDialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(NewsDialog);
    } // setupUi

    void retranslateUi(QDialog *NewsDialog)
    {
        NewsDialog->setWindowTitle(QCoreApplication::translate("NewsDialog", "News", nullptr));
        closeButton->setText(QCoreApplication::translate("NewsDialog", "Close", nullptr));
        toggleListButton->setText(QCoreApplication::translate("NewsDialog", "Hide article list", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewsDialog: public Ui_NewsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSDIALOG_H
