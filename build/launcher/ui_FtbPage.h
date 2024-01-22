/********************************************************************************
** Form generated from reading UI file 'FtbPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FTBPAGE_H
#define UI_FTBPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>
#include "ui/widgets/ProjectDescriptionPage.h"

QT_BEGIN_NAMESPACE

class Ui_FtbPage
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_4;
    QComboBox *versionSelectionBox;
    QLabel *label;
    QComboBox *sortByBox;
    QLineEdit *searchEdit;
    QGridLayout *gridLayout_3;
    QTreeView *packView;
    ProjectDescriptionPage *packDescription;

    void setupUi(QWidget *FtbPage)
    {
        if (FtbPage->objectName().isEmpty())
            FtbPage->setObjectName("FtbPage");
        FtbPage->resize(875, 745);
        gridLayout = new QGridLayout(FtbPage);
        gridLayout->setObjectName("gridLayout");
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        versionSelectionBox = new QComboBox(FtbPage);
        versionSelectionBox->setObjectName("versionSelectionBox");

        gridLayout_4->addWidget(versionSelectionBox, 0, 2, 1, 1);

        label = new QLabel(FtbPage);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label, 0, 1, 1, 1);

        sortByBox = new QComboBox(FtbPage);
        sortByBox->setObjectName("sortByBox");

        gridLayout_4->addWidget(sortByBox, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_4, 2, 0, 1, 2);

        searchEdit = new QLineEdit(FtbPage);
        searchEdit->setObjectName("searchEdit");
        searchEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(searchEdit, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        packView = new QTreeView(FtbPage);
        packView->setObjectName("packView");
        packView->setAlternatingRowColors(true);
        packView->setIconSize(QSize(48, 48));

        gridLayout_3->addWidget(packView, 0, 0, 1, 1);

        packDescription = new ProjectDescriptionPage(FtbPage);
        packDescription->setObjectName("packDescription");
        packDescription->setOpenExternalLinks(true);
        packDescription->setOpenLinks(true);

        gridLayout_3->addWidget(packDescription, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_3, 1, 0, 1, 2);

        QWidget::setTabOrder(searchEdit, versionSelectionBox);

        retranslateUi(FtbPage);

        QMetaObject::connectSlotsByName(FtbPage);
    } // setupUi

    void retranslateUi(QWidget *FtbPage)
    {
        label->setText(QCoreApplication::translate("FtbPage", "Version selected:", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("FtbPage", "Search and filter...", nullptr));
        (void)FtbPage;
    } // retranslateUi

};

namespace Ui {
    class FtbPage: public Ui_FtbPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FTBPAGE_H
