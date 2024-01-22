/********************************************************************************
** Form generated from reading UI file 'InstanceCardWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTANCECARDWIDGET_H
#define UI_INSTANCECARDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InstanceCardWidget
{
public:
    QGridLayout *gridLayout;
    QToolButton *iconButton;
    QLabel *nameLabel;
    QLineEdit *instNameTextBox;
    QLabel *groupLabel;
    QComboBox *groupBox;

    void setupUi(QWidget *InstanceCardWidget)
    {
        if (InstanceCardWidget->objectName().isEmpty())
            InstanceCardWidget->setObjectName("InstanceCardWidget");
        InstanceCardWidget->resize(473, 118);
        gridLayout = new QGridLayout(InstanceCardWidget);
        gridLayout->setObjectName("gridLayout");
        iconButton = new QToolButton(InstanceCardWidget);
        iconButton->setObjectName("iconButton");
        iconButton->setIconSize(QSize(80, 80));

        gridLayout->addWidget(iconButton, 0, 0, 2, 1);

        nameLabel = new QLabel(InstanceCardWidget);
        nameLabel->setObjectName("nameLabel");

        gridLayout->addWidget(nameLabel, 0, 1, 1, 1);

        instNameTextBox = new QLineEdit(InstanceCardWidget);
        instNameTextBox->setObjectName("instNameTextBox");

        gridLayout->addWidget(instNameTextBox, 0, 2, 1, 1);

        groupLabel = new QLabel(InstanceCardWidget);
        groupLabel->setObjectName("groupLabel");

        gridLayout->addWidget(groupLabel, 1, 1, 1, 1);

        groupBox = new QComboBox(InstanceCardWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setEditable(true);

        gridLayout->addWidget(groupBox, 1, 2, 1, 1);

#if QT_CONFIG(shortcut)
        nameLabel->setBuddy(instNameTextBox);
        groupLabel->setBuddy(groupBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(InstanceCardWidget);

        QMetaObject::connectSlotsByName(InstanceCardWidget);
    } // setupUi

    void retranslateUi(QWidget *InstanceCardWidget)
    {
        nameLabel->setText(QCoreApplication::translate("InstanceCardWidget", "&Name:", nullptr));
        groupLabel->setText(QCoreApplication::translate("InstanceCardWidget", "&Group:", nullptr));
        (void)InstanceCardWidget;
    } // retranslateUi

};

namespace Ui {
    class InstanceCardWidget: public Ui_InstanceCardWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTANCECARDWIDGET_H
