/********************************************************************************
** Form generated from reading UI file 'VanillaPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VANILLAPAGE_H
#define UI_VANILLAPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/widgets/VersionSelectWidget.h"

QT_BEGIN_NAMESPACE

class Ui_VanillaPage
{
public:
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QFrame *line;
    QHBoxLayout *minecraftLayout;
    VersionSelectWidget *versionList;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCheckBox *releaseFilter;
    QCheckBox *snapshotFilter;
    QCheckBox *oldSnapshotFilter;
    QCheckBox *betaFilter;
    QCheckBox *alphaFilter;
    QCheckBox *experimentsFilter;
    QSpacerItem *verticalSpacer;
    QPushButton *refreshBtn;
    QHBoxLayout *loaderLayout;
    VersionSelectWidget *loaderVersionList;
    QVBoxLayout *verticalLayout_2;
    QLabel *loaderLabel;
    QRadioButton *noneFilter;
    QRadioButton *forgeFilter;
    QRadioButton *fabricFilter;
    QRadioButton *quiltFilter;
    QRadioButton *liteLoaderFilter;
    QSpacerItem *verticalSpacer_2;
    QPushButton *loaderRefreshBtn;
    QButtonGroup *loaderBtnGroup;

    void setupUi(QWidget *VanillaPage)
    {
        if (VanillaPage->objectName().isEmpty())
            VanillaPage->setObjectName("VanillaPage");
        VanillaPage->resize(815, 607);
        verticalLayout_5 = new QVBoxLayout(VanillaPage);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(VanillaPage);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName("gridLayout_2");
        line = new QFrame(tab);
        line->setObjectName("line");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 2, 0, 1, 1);

        minecraftLayout = new QHBoxLayout();
        minecraftLayout->setObjectName("minecraftLayout");
        versionList = new VersionSelectWidget(tab);
        versionList->setObjectName("versionList");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(versionList->sizePolicy().hasHeightForWidth());
        versionList->setSizePolicy(sizePolicy1);

        minecraftLayout->addWidget(versionList);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        releaseFilter = new QCheckBox(tab);
        releaseFilter->setObjectName("releaseFilter");
        releaseFilter->setCheckable(true);
        releaseFilter->setChecked(true);

        verticalLayout->addWidget(releaseFilter);

        snapshotFilter = new QCheckBox(tab);
        snapshotFilter->setObjectName("snapshotFilter");
        snapshotFilter->setCheckable(true);

        verticalLayout->addWidget(snapshotFilter);

        oldSnapshotFilter = new QCheckBox(tab);
        oldSnapshotFilter->setObjectName("oldSnapshotFilter");
        oldSnapshotFilter->setCheckable(true);

        verticalLayout->addWidget(oldSnapshotFilter);

        betaFilter = new QCheckBox(tab);
        betaFilter->setObjectName("betaFilter");
        betaFilter->setCheckable(true);

        verticalLayout->addWidget(betaFilter);

        alphaFilter = new QCheckBox(tab);
        alphaFilter->setObjectName("alphaFilter");
        alphaFilter->setCheckable(true);

        verticalLayout->addWidget(alphaFilter);

        experimentsFilter = new QCheckBox(tab);
        experimentsFilter->setObjectName("experimentsFilter");
        experimentsFilter->setCheckable(true);

        verticalLayout->addWidget(experimentsFilter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        refreshBtn = new QPushButton(tab);
        refreshBtn->setObjectName("refreshBtn");

        verticalLayout->addWidget(refreshBtn);


        minecraftLayout->addLayout(verticalLayout);


        gridLayout_2->addLayout(minecraftLayout, 0, 0, 1, 1);

        loaderLayout = new QHBoxLayout();
        loaderLayout->setObjectName("loaderLayout");
        loaderVersionList = new VersionSelectWidget(tab);
        loaderVersionList->setObjectName("loaderVersionList");
        sizePolicy1.setHeightForWidth(loaderVersionList->sizePolicy().hasHeightForWidth());
        loaderVersionList->setSizePolicy(sizePolicy1);

        loaderLayout->addWidget(loaderVersionList);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        loaderLabel = new QLabel(tab);
        loaderLabel->setObjectName("loaderLabel");
        loaderLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(loaderLabel);

        noneFilter = new QRadioButton(tab);
        loaderBtnGroup = new QButtonGroup(VanillaPage);
        loaderBtnGroup->setObjectName("loaderBtnGroup");
        loaderBtnGroup->addButton(noneFilter);
        noneFilter->setObjectName("noneFilter");
        noneFilter->setChecked(true);

        verticalLayout_2->addWidget(noneFilter);

        forgeFilter = new QRadioButton(tab);
        loaderBtnGroup->addButton(forgeFilter);
        forgeFilter->setObjectName("forgeFilter");

        verticalLayout_2->addWidget(forgeFilter);

        fabricFilter = new QRadioButton(tab);
        loaderBtnGroup->addButton(fabricFilter);
        fabricFilter->setObjectName("fabricFilter");

        verticalLayout_2->addWidget(fabricFilter);

        quiltFilter = new QRadioButton(tab);
        loaderBtnGroup->addButton(quiltFilter);
        quiltFilter->setObjectName("quiltFilter");

        verticalLayout_2->addWidget(quiltFilter);

        liteLoaderFilter = new QRadioButton(tab);
        loaderBtnGroup->addButton(liteLoaderFilter);
        liteLoaderFilter->setObjectName("liteLoaderFilter");

        verticalLayout_2->addWidget(liteLoaderFilter);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        loaderRefreshBtn = new QPushButton(tab);
        loaderRefreshBtn->setObjectName("loaderRefreshBtn");

        verticalLayout_2->addWidget(loaderRefreshBtn);


        loaderLayout->addLayout(verticalLayout_2);


        gridLayout_2->addLayout(loaderLayout, 4, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QString::fromUtf8(""));

        verticalLayout_5->addWidget(tabWidget);

        QWidget::setTabOrder(tabWidget, releaseFilter);
        QWidget::setTabOrder(releaseFilter, snapshotFilter);
        QWidget::setTabOrder(snapshotFilter, oldSnapshotFilter);
        QWidget::setTabOrder(oldSnapshotFilter, betaFilter);
        QWidget::setTabOrder(betaFilter, alphaFilter);
        QWidget::setTabOrder(alphaFilter, experimentsFilter);
        QWidget::setTabOrder(experimentsFilter, refreshBtn);

        retranslateUi(VanillaPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(VanillaPage);
    } // setupUi

    void retranslateUi(QWidget *VanillaPage)
    {
        label->setText(QCoreApplication::translate("VanillaPage", "Filter", nullptr));
        releaseFilter->setText(QCoreApplication::translate("VanillaPage", "Releases", nullptr));
        snapshotFilter->setText(QCoreApplication::translate("VanillaPage", "Snapshots", nullptr));
        oldSnapshotFilter->setText(QCoreApplication::translate("VanillaPage", "Old Snapshots", nullptr));
        betaFilter->setText(QCoreApplication::translate("VanillaPage", "Betas", nullptr));
        alphaFilter->setText(QCoreApplication::translate("VanillaPage", "Alphas", nullptr));
        experimentsFilter->setText(QCoreApplication::translate("VanillaPage", "Experiments", nullptr));
        refreshBtn->setText(QCoreApplication::translate("VanillaPage", "Refresh", nullptr));
        loaderLabel->setText(QCoreApplication::translate("VanillaPage", "Mod Loader", nullptr));
        noneFilter->setText(QCoreApplication::translate("VanillaPage", "None", nullptr));
        forgeFilter->setText(QCoreApplication::translate("VanillaPage", "Forge", nullptr));
        fabricFilter->setText(QCoreApplication::translate("VanillaPage", "Fabric", nullptr));
        quiltFilter->setText(QCoreApplication::translate("VanillaPage", "Quilt", nullptr));
        liteLoaderFilter->setText(QCoreApplication::translate("VanillaPage", "LiteLoader", nullptr));
        loaderRefreshBtn->setText(QCoreApplication::translate("VanillaPage", "Refresh", nullptr));
        (void)VanillaPage;
    } // retranslateUi

};

namespace Ui {
    class VanillaPage: public Ui_VanillaPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VANILLAPAGE_H
