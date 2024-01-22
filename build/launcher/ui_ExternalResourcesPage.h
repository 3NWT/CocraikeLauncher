/********************************************************************************
** Form generated from reading UI file 'ExternalResourcesPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTERNALRESOURCESPAGE_H
#define UI_EXTERNALRESOURCESPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ui/widgets/InfoFrame.h"
#include "ui/widgets/ModListView.h"
#include "ui/widgets/WideBar.h"

QT_BEGIN_NAMESPACE

class Ui_ExternalResourcesPage
{
public:
    QAction *actionAddItem;
    QAction *actionRemoveItem;
    QAction *actionEnableItem;
    QAction *actionDisableItem;
    QAction *actionViewConfigs;
    QAction *actionViewFolder;
    QAction *actionDownloadItem;
    QAction *actionUpdateItem;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *filterEdit;
    QLabel *filterLabel;
    InfoFrame *frame;
    ModListView *treeView;
    WideBar *actionsToolbar;

    void setupUi(QMainWindow *ExternalResourcesPage)
    {
        if (ExternalResourcesPage->objectName().isEmpty())
            ExternalResourcesPage->setObjectName("ExternalResourcesPage");
        ExternalResourcesPage->resize(1042, 501);
        actionAddItem = new QAction(ExternalResourcesPage);
        actionAddItem->setObjectName("actionAddItem");
        actionRemoveItem = new QAction(ExternalResourcesPage);
        actionRemoveItem->setObjectName("actionRemoveItem");
        actionEnableItem = new QAction(ExternalResourcesPage);
        actionEnableItem->setObjectName("actionEnableItem");
        actionDisableItem = new QAction(ExternalResourcesPage);
        actionDisableItem->setObjectName("actionDisableItem");
        actionViewConfigs = new QAction(ExternalResourcesPage);
        actionViewConfigs->setObjectName("actionViewConfigs");
        actionViewFolder = new QAction(ExternalResourcesPage);
        actionViewFolder->setObjectName("actionViewFolder");
        actionDownloadItem = new QAction(ExternalResourcesPage);
        actionDownloadItem->setObjectName("actionDownloadItem");
        actionDownloadItem->setEnabled(false);
        actionUpdateItem = new QAction(ExternalResourcesPage);
        actionUpdateItem->setObjectName("actionUpdateItem");
        actionUpdateItem->setEnabled(false);
        centralwidget = new QWidget(ExternalResourcesPage);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        filterEdit = new QLineEdit(centralwidget);
        filterEdit->setObjectName("filterEdit");

        gridLayout_2->addWidget(filterEdit, 0, 1, 1, 1);

        filterLabel = new QLabel(centralwidget);
        filterLabel->setObjectName("filterLabel");

        gridLayout_2->addWidget(filterLabel, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 4, 1, 1, 3);

        frame = new InfoFrame(centralwidget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);

        gridLayout->addWidget(frame, 2, 1, 1, 3);

        treeView = new ModListView(centralwidget);
        treeView->setObjectName("treeView");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy1);
        treeView->setAcceptDrops(true);
        treeView->setDragDropMode(QAbstractItemView::DropOnly);

        gridLayout->addWidget(treeView, 1, 1, 1, 3);

        ExternalResourcesPage->setCentralWidget(centralwidget);
        actionsToolbar = new WideBar(ExternalResourcesPage);
        actionsToolbar->setObjectName("actionsToolbar");
        actionsToolbar->setToolButtonStyle(Qt::ToolButtonTextOnly);
        ExternalResourcesPage->addToolBar(Qt::RightToolBarArea, actionsToolbar);
        QWidget::setTabOrder(treeView, filterEdit);

        actionsToolbar->addAction(actionAddItem);
        actionsToolbar->addSeparator();
        actionsToolbar->addAction(actionRemoveItem);
        actionsToolbar->addAction(actionEnableItem);
        actionsToolbar->addAction(actionDisableItem);
        actionsToolbar->addAction(actionViewConfigs);
        actionsToolbar->addAction(actionViewFolder);

        retranslateUi(ExternalResourcesPage);

        QMetaObject::connectSlotsByName(ExternalResourcesPage);
    } // setupUi

    void retranslateUi(QMainWindow *ExternalResourcesPage)
    {
        actionAddItem->setText(QCoreApplication::translate("ExternalResourcesPage", "&Add", nullptr));
#if QT_CONFIG(tooltip)
        actionAddItem->setToolTip(QCoreApplication::translate("ExternalResourcesPage", "Add", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRemoveItem->setText(QCoreApplication::translate("ExternalResourcesPage", "&Remove", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoveItem->setToolTip(QCoreApplication::translate("ExternalResourcesPage", "Remove selected item", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEnableItem->setText(QCoreApplication::translate("ExternalResourcesPage", "&Enable", nullptr));
#if QT_CONFIG(tooltip)
        actionEnableItem->setToolTip(QCoreApplication::translate("ExternalResourcesPage", "Enable selected item", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDisableItem->setText(QCoreApplication::translate("ExternalResourcesPage", "&Disable", nullptr));
#if QT_CONFIG(tooltip)
        actionDisableItem->setToolTip(QCoreApplication::translate("ExternalResourcesPage", "Disable selected item", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewConfigs->setText(QCoreApplication::translate("ExternalResourcesPage", "View &Configs", nullptr));
#if QT_CONFIG(tooltip)
        actionViewConfigs->setToolTip(QCoreApplication::translate("ExternalResourcesPage", "Open the 'config' folder in the system file manager.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewFolder->setText(QCoreApplication::translate("ExternalResourcesPage", "View &Folder", nullptr));
        actionDownloadItem->setText(QCoreApplication::translate("ExternalResourcesPage", "&Download", nullptr));
#if QT_CONFIG(tooltip)
        actionDownloadItem->setToolTip(QCoreApplication::translate("ExternalResourcesPage", "Download a new resource", nullptr));
#endif // QT_CONFIG(tooltip)
        actionUpdateItem->setText(QCoreApplication::translate("ExternalResourcesPage", "Check for &Updates", nullptr));
#if QT_CONFIG(tooltip)
        actionUpdateItem->setToolTip(QCoreApplication::translate("ExternalResourcesPage", "Try to check or update all selected resources (all resources if none are selected)", nullptr));
#endif // QT_CONFIG(tooltip)
        filterLabel->setText(QCoreApplication::translate("ExternalResourcesPage", "Filter:", nullptr));
        actionsToolbar->setWindowTitle(QCoreApplication::translate("ExternalResourcesPage", "Actions", nullptr));
        (void)ExternalResourcesPage;
    } // retranslateUi

};

namespace Ui {
    class ExternalResourcesPage: public Ui_ExternalResourcesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTERNALRESOURCESPAGE_H
