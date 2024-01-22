/********************************************************************************
** Form generated from reading UI file 'GameOptionsPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOPTIONSPAGE_H
#define UI_GAMEOPTIONSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameOptionsPage
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QTreeView *optionsView;

    void setupUi(QWidget *GameOptionsPage)
    {
        if (GameOptionsPage->objectName().isEmpty())
            GameOptionsPage->setObjectName("GameOptionsPage");
        GameOptionsPage->resize(706, 575);
        gridLayout = new QGridLayout(GameOptionsPage);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(GameOptionsPage);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tab->sizePolicy().hasHeightForWidth());
        tab->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName("gridLayout_2");
        optionsView = new QTreeView(tab);
        optionsView->setObjectName("optionsView");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(optionsView->sizePolicy().hasHeightForWidth());
        optionsView->setSizePolicy(sizePolicy1);
        optionsView->setAcceptDrops(true);
        optionsView->setAlternatingRowColors(true);
        optionsView->setSelectionMode(QAbstractItemView::SingleSelection);
        optionsView->setSelectionBehavior(QAbstractItemView::SelectRows);
        optionsView->setIconSize(QSize(64, 64));
        optionsView->setRootIsDecorated(false);
        optionsView->header()->setStretchLastSection(false);

        gridLayout_2->addWidget(optionsView, 0, 0, 1, 2);

        tabWidget->addTab(tab, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QString::fromUtf8("Tab 1"));

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        QWidget::setTabOrder(tabWidget, optionsView);

        retranslateUi(GameOptionsPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GameOptionsPage);
    } // setupUi

    void retranslateUi(QWidget *GameOptionsPage)
    {
        (void)GameOptionsPage;
    } // retranslateUi

};

namespace Ui {
    class GameOptionsPage: public Ui_GameOptionsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOPTIONSPAGE_H
