/********************************************************************************
** Form generated from reading UI file 'AtlPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATLPAGE_H
#define UI_ATLPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AtlPage
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_3;
    QTreeView *packView;
    QTextBrowser *packDescription;
    QLabel *label_2;
    QGridLayout *gridLayout_4;
    QComboBox *versionSelectionBox;
    QLabel *label;
    QComboBox *sortByBox;
    QLineEdit *searchEdit;

    void setupUi(QWidget *AtlPage)
    {
        if (AtlPage->objectName().isEmpty())
            AtlPage->setObjectName("AtlPage");
        AtlPage->resize(837, 685);
        gridLayout = new QGridLayout(AtlPage);
        gridLayout->setObjectName("gridLayout");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        packView = new QTreeView(AtlPage);
        packView->setObjectName("packView");
        packView->setAlternatingRowColors(true);
        packView->setIconSize(QSize(96, 48));

        gridLayout_3->addWidget(packView, 1, 0, 1, 1);

        packDescription = new QTextBrowser(AtlPage);
        packDescription->setObjectName("packDescription");
        packDescription->setOpenExternalLinks(true);
        packDescription->setOpenLinks(true);

        gridLayout_3->addWidget(packDescription, 1, 1, 1, 1);

        label_2 = new QLabel(AtlPage);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(true);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 2);


        gridLayout->addLayout(gridLayout_3, 1, 0, 1, 2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        versionSelectionBox = new QComboBox(AtlPage);
        versionSelectionBox->setObjectName("versionSelectionBox");

        gridLayout_4->addWidget(versionSelectionBox, 0, 2, 1, 1);

        label = new QLabel(AtlPage);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label, 0, 1, 1, 1);

        sortByBox = new QComboBox(AtlPage);
        sortByBox->setObjectName("sortByBox");

        gridLayout_4->addWidget(sortByBox, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_4, 2, 0, 1, 2);

        searchEdit = new QLineEdit(AtlPage);
        searchEdit->setObjectName("searchEdit");
        searchEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(searchEdit, 0, 0, 1, 1);

        QWidget::setTabOrder(searchEdit, packView);
        QWidget::setTabOrder(packView, packDescription);
        QWidget::setTabOrder(packDescription, sortByBox);
        QWidget::setTabOrder(sortByBox, versionSelectionBox);

        retranslateUi(AtlPage);

        QMetaObject::connectSlotsByName(AtlPage);
    } // setupUi

    void retranslateUi(QWidget *AtlPage)
    {
        label_2->setText(QCoreApplication::translate("AtlPage", "Warning: This is still a work in progress. If you run into issues with the imported modpack, it may be a bug.", nullptr));
        label->setText(QCoreApplication::translate("AtlPage", "Version selected:", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("AtlPage", "Search and filter...", nullptr));
        (void)AtlPage;
    } // retranslateUi

};

namespace Ui {
    class AtlPage: public Ui_AtlPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATLPAGE_H
