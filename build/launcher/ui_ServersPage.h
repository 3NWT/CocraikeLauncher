/********************************************************************************
** Form generated from reading UI file 'ServersPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERSPAGE_H
#define UI_SERVERSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/widgets/WideBar.h"

QT_BEGIN_NAMESPACE

class Ui_ServersPage
{
public:
    QAction *actionAdd;
    QAction *actionRemove;
    QAction *actionMove_Up;
    QAction *actionMove_Down;
    QAction *actionJoin;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTreeView *serversView;
    QGridLayout *gridLayout_2;
    QLabel *nameLabel;
    QLineEdit *nameLine;
    QLabel *addressLabel;
    QLineEdit *addressLine;
    QLabel *resourcesLabel;
    QComboBox *resourceComboBox;
    WideBar *toolBar;

    void setupUi(QMainWindow *ServersPage)
    {
        if (ServersPage->objectName().isEmpty())
            ServersPage->setObjectName("ServersPage");
        ServersPage->resize(1318, 879);
        actionAdd = new QAction(ServersPage);
        actionAdd->setObjectName("actionAdd");
        actionRemove = new QAction(ServersPage);
        actionRemove->setObjectName("actionRemove");
        actionMove_Up = new QAction(ServersPage);
        actionMove_Up->setObjectName("actionMove_Up");
        actionMove_Down = new QAction(ServersPage);
        actionMove_Down->setObjectName("actionMove_Down");
        actionJoin = new QAction(ServersPage);
        actionJoin->setObjectName("actionJoin");
        centralwidget = new QWidget(ServersPage);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        serversView = new QTreeView(centralwidget);
        serversView->setObjectName("serversView");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(serversView->sizePolicy().hasHeightForWidth());
        serversView->setSizePolicy(sizePolicy);
        serversView->setAcceptDrops(true);
        serversView->setAlternatingRowColors(true);
        serversView->setSelectionMode(QAbstractItemView::SingleSelection);
        serversView->setSelectionBehavior(QAbstractItemView::SelectRows);
        serversView->setIconSize(QSize(64, 64));
        serversView->setRootIsDecorated(false);
        serversView->header()->setStretchLastSection(false);

        verticalLayout->addWidget(serversView);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(6, -1, 6, -1);
        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName("nameLabel");

        gridLayout_2->addWidget(nameLabel, 0, 0, 1, 1);

        nameLine = new QLineEdit(centralwidget);
        nameLine->setObjectName("nameLine");

        gridLayout_2->addWidget(nameLine, 0, 1, 1, 1);

        addressLabel = new QLabel(centralwidget);
        addressLabel->setObjectName("addressLabel");

        gridLayout_2->addWidget(addressLabel, 1, 0, 1, 1);

        addressLine = new QLineEdit(centralwidget);
        addressLine->setObjectName("addressLine");

        gridLayout_2->addWidget(addressLine, 1, 1, 1, 1);

        resourcesLabel = new QLabel(centralwidget);
        resourcesLabel->setObjectName("resourcesLabel");

        gridLayout_2->addWidget(resourcesLabel, 2, 0, 1, 1);

        resourceComboBox = new QComboBox(centralwidget);
        resourceComboBox->addItem(QString());
        resourceComboBox->addItem(QString());
        resourceComboBox->addItem(QString());
        resourceComboBox->setObjectName("resourceComboBox");

        gridLayout_2->addWidget(resourceComboBox, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        ServersPage->setCentralWidget(centralwidget);
        toolBar = new WideBar(ServersPage);
        toolBar->setObjectName("toolBar");
        toolBar->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolBar->setFloatable(false);
        ServersPage->addToolBar(Qt::RightToolBarArea, toolBar);
#if QT_CONFIG(shortcut)
        nameLabel->setBuddy(nameLine);
        addressLabel->setBuddy(addressLine);
        resourcesLabel->setBuddy(resourceComboBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(serversView, nameLine);
        QWidget::setTabOrder(nameLine, addressLine);
        QWidget::setTabOrder(addressLine, resourceComboBox);

        toolBar->addAction(actionAdd);
        toolBar->addAction(actionRemove);
        toolBar->addAction(actionMove_Up);
        toolBar->addAction(actionMove_Down);
        toolBar->addAction(actionJoin);

        retranslateUi(ServersPage);

        QMetaObject::connectSlotsByName(ServersPage);
    } // setupUi

    void retranslateUi(QMainWindow *ServersPage)
    {
        actionAdd->setText(QCoreApplication::translate("ServersPage", "Add", nullptr));
        actionRemove->setText(QCoreApplication::translate("ServersPage", "Remove", nullptr));
        actionMove_Up->setText(QCoreApplication::translate("ServersPage", "Move Up", nullptr));
        actionMove_Down->setText(QCoreApplication::translate("ServersPage", "Move Down", nullptr));
        actionJoin->setText(QCoreApplication::translate("ServersPage", "Join", nullptr));
        nameLabel->setText(QCoreApplication::translate("ServersPage", "&Name", nullptr));
        addressLabel->setText(QCoreApplication::translate("ServersPage", "Address", nullptr));
        resourcesLabel->setText(QCoreApplication::translate("ServersPage", "Reso&urces", nullptr));
        resourceComboBox->setItemText(0, QCoreApplication::translate("ServersPage", "Ask to download", nullptr));
        resourceComboBox->setItemText(1, QCoreApplication::translate("ServersPage", "Always download", nullptr));
        resourceComboBox->setItemText(2, QCoreApplication::translate("ServersPage", "Never download", nullptr));

        toolBar->setWindowTitle(QCoreApplication::translate("ServersPage", "Actions", nullptr));
        (void)ServersPage;
    } // retranslateUi

};

namespace Ui {
    class ServersPage: public Ui_ServersPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERSPAGE_H
