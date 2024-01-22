/********************************************************************************
** Form generated from reading UI file 'ModFilterWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODFILTERWIDGET_H
#define UI_MODFILTERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModFilterWidget
{
public:
    QWidget *VersionPage;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QRadioButton *allVersionsButton;
    QRadioButton *strictVersionButton;
    QRadioButton *majorVersionButton;

    void setupUi(QTabWidget *ModFilterWidget)
    {
        if (ModFilterWidget->objectName().isEmpty())
            ModFilterWidget->setObjectName("ModFilterWidget");
        ModFilterWidget->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ModFilterWidget->sizePolicy().hasHeightForWidth());
        ModFilterWidget->setSizePolicy(sizePolicy);
        VersionPage = new QWidget();
        VersionPage->setObjectName("VersionPage");
        gridLayout = new QGridLayout(VersionPage);
        gridLayout->setObjectName("gridLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        allVersionsButton = new QRadioButton(VersionPage);
        allVersionsButton->setObjectName("allVersionsButton");
        allVersionsButton->setText(QString::fromUtf8("allVersions"));

        formLayout->setWidget(2, QFormLayout::LabelRole, allVersionsButton);

        strictVersionButton = new QRadioButton(VersionPage);
        strictVersionButton->setObjectName("strictVersionButton");
        strictVersionButton->setText(QString::fromUtf8("strictVersion"));

        formLayout->setWidget(0, QFormLayout::LabelRole, strictVersionButton);

        majorVersionButton = new QRadioButton(VersionPage);
        majorVersionButton->setObjectName("majorVersionButton");
        majorVersionButton->setText(QString::fromUtf8("majorVersion"));

        formLayout->setWidget(1, QFormLayout::LabelRole, majorVersionButton);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        ModFilterWidget->addTab(VersionPage, QString());

        retranslateUi(ModFilterWidget);

        QMetaObject::connectSlotsByName(ModFilterWidget);
    } // setupUi

    void retranslateUi(QTabWidget *ModFilterWidget)
    {
        ModFilterWidget->setTabText(ModFilterWidget->indexOf(VersionPage), QCoreApplication::translate("ModFilterWidget", "Minecraft versions", nullptr));
        (void)ModFilterWidget;
    } // retranslateUi

};

namespace Ui {
    class ModFilterWidget: public Ui_ModFilterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODFILTERWIDGET_H
