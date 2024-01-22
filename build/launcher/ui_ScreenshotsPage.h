/********************************************************************************
** Form generated from reading UI file 'ScreenshotsPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSHOTSPAGE_H
#define UI_SCREENSHOTSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ui/widgets/WideBar.h"

QT_BEGIN_NAMESPACE

class Ui_ScreenshotsPage
{
public:
    QAction *actionUpload;
    QAction *actionDelete;
    QAction *actionRename;
    QAction *actionView_Folder;
    QAction *actionCopy_Image;
    QAction *actionCopy_File_s;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QListView *listView;
    WideBar *toolBar;

    void setupUi(QMainWindow *ScreenshotsPage)
    {
        if (ScreenshotsPage->objectName().isEmpty())
            ScreenshotsPage->setObjectName("ScreenshotsPage");
        ScreenshotsPage->resize(800, 600);
        actionUpload = new QAction(ScreenshotsPage);
        actionUpload->setObjectName("actionUpload");
        actionDelete = new QAction(ScreenshotsPage);
        actionDelete->setObjectName("actionDelete");
        actionRename = new QAction(ScreenshotsPage);
        actionRename->setObjectName("actionRename");
        actionView_Folder = new QAction(ScreenshotsPage);
        actionView_Folder->setObjectName("actionView_Folder");
        actionCopy_Image = new QAction(ScreenshotsPage);
        actionCopy_Image->setObjectName("actionCopy_Image");
        actionCopy_File_s = new QAction(ScreenshotsPage);
        actionCopy_File_s->setObjectName("actionCopy_File_s");
        centralwidget = new QWidget(ScreenshotsPage);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        listView = new QListView(centralwidget);
        listView->setObjectName("listView");
        listView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        listView->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout->addWidget(listView);

        ScreenshotsPage->setCentralWidget(centralwidget);
        toolBar = new WideBar(ScreenshotsPage);
        toolBar->setObjectName("toolBar");
        toolBar->setToolButtonStyle(Qt::ToolButtonTextOnly);
        ScreenshotsPage->addToolBar(Qt::RightToolBarArea, toolBar);

        toolBar->addAction(actionUpload);
        toolBar->addAction(actionCopy_Image);
        toolBar->addAction(actionCopy_File_s);
        toolBar->addAction(actionDelete);
        toolBar->addAction(actionRename);
        toolBar->addAction(actionView_Folder);

        retranslateUi(ScreenshotsPage);

        QMetaObject::connectSlotsByName(ScreenshotsPage);
    } // setupUi

    void retranslateUi(QMainWindow *ScreenshotsPage)
    {
        actionUpload->setText(QCoreApplication::translate("ScreenshotsPage", "Upload", nullptr));
        actionDelete->setText(QCoreApplication::translate("ScreenshotsPage", "Delete", nullptr));
        actionRename->setText(QCoreApplication::translate("ScreenshotsPage", "Rename", nullptr));
        actionView_Folder->setText(QCoreApplication::translate("ScreenshotsPage", "View Folder", nullptr));
        actionCopy_Image->setText(QCoreApplication::translate("ScreenshotsPage", "Copy Image", nullptr));
#if QT_CONFIG(tooltip)
        actionCopy_Image->setToolTip(QCoreApplication::translate("ScreenshotsPage", "Copy Image", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopy_File_s->setText(QCoreApplication::translate("ScreenshotsPage", "Copy File(s)", nullptr));
#if QT_CONFIG(tooltip)
        actionCopy_File_s->setToolTip(QCoreApplication::translate("ScreenshotsPage", "Copy File(s)", nullptr));
#endif // QT_CONFIG(tooltip)
        toolBar->setWindowTitle(QCoreApplication::translate("ScreenshotsPage", "Actions", nullptr));
        (void)ScreenshotsPage;
    } // retranslateUi

};

namespace Ui {
    class ScreenshotsPage: public Ui_ScreenshotsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSHOTSPAGE_H
