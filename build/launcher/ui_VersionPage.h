/********************************************************************************
** Form generated from reading UI file 'VersionPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERSIONPAGE_H
#define UI_VERSIONPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/widgets/InfoFrame.h"
#include "ui/widgets/ModListView.h"
#include "ui/widgets/WideBar.h"

QT_BEGIN_NAMESPACE

class Ui_VersionPage
{
public:
    QAction *actionChange_version;
    QAction *actionMove_up;
    QAction *actionMove_down;
    QAction *actionRemove;
    QAction *actionCustomize;
    QAction *actionEdit;
    QAction *actionRevert;
    QAction *actionInstall_Forge;
    QAction *actionInstall_Fabric;
    QAction *actionInstall_Quilt;
    QAction *actionInstall_LiteLoader;
    QAction *actionInstall_mods;
    QAction *actionAdd_to_Minecraft_jar;
    QAction *actionReplace_Minecraft_jar;
    QAction *actionAdd_Agents;
    QAction *actionAdd_Empty;
    QAction *actionReload;
    QAction *actionDownload_All;
    QAction *actionMinecraftFolder;
    QAction *actionLibrariesFolder;
    QAction *actionImport_Components;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    ModListView *packageView;
    QGridLayout *gridLayout_2;
    QLineEdit *filterEdit;
    QLabel *filterLabel;
    InfoFrame *frame;
    WideBar *toolBar;

    void setupUi(QMainWindow *VersionPage)
    {
        if (VersionPage->objectName().isEmpty())
            VersionPage->setObjectName("VersionPage");
        VersionPage->resize(961, 1091);
        actionChange_version = new QAction(VersionPage);
        actionChange_version->setObjectName("actionChange_version");
        actionMove_up = new QAction(VersionPage);
        actionMove_up->setObjectName("actionMove_up");
        actionMove_down = new QAction(VersionPage);
        actionMove_down->setObjectName("actionMove_down");
        actionRemove = new QAction(VersionPage);
        actionRemove->setObjectName("actionRemove");
        actionCustomize = new QAction(VersionPage);
        actionCustomize->setObjectName("actionCustomize");
        actionEdit = new QAction(VersionPage);
        actionEdit->setObjectName("actionEdit");
        actionRevert = new QAction(VersionPage);
        actionRevert->setObjectName("actionRevert");
        actionInstall_Forge = new QAction(VersionPage);
        actionInstall_Forge->setObjectName("actionInstall_Forge");
        actionInstall_Fabric = new QAction(VersionPage);
        actionInstall_Fabric->setObjectName("actionInstall_Fabric");
        actionInstall_Quilt = new QAction(VersionPage);
        actionInstall_Quilt->setObjectName("actionInstall_Quilt");
        actionInstall_LiteLoader = new QAction(VersionPage);
        actionInstall_LiteLoader->setObjectName("actionInstall_LiteLoader");
        actionInstall_mods = new QAction(VersionPage);
        actionInstall_mods->setObjectName("actionInstall_mods");
        actionAdd_to_Minecraft_jar = new QAction(VersionPage);
        actionAdd_to_Minecraft_jar->setObjectName("actionAdd_to_Minecraft_jar");
        actionReplace_Minecraft_jar = new QAction(VersionPage);
        actionReplace_Minecraft_jar->setObjectName("actionReplace_Minecraft_jar");
        actionAdd_Agents = new QAction(VersionPage);
        actionAdd_Agents->setObjectName("actionAdd_Agents");
        actionAdd_Empty = new QAction(VersionPage);
        actionAdd_Empty->setObjectName("actionAdd_Empty");
        actionReload = new QAction(VersionPage);
        actionReload->setObjectName("actionReload");
        actionDownload_All = new QAction(VersionPage);
        actionDownload_All->setObjectName("actionDownload_All");
        actionMinecraftFolder = new QAction(VersionPage);
        actionMinecraftFolder->setObjectName("actionMinecraftFolder");
        actionLibrariesFolder = new QAction(VersionPage);
        actionLibrariesFolder->setObjectName("actionLibrariesFolder");
        actionImport_Components = new QAction(VersionPage);
        actionImport_Components->setObjectName("actionImport_Components");
        centralwidget = new QWidget(VersionPage);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        packageView = new ModListView(centralwidget);
        packageView->setObjectName("packageView");
        packageView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        packageView->setSortingEnabled(false);
        packageView->setHeaderHidden(false);
        packageView->header()->setVisible(true);

        verticalLayout->addWidget(packageView);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        filterEdit = new QLineEdit(centralwidget);
        filterEdit->setObjectName("filterEdit");

        gridLayout_2->addWidget(filterEdit, 0, 1, 1, 1);

        filterLabel = new QLabel(centralwidget);
        filterLabel->setObjectName("filterLabel");

        gridLayout_2->addWidget(filterLabel, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        frame = new InfoFrame(centralwidget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(frame);


        horizontalLayout->addLayout(verticalLayout);

        VersionPage->setCentralWidget(centralwidget);
        toolBar = new WideBar(VersionPage);
        toolBar->setObjectName("toolBar");
        toolBar->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolBar->setFloatable(false);
        VersionPage->addToolBar(Qt::RightToolBarArea, toolBar);

        toolBar->addAction(actionChange_version);
        toolBar->addAction(actionMove_up);
        toolBar->addAction(actionMove_down);
        toolBar->addAction(actionRemove);
        toolBar->addSeparator();
        toolBar->addAction(actionCustomize);
        toolBar->addAction(actionEdit);
        toolBar->addAction(actionRevert);
        toolBar->addSeparator();
        toolBar->addAction(actionInstall_Forge);
        toolBar->addAction(actionInstall_Fabric);
        toolBar->addAction(actionInstall_Quilt);
        toolBar->addAction(actionInstall_LiteLoader);
        toolBar->addAction(actionInstall_mods);
        toolBar->addSeparator();
        toolBar->addAction(actionAdd_to_Minecraft_jar);
        toolBar->addAction(actionReplace_Minecraft_jar);
        toolBar->addAction(actionAdd_Agents);
        toolBar->addAction(actionAdd_Empty);
        toolBar->addAction(actionImport_Components);
        toolBar->addSeparator();
        toolBar->addAction(actionMinecraftFolder);
        toolBar->addAction(actionLibrariesFolder);
        toolBar->addSeparator();
        toolBar->addAction(actionReload);
        toolBar->addAction(actionDownload_All);

        retranslateUi(VersionPage);

        QMetaObject::connectSlotsByName(VersionPage);
    } // setupUi

    void retranslateUi(QMainWindow *VersionPage)
    {
        actionChange_version->setText(QCoreApplication::translate("VersionPage", "Change version", nullptr));
#if QT_CONFIG(tooltip)
        actionChange_version->setToolTip(QCoreApplication::translate("VersionPage", "Change version of the selected package.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMove_up->setText(QCoreApplication::translate("VersionPage", "Move up", nullptr));
#if QT_CONFIG(tooltip)
        actionMove_up->setToolTip(QCoreApplication::translate("VersionPage", "Make the selected package apply sooner.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMove_down->setText(QCoreApplication::translate("VersionPage", "Move down", nullptr));
#if QT_CONFIG(tooltip)
        actionMove_down->setToolTip(QCoreApplication::translate("VersionPage", "Make the selected package apply later.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRemove->setText(QCoreApplication::translate("VersionPage", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        actionRemove->setToolTip(QCoreApplication::translate("VersionPage", "Remove selected package from the instance.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCustomize->setText(QCoreApplication::translate("VersionPage", "Customize", nullptr));
#if QT_CONFIG(tooltip)
        actionCustomize->setToolTip(QCoreApplication::translate("VersionPage", "Customize selected package.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEdit->setText(QCoreApplication::translate("VersionPage", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        actionEdit->setToolTip(QCoreApplication::translate("VersionPage", "Edit selected package.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRevert->setText(QCoreApplication::translate("VersionPage", "Revert", nullptr));
#if QT_CONFIG(tooltip)
        actionRevert->setToolTip(QCoreApplication::translate("VersionPage", "Revert the selected package to default.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInstall_Forge->setText(QCoreApplication::translate("VersionPage", "Install Forge", nullptr));
#if QT_CONFIG(tooltip)
        actionInstall_Forge->setToolTip(QCoreApplication::translate("VersionPage", "Install the Minecraft Forge package.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInstall_Fabric->setText(QCoreApplication::translate("VersionPage", "Install Fabric", nullptr));
#if QT_CONFIG(tooltip)
        actionInstall_Fabric->setToolTip(QCoreApplication::translate("VersionPage", "Install the Fabric Loader package.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInstall_Quilt->setText(QCoreApplication::translate("VersionPage", "Install Quilt", nullptr));
#if QT_CONFIG(tooltip)
        actionInstall_Quilt->setToolTip(QCoreApplication::translate("VersionPage", "Install the Quilt Loader package.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInstall_LiteLoader->setText(QCoreApplication::translate("VersionPage", "Install LiteLoader", nullptr));
#if QT_CONFIG(tooltip)
        actionInstall_LiteLoader->setToolTip(QCoreApplication::translate("VersionPage", "Install the LiteLoader package.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInstall_mods->setText(QCoreApplication::translate("VersionPage", "Install mods", nullptr));
#if QT_CONFIG(tooltip)
        actionInstall_mods->setToolTip(QCoreApplication::translate("VersionPage", "Install normal mods.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAdd_to_Minecraft_jar->setText(QCoreApplication::translate("VersionPage", "Add to Minecraft.jar", nullptr));
#if QT_CONFIG(tooltip)
        actionAdd_to_Minecraft_jar->setToolTip(QCoreApplication::translate("VersionPage", "Add a mod into the Minecraft jar file.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionReplace_Minecraft_jar->setText(QCoreApplication::translate("VersionPage", "Replace Minecraft.jar", nullptr));
        actionAdd_Agents->setText(QCoreApplication::translate("VersionPage", "Add Agents", nullptr));
#if QT_CONFIG(tooltip)
        actionAdd_Agents->setToolTip(QCoreApplication::translate("VersionPage", "Add Java agents.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAdd_Empty->setText(QCoreApplication::translate("VersionPage", "Add Empty", nullptr));
#if QT_CONFIG(tooltip)
        actionAdd_Empty->setToolTip(QCoreApplication::translate("VersionPage", "Add an empty custom package.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionReload->setText(QCoreApplication::translate("VersionPage", "Reload", nullptr));
#if QT_CONFIG(tooltip)
        actionReload->setToolTip(QCoreApplication::translate("VersionPage", "Reload all packages.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDownload_All->setText(QCoreApplication::translate("VersionPage", "Download All", nullptr));
#if QT_CONFIG(tooltip)
        actionDownload_All->setToolTip(QCoreApplication::translate("VersionPage", "Download the files needed to launch the instance now.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMinecraftFolder->setText(QCoreApplication::translate("VersionPage", "Open .minecraft", nullptr));
#if QT_CONFIG(tooltip)
        actionMinecraftFolder->setToolTip(QCoreApplication::translate("VersionPage", "Open the instance's .minecraft folder.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLibrariesFolder->setText(QCoreApplication::translate("VersionPage", "Open libraries", nullptr));
#if QT_CONFIG(tooltip)
        actionLibrariesFolder->setToolTip(QCoreApplication::translate("VersionPage", "Open the instance's local libraries folder.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionImport_Components->setText(QCoreApplication::translate("VersionPage", "Import Components", nullptr));
#if QT_CONFIG(tooltip)
        actionImport_Components->setToolTip(QCoreApplication::translate("VersionPage", "Import existing component JSON files.", nullptr));
#endif // QT_CONFIG(tooltip)
        filterLabel->setText(QCoreApplication::translate("VersionPage", "Filter:", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("VersionPage", "Actions", nullptr));
        (void)VersionPage;
    } // retranslateUi

};

namespace Ui {
    class VersionPage: public Ui_VersionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERSIONPAGE_H
