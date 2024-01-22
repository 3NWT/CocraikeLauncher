/********************************************************************************
** Form generated from reading UI file 'ModrinthPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODRINTHPAGE_H
#define UI_MODRINTHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/widgets/ProjectDescriptionPage.h"

QT_BEGIN_NAMESPACE

class Ui_ModrinthPage
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label_2;
    QHBoxLayout *hboxLayout;
    QLineEdit *searchEdit;
    QPushButton *searchButton;
    QHBoxLayout *hboxLayout1;
    QListView *packView;
    ProjectDescriptionPage *packDescription;
    QHBoxLayout *hboxLayout2;
    QComboBox *sortByBox;
    QLabel *label;
    QComboBox *versionSelectionBox;

    void setupUi(QWidget *ModrinthPage)
    {
        if (ModrinthPage->objectName().isEmpty())
            ModrinthPage->setObjectName("ModrinthPage");
        ModrinthPage->resize(800, 600);
        vboxLayout = new QVBoxLayout(ModrinthPage);
        vboxLayout->setObjectName("vboxLayout");
        label_2 = new QLabel(ModrinthPage);
        label_2->setObjectName("label_2");
        QFont font;
        font.setItalic(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        vboxLayout->addWidget(label_2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        searchEdit = new QLineEdit(ModrinthPage);
        searchEdit->setObjectName("searchEdit");

        hboxLayout->addWidget(searchEdit);

        searchButton = new QPushButton(ModrinthPage);
        searchButton->setObjectName("searchButton");

        hboxLayout->addWidget(searchButton);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName("hboxLayout1");
        packView = new QListView(ModrinthPage);
        packView->setObjectName("packView");
        packView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        packView->setAlternatingRowColors(true);
        packView->setIconSize(QSize(48, 48));

        hboxLayout1->addWidget(packView);

        packDescription = new ProjectDescriptionPage(ModrinthPage);
        packDescription->setObjectName("packDescription");
        packDescription->setOpenExternalLinks(true);
        packDescription->setOpenLinks(true);

        hboxLayout1->addWidget(packDescription);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName("hboxLayout2");
        sortByBox = new QComboBox(ModrinthPage);
        sortByBox->setObjectName("sortByBox");

        hboxLayout2->addWidget(sortByBox);

        label = new QLabel(ModrinthPage);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout2->addWidget(label);

        versionSelectionBox = new QComboBox(ModrinthPage);
        versionSelectionBox->setObjectName("versionSelectionBox");

        hboxLayout2->addWidget(versionSelectionBox);


        vboxLayout->addLayout(hboxLayout2);

        QWidget::setTabOrder(searchEdit, searchButton);
        QWidget::setTabOrder(searchButton, packView);
        QWidget::setTabOrder(packView, packDescription);
        QWidget::setTabOrder(packDescription, sortByBox);
        QWidget::setTabOrder(sortByBox, versionSelectionBox);

        retranslateUi(ModrinthPage);

        QMetaObject::connectSlotsByName(ModrinthPage);
    } // setupUi

    void retranslateUi(QWidget *ModrinthPage)
    {
        label_2->setText(QCoreApplication::translate("ModrinthPage", "Note: Modrinth modpacks are still in alpha phase. Some things may be rough on the edges, or not working at all! Use it with caution.", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("ModrinthPage", "Search and filter ...", nullptr));
        searchButton->setText(QCoreApplication::translate("ModrinthPage", "Search", nullptr));
        label->setText(QCoreApplication::translate("ModrinthPage", "Version selected:", nullptr));
        (void)ModrinthPage;
    } // retranslateUi

};

namespace Ui {
    class ModrinthPage: public Ui_ModrinthPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODRINTHPAGE_H
