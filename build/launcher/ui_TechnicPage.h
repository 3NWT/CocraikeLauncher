/********************************************************************************
** Form generated from reading UI file 'TechnicPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TECHNICPAGE_H
#define UI_TECHNICPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TechnicPage
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_3;
    QComboBox *versionSelectionBox;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QListView *packView;
    QTextBrowser *packDescription;
    QLineEdit *searchEdit;
    QPushButton *searchButton;

    void setupUi(QWidget *TechnicPage)
    {
        if (TechnicPage->objectName().isEmpty())
            TechnicPage->setObjectName("TechnicPage");
        TechnicPage->resize(546, 405);
        gridLayout = new QGridLayout(TechnicPage);
        gridLayout->setObjectName("gridLayout");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        versionSelectionBox = new QComboBox(TechnicPage);
        versionSelectionBox->setObjectName("versionSelectionBox");

        gridLayout_3->addWidget(versionSelectionBox, 0, 2, 1, 1);

        label = new QLabel(TechnicPage);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(1, 1, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 3, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        packView = new QListView(TechnicPage);
        packView->setObjectName("packView");
        packView->setAlternatingRowColors(true);
        packView->setIconSize(QSize(48, 48));

        gridLayout_2->addWidget(packView, 0, 0, 1, 1);

        packDescription = new QTextBrowser(TechnicPage);
        packDescription->setObjectName("packDescription");
        packDescription->setOpenExternalLinks(true);

        gridLayout_2->addWidget(packDescription, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 2);

        searchEdit = new QLineEdit(TechnicPage);
        searchEdit->setObjectName("searchEdit");

        gridLayout->addWidget(searchEdit, 1, 0, 1, 1);

        searchButton = new QPushButton(TechnicPage);
        searchButton->setObjectName("searchButton");

        gridLayout->addWidget(searchButton, 1, 1, 1, 1);


        retranslateUi(TechnicPage);

        QMetaObject::connectSlotsByName(TechnicPage);
    } // setupUi

    void retranslateUi(QWidget *TechnicPage)
    {
        label->setText(QCoreApplication::translate("TechnicPage", "Version selected:", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("TechnicPage", "Search and filter...", nullptr));
        searchButton->setText(QCoreApplication::translate("TechnicPage", "Search", nullptr));
        (void)TechnicPage;
    } // retranslateUi

};

namespace Ui {
    class TechnicPage: public Ui_TechnicPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TECHNICPAGE_H
