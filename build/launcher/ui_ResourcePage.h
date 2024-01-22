/********************************************************************************
** Form generated from reading UI file 'ResourcePage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOURCEPAGE_H
#define UI_RESOURCEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "ui/widgets/ProjectDescriptionPage.h"

QT_BEGIN_NAMESPACE

class Ui_ResourcePage
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_3;
    ProjectDescriptionPage *packDescription;
    QListView *packView;
    QPushButton *searchButton;
    QLineEdit *searchEdit;
    QGridLayout *gridLayout_4;
    QComboBox *versionSelectionBox;
    QLabel *label;
    QComboBox *sortByBox;
    QPushButton *resourceSelectionButton;
    QPushButton *resourceFilterButton;
    QFrame *line;

    void setupUi(QWidget *ResourcePage)
    {
        if (ResourcePage->objectName().isEmpty())
            ResourcePage->setObjectName("ResourcePage");
        ResourcePage->resize(837, 685);
        gridLayout = new QGridLayout(ResourcePage);
        gridLayout->setObjectName("gridLayout");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        packDescription = new ProjectDescriptionPage(ResourcePage);
        packDescription->setObjectName("packDescription");
        packDescription->setOpenExternalLinks(false);
        packDescription->setOpenLinks(false);

        gridLayout_3->addWidget(packDescription, 1, 2, 1, 1);

        packView = new QListView(ResourcePage);
        packView->setObjectName("packView");
        packView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        packView->setAlternatingRowColors(true);
        packView->setIconSize(QSize(48, 48));

        gridLayout_3->addWidget(packView, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 1, 0, 1, 4);

        searchButton = new QPushButton(ResourcePage);
        searchButton->setObjectName("searchButton");

        gridLayout->addWidget(searchButton, 0, 3, 1, 1);

        searchEdit = new QLineEdit(ResourcePage);
        searchEdit->setObjectName("searchEdit");

        gridLayout->addWidget(searchEdit, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        versionSelectionBox = new QComboBox(ResourcePage);
        versionSelectionBox->setObjectName("versionSelectionBox");

        gridLayout_4->addWidget(versionSelectionBox, 0, 2, 1, 1);

        label = new QLabel(ResourcePage);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label, 0, 1, 1, 1);

        sortByBox = new QComboBox(ResourcePage);
        sortByBox->setObjectName("sortByBox");

        gridLayout_4->addWidget(sortByBox, 0, 0, 1, 1);

        resourceSelectionButton = new QPushButton(ResourcePage);
        resourceSelectionButton->setObjectName("resourceSelectionButton");

        gridLayout_4->addWidget(resourceSelectionButton, 1, 2, 1, 1);


        gridLayout->addLayout(gridLayout_4, 2, 0, 1, 4);

        resourceFilterButton = new QPushButton(ResourcePage);
        resourceFilterButton->setObjectName("resourceFilterButton");

        gridLayout->addWidget(resourceFilterButton, 0, 1, 1, 1);

        line = new QFrame(ResourcePage);
        line->setObjectName("line");
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 2, 1, 1);

        QWidget::setTabOrder(searchEdit, searchButton);
        QWidget::setTabOrder(searchButton, packView);
        QWidget::setTabOrder(packView, packDescription);
        QWidget::setTabOrder(packDescription, sortByBox);
        QWidget::setTabOrder(sortByBox, versionSelectionBox);

        retranslateUi(ResourcePage);

        QMetaObject::connectSlotsByName(ResourcePage);
    } // setupUi

    void retranslateUi(QWidget *ResourcePage)
    {
        searchButton->setText(QCoreApplication::translate("ResourcePage", "Search", nullptr));
        label->setText(QCoreApplication::translate("ResourcePage", "Version selected:", nullptr));
        resourceFilterButton->setText(QCoreApplication::translate("ResourcePage", "Filter options", nullptr));
        (void)ResourcePage;
    } // retranslateUi

};

namespace Ui {
    class ResourcePage: public Ui_ResourcePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURCEPAGE_H
