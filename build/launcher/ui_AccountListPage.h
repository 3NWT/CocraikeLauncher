/********************************************************************************
** Form generated from reading UI file 'AccountListPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTLISTPAGE_H
#define UI_ACCOUNTLISTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ui/widgets/VersionListView.h"
#include "ui/widgets/WideBar.h"

QT_BEGIN_NAMESPACE

class Ui_AccountListPage
{
public:
    QAction *actionAddMojang;
    QAction *actionRemove;
    QAction *actionSetDefault;
    QAction *actionNoDefault;
    QAction *actionUploadSkin;
    QAction *actionDeleteSkin;
    QAction *actionAddMicrosoft;
    QAction *actionAddOffline;
    QAction *actionRefresh;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    VersionListView *listView;
    WideBar *toolBar;

    void setupUi(QMainWindow *AccountListPage)
    {
        if (AccountListPage->objectName().isEmpty())
            AccountListPage->setObjectName("AccountListPage");
        AccountListPage->resize(800, 600);
        actionAddMojang = new QAction(AccountListPage);
        actionAddMojang->setObjectName("actionAddMojang");
        actionRemove = new QAction(AccountListPage);
        actionRemove->setObjectName("actionRemove");
        actionSetDefault = new QAction(AccountListPage);
        actionSetDefault->setObjectName("actionSetDefault");
        actionNoDefault = new QAction(AccountListPage);
        actionNoDefault->setObjectName("actionNoDefault");
        actionNoDefault->setCheckable(true);
        actionUploadSkin = new QAction(AccountListPage);
        actionUploadSkin->setObjectName("actionUploadSkin");
        actionDeleteSkin = new QAction(AccountListPage);
        actionDeleteSkin->setObjectName("actionDeleteSkin");
        actionAddMicrosoft = new QAction(AccountListPage);
        actionAddMicrosoft->setObjectName("actionAddMicrosoft");
        actionAddOffline = new QAction(AccountListPage);
        actionAddOffline->setObjectName("actionAddOffline");
        actionRefresh = new QAction(AccountListPage);
        actionRefresh->setObjectName("actionRefresh");
        centralwidget = new QWidget(AccountListPage);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        listView = new VersionListView(centralwidget);
        listView->setObjectName("listView");
        listView->setAlternatingRowColors(true);
        listView->setRootIsDecorated(false);
        listView->setItemsExpandable(false);
        listView->setAllColumnsShowFocus(true);
        listView->header()->setStretchLastSection(false);

        horizontalLayout->addWidget(listView);

        AccountListPage->setCentralWidget(centralwidget);
        toolBar = new WideBar(AccountListPage);
        toolBar->setObjectName("toolBar");
        AccountListPage->addToolBar(Qt::RightToolBarArea, toolBar);

        toolBar->addAction(actionAddMicrosoft);
        toolBar->addAction(actionAddMojang);
        toolBar->addAction(actionAddOffline);
        toolBar->addAction(actionRefresh);
        toolBar->addAction(actionRemove);
        toolBar->addAction(actionSetDefault);
        toolBar->addAction(actionNoDefault);
        toolBar->addSeparator();
        toolBar->addAction(actionUploadSkin);
        toolBar->addAction(actionDeleteSkin);

        retranslateUi(AccountListPage);

        QMetaObject::connectSlotsByName(AccountListPage);
    } // setupUi

    void retranslateUi(QMainWindow *AccountListPage)
    {
        actionAddMojang->setText(QCoreApplication::translate("AccountListPage", "Add &Mojang", nullptr));
        actionRemove->setText(QCoreApplication::translate("AccountListPage", "Remo&ve", nullptr));
        actionSetDefault->setText(QCoreApplication::translate("AccountListPage", "&Set Default", nullptr));
        actionNoDefault->setText(QCoreApplication::translate("AccountListPage", "&No Default", nullptr));
        actionUploadSkin->setText(QCoreApplication::translate("AccountListPage", "&Upload Skin", nullptr));
        actionDeleteSkin->setText(QCoreApplication::translate("AccountListPage", "&Delete Skin", nullptr));
#if QT_CONFIG(tooltip)
        actionDeleteSkin->setToolTip(QCoreApplication::translate("AccountListPage", "Delete the currently active skin and go back to the default one", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAddMicrosoft->setText(QCoreApplication::translate("AccountListPage", "&Add Microsoft", nullptr));
        actionAddOffline->setText(QCoreApplication::translate("AccountListPage", "Add &Offline", nullptr));
        actionRefresh->setText(QCoreApplication::translate("AccountListPage", "&Refresh", nullptr));
#if QT_CONFIG(tooltip)
        actionRefresh->setToolTip(QCoreApplication::translate("AccountListPage", "Refresh the account tokens", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)AccountListPage;
    } // retranslateUi

};

namespace Ui {
    class AccountListPage: public Ui_AccountListPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTLISTPAGE_H
