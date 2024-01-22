/********************************************************************************
** Form generated from reading UI file 'CopyInstanceDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPYINSTANCEDIALOG_H
#define UI_COPYINSTANCEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CopyInstanceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *iconBtnLayout;
    QSpacerItem *iconBtnLeftSpacer;
    QToolButton *iconButton;
    QSpacerItem *iconBtnRightSpacer;
    QLineEdit *instNameTextBox;
    QFrame *line;
    QGridLayout *groupDropdownLayout;
    QLabel *labelVersion_3;
    QComboBox *groupBox;
    QHBoxLayout *selectAllButtonLayout;
    QCheckBox *selectAllCheckbox;
    QGridLayout *copyOptionsLayout;
    QCheckBox *copyModsCheckbox;
    QCheckBox *copyGameOptionsCheckbox;
    QCheckBox *copySavesCheckbox;
    QCheckBox *copyShaderPacksCheckbox;
    QCheckBox *copyServersCheckbox;
    QCheckBox *copyResPacksCheckbox;
    QCheckBox *keepPlaytimeCheckbox;
    QCheckBox *copyScreenshotsCheckbox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CopyInstanceDialog)
    {
        if (CopyInstanceDialog->objectName().isEmpty())
            CopyInstanceDialog->setObjectName("CopyInstanceDialog");
        CopyInstanceDialog->setWindowModality(Qt::ApplicationModal);
        CopyInstanceDialog->resize(341, 399);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/toolbar/copy"), QSize(), QIcon::Normal, QIcon::Off);
        CopyInstanceDialog->setWindowIcon(icon);
        CopyInstanceDialog->setModal(true);
        verticalLayout = new QVBoxLayout(CopyInstanceDialog);
        verticalLayout->setObjectName("verticalLayout");
        iconBtnLayout = new QHBoxLayout();
        iconBtnLayout->setObjectName("iconBtnLayout");
        iconBtnLeftSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        iconBtnLayout->addItem(iconBtnLeftSpacer);

        iconButton = new QToolButton(CopyInstanceDialog);
        iconButton->setObjectName("iconButton");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/instances/grass"), QSize(), QIcon::Normal, QIcon::Off);
        iconButton->setIcon(icon1);
        iconButton->setIconSize(QSize(80, 80));

        iconBtnLayout->addWidget(iconButton);

        iconBtnRightSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        iconBtnLayout->addItem(iconBtnRightSpacer);


        verticalLayout->addLayout(iconBtnLayout);

        instNameTextBox = new QLineEdit(CopyInstanceDialog);
        instNameTextBox->setObjectName("instNameTextBox");

        verticalLayout->addWidget(instNameTextBox);

        line = new QFrame(CopyInstanceDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        groupDropdownLayout = new QGridLayout();
        groupDropdownLayout->setObjectName("groupDropdownLayout");
        groupDropdownLayout->setVerticalSpacing(6);
        labelVersion_3 = new QLabel(CopyInstanceDialog);
        labelVersion_3->setObjectName("labelVersion_3");

        groupDropdownLayout->addWidget(labelVersion_3, 0, 0, 1, 1);

        groupBox = new QComboBox(CopyInstanceDialog);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setEditable(true);

        groupDropdownLayout->addWidget(groupBox, 0, 1, 1, 2);


        verticalLayout->addLayout(groupDropdownLayout);

        selectAllButtonLayout = new QHBoxLayout();
        selectAllButtonLayout->setObjectName("selectAllButtonLayout");
        selectAllCheckbox = new QCheckBox(CopyInstanceDialog);
        selectAllCheckbox->setObjectName("selectAllCheckbox");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(selectAllCheckbox->sizePolicy().hasHeightForWidth());
        selectAllCheckbox->setSizePolicy(sizePolicy1);
        selectAllCheckbox->setLayoutDirection(Qt::LeftToRight);
        selectAllCheckbox->setChecked(false);

        selectAllButtonLayout->addWidget(selectAllCheckbox);


        verticalLayout->addLayout(selectAllButtonLayout);

        copyOptionsLayout = new QGridLayout();
        copyOptionsLayout->setObjectName("copyOptionsLayout");
        copyModsCheckbox = new QCheckBox(CopyInstanceDialog);
        copyModsCheckbox->setObjectName("copyModsCheckbox");

        copyOptionsLayout->addWidget(copyModsCheckbox, 6, 1, 1, 1);

        copyGameOptionsCheckbox = new QCheckBox(CopyInstanceDialog);
        copyGameOptionsCheckbox->setObjectName("copyGameOptionsCheckbox");

        copyOptionsLayout->addWidget(copyGameOptionsCheckbox, 5, 0, 1, 1);

        copySavesCheckbox = new QCheckBox(CopyInstanceDialog);
        copySavesCheckbox->setObjectName("copySavesCheckbox");

        copyOptionsLayout->addWidget(copySavesCheckbox, 3, 0, 1, 1);

        copyShaderPacksCheckbox = new QCheckBox(CopyInstanceDialog);
        copyShaderPacksCheckbox->setObjectName("copyShaderPacksCheckbox");

        copyOptionsLayout->addWidget(copyShaderPacksCheckbox, 3, 1, 1, 1);

        copyServersCheckbox = new QCheckBox(CopyInstanceDialog);
        copyServersCheckbox->setObjectName("copyServersCheckbox");

        copyOptionsLayout->addWidget(copyServersCheckbox, 5, 1, 1, 1);

        copyResPacksCheckbox = new QCheckBox(CopyInstanceDialog);
        copyResPacksCheckbox->setObjectName("copyResPacksCheckbox");
        copyResPacksCheckbox->setEnabled(true);

        copyOptionsLayout->addWidget(copyResPacksCheckbox, 6, 0, 1, 1);

        keepPlaytimeCheckbox = new QCheckBox(CopyInstanceDialog);
        keepPlaytimeCheckbox->setObjectName("keepPlaytimeCheckbox");

        copyOptionsLayout->addWidget(keepPlaytimeCheckbox, 1, 0, 1, 1);

        copyScreenshotsCheckbox = new QCheckBox(CopyInstanceDialog);
        copyScreenshotsCheckbox->setObjectName("copyScreenshotsCheckbox");

        copyOptionsLayout->addWidget(copyScreenshotsCheckbox, 1, 1, 1, 1);


        verticalLayout->addLayout(copyOptionsLayout);

        buttonBox = new QDialogButtonBox(CopyInstanceDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        labelVersion_3->setBuddy(groupBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(iconButton, instNameTextBox);
        QWidget::setTabOrder(instNameTextBox, groupBox);

        retranslateUi(CopyInstanceDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CopyInstanceDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CopyInstanceDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CopyInstanceDialog);
    } // setupUi

    void retranslateUi(QDialog *CopyInstanceDialog)
    {
        CopyInstanceDialog->setWindowTitle(QCoreApplication::translate("CopyInstanceDialog", "Copy Instance", nullptr));
        instNameTextBox->setPlaceholderText(QCoreApplication::translate("CopyInstanceDialog", "Name", nullptr));
        labelVersion_3->setText(QCoreApplication::translate("CopyInstanceDialog", "&Group", nullptr));
        selectAllCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Select all", nullptr));
#if QT_CONFIG(tooltip)
        copyModsCheckbox->setToolTip(QCoreApplication::translate("CopyInstanceDialog", "Disabling this will still keep the mod loader (ex: Fabric, Quilt, etc.) but erase the mods folder and their configs.", nullptr));
#endif // QT_CONFIG(tooltip)
        copyModsCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Copy mods", nullptr));
#if QT_CONFIG(tooltip)
        copyGameOptionsCheckbox->setToolTip(QCoreApplication::translate("CopyInstanceDialog", "Copy the in-game options like FOV, max framerate, etc.", nullptr));
#endif // QT_CONFIG(tooltip)
        copyGameOptionsCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Copy game options", nullptr));
        copySavesCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Copy saves", nullptr));
        copyShaderPacksCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Copy shader packs", nullptr));
        copyServersCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Copy servers", nullptr));
        copyResPacksCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Copy resource packs", nullptr));
        keepPlaytimeCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Keep play time", nullptr));
        copyScreenshotsCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Copy screenshots", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CopyInstanceDialog: public Ui_CopyInstanceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPYINSTANCEDIALOG_H
