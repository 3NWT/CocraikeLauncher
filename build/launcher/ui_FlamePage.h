/********************************************************************************
** Form generated from reading UI file 'FlamePage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLAMEPAGE_H
#define UI_FLAMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "ui/widgets/ProjectDescriptionPage.h"

QT_BEGIN_NAMESPACE

class Ui_FlamePage
{
public:
    QGridLayout *gridLayout;
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

    void setupUi(QWidget *FlamePage)
    {
        if (FlamePage->objectName().isEmpty())
            FlamePage->setObjectName("FlamePage");
        FlamePage->resize(800, 600);
        gridLayout = new QGridLayout(FlamePage);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(FlamePage);
        label_2->setObjectName("label_2");
        QFont font;
        font.setItalic(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        searchEdit = new QLineEdit(FlamePage);
        searchEdit->setObjectName("searchEdit");

        hboxLayout->addWidget(searchEdit);

        searchButton = new QPushButton(FlamePage);
        searchButton->setObjectName("searchButton");

        hboxLayout->addWidget(searchButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName("hboxLayout1");
        packView = new QListView(FlamePage);
        packView->setObjectName("packView");
        packView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        packView->setAlternatingRowColors(true);
        packView->setIconSize(QSize(48, 48));

        hboxLayout1->addWidget(packView);

        packDescription = new ProjectDescriptionPage(FlamePage);
        packDescription->setObjectName("packDescription");
        packDescription->setOpenExternalLinks(true);
        packDescription->setOpenLinks(true);

        hboxLayout1->addWidget(packDescription);


        gridLayout->addLayout(hboxLayout1, 2, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName("hboxLayout2");
        sortByBox = new QComboBox(FlamePage);
        sortByBox->setObjectName("sortByBox");

        hboxLayout2->addWidget(sortByBox);

        label = new QLabel(FlamePage);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout2->addWidget(label);

        versionSelectionBox = new QComboBox(FlamePage);
        versionSelectionBox->setObjectName("versionSelectionBox");

        hboxLayout2->addWidget(versionSelectionBox);


        gridLayout->addLayout(hboxLayout2, 3, 0, 1, 1);

        QWidget::setTabOrder(packView, packDescription);
        QWidget::setTabOrder(packDescription, sortByBox);
        QWidget::setTabOrder(sortByBox, versionSelectionBox);

        retranslateUi(FlamePage);

        QMetaObject::connectSlotsByName(FlamePage);
    } // setupUi

    void retranslateUi(QWidget *FlamePage)
    {
        label_2->setText(QCoreApplication::translate("FlamePage", "Note: CurseForge allows creators to block access to third-party tools like Prism Launcher. As such, you may need to manually download some mods to be able to install a modpack.", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("FlamePage", "Search and filter...", nullptr));
        searchButton->setText(QCoreApplication::translate("FlamePage", "Search", nullptr));
        label->setText(QCoreApplication::translate("FlamePage", "Version selected:", nullptr));
        (void)FlamePage;
    } // retranslateUi

};

namespace Ui {
    class FlamePage: public Ui_FlamePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLAMEPAGE_H
