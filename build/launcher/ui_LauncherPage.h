/********************************************************************************
** Form generated from reading UI file 'LauncherPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAUNCHERPAGE_H
#define UI_LAUNCHERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/widgets/ThemeCustomizationWidget.h"

QT_BEGIN_NAMESPACE

class Ui_LauncherPage
{
public:
    QVBoxLayout *mainLayout;
    QTabWidget *tabWidget;
    QWidget *featuresTab;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *updateSettingsBox;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *autoUpdateCheckBox;
    QGroupBox *foldersBox;
    QGridLayout *foldersBoxLayout;
    QLabel *labelDownloadsDir;
    QLabel *labelInstDir;
    QLineEdit *instDirTextBox;
    QLineEdit *downloadsDirTextBox;
    QLineEdit *iconsDirTextBox;
    QToolButton *downloadsDirBrowseBtn;
    QLineEdit *modsDirTextBox;
    QToolButton *modsDirBrowseBtn;
    QLabel *labelModsDir;
    QToolButton *instDirBrowseBtn;
    QToolButton *iconsDirBrowseBtn;
    QLabel *labelIconsDir;
    QCheckBox *downloadsDirWatchRecursiveCheckBox;
    QGroupBox *modsBox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *metadataDisableBtn;
    QLabel *metadataWarningLabel;
    QSpacerItem *verticalSpacer_2;
    QWidget *generalTab;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *sortingModeBox;
    QHBoxLayout *sortingModeBoxLayout;
    QRadioButton *sortLastLaunchedBtn;
    QRadioButton *sortByNameBtn;
    QGroupBox *themeBox;
    QVBoxLayout *verticalLayout_5;
    ThemeCustomizationWidget *themeCustomizationWidget;
    QGroupBox *toolsBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *preferMenuBarCheckBox;
    QSpacerItem *generalTabSpacer;
    QWidget *consoleTab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *consoleSettingsBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *showConsoleCheck;
    QCheckBox *autoCloseConsoleCheck;
    QCheckBox *showConsoleErrorCheck;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QCheckBox *checkStopLogging;
    QSpinBox *lineLimitSpinBox;
    QGroupBox *themeBox_2;
    QGridLayout *gridLayout_2;
    QTextEdit *fontPreview;
    QFontComboBox *consoleFont;
    QSpinBox *fontSizeBox;
    QButtonGroup *sortingModeGroup;

    void setupUi(QWidget *LauncherPage)
    {
        if (LauncherPage->objectName().isEmpty())
            LauncherPage->setObjectName("LauncherPage");
        LauncherPage->resize(511, 629);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LauncherPage->sizePolicy().hasHeightForWidth());
        LauncherPage->setSizePolicy(sizePolicy);
        mainLayout = new QVBoxLayout(LauncherPage);
        mainLayout->setObjectName("mainLayout");
        mainLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(LauncherPage);
        tabWidget->setObjectName("tabWidget");
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabShape(QTabWidget::Rounded);
        featuresTab = new QWidget();
        featuresTab->setObjectName("featuresTab");
        verticalLayout_9 = new QVBoxLayout(featuresTab);
        verticalLayout_9->setObjectName("verticalLayout_9");
        updateSettingsBox = new QGroupBox(featuresTab);
        updateSettingsBox->setObjectName("updateSettingsBox");
        verticalLayout_7 = new QVBoxLayout(updateSettingsBox);
        verticalLayout_7->setObjectName("verticalLayout_7");
        autoUpdateCheckBox = new QCheckBox(updateSettingsBox);
        autoUpdateCheckBox->setObjectName("autoUpdateCheckBox");

        verticalLayout_7->addWidget(autoUpdateCheckBox);


        verticalLayout_9->addWidget(updateSettingsBox);

        foldersBox = new QGroupBox(featuresTab);
        foldersBox->setObjectName("foldersBox");
        foldersBoxLayout = new QGridLayout(foldersBox);
        foldersBoxLayout->setObjectName("foldersBoxLayout");
        labelDownloadsDir = new QLabel(foldersBox);
        labelDownloadsDir->setObjectName("labelDownloadsDir");

        foldersBoxLayout->addWidget(labelDownloadsDir, 3, 0, 1, 1);

        labelInstDir = new QLabel(foldersBox);
        labelInstDir->setObjectName("labelInstDir");

        foldersBoxLayout->addWidget(labelInstDir, 0, 0, 1, 1);

        instDirTextBox = new QLineEdit(foldersBox);
        instDirTextBox->setObjectName("instDirTextBox");

        foldersBoxLayout->addWidget(instDirTextBox, 0, 1, 1, 1);

        downloadsDirTextBox = new QLineEdit(foldersBox);
        downloadsDirTextBox->setObjectName("downloadsDirTextBox");

        foldersBoxLayout->addWidget(downloadsDirTextBox, 3, 1, 1, 1);

        iconsDirTextBox = new QLineEdit(foldersBox);
        iconsDirTextBox->setObjectName("iconsDirTextBox");

        foldersBoxLayout->addWidget(iconsDirTextBox, 2, 1, 1, 1);

        downloadsDirBrowseBtn = new QToolButton(foldersBox);
        downloadsDirBrowseBtn->setObjectName("downloadsDirBrowseBtn");
        downloadsDirBrowseBtn->setText(QString::fromUtf8("..."));

        foldersBoxLayout->addWidget(downloadsDirBrowseBtn, 3, 2, 1, 1);

        modsDirTextBox = new QLineEdit(foldersBox);
        modsDirTextBox->setObjectName("modsDirTextBox");

        foldersBoxLayout->addWidget(modsDirTextBox, 1, 1, 1, 1);

        modsDirBrowseBtn = new QToolButton(foldersBox);
        modsDirBrowseBtn->setObjectName("modsDirBrowseBtn");
        modsDirBrowseBtn->setText(QString::fromUtf8("..."));

        foldersBoxLayout->addWidget(modsDirBrowseBtn, 1, 2, 1, 1);

        labelModsDir = new QLabel(foldersBox);
        labelModsDir->setObjectName("labelModsDir");

        foldersBoxLayout->addWidget(labelModsDir, 1, 0, 1, 1);

        instDirBrowseBtn = new QToolButton(foldersBox);
        instDirBrowseBtn->setObjectName("instDirBrowseBtn");
        instDirBrowseBtn->setText(QString::fromUtf8("..."));

        foldersBoxLayout->addWidget(instDirBrowseBtn, 0, 2, 1, 1);

        iconsDirBrowseBtn = new QToolButton(foldersBox);
        iconsDirBrowseBtn->setObjectName("iconsDirBrowseBtn");
        iconsDirBrowseBtn->setText(QString::fromUtf8("..."));

        foldersBoxLayout->addWidget(iconsDirBrowseBtn, 2, 2, 1, 1);

        labelIconsDir = new QLabel(foldersBox);
        labelIconsDir->setObjectName("labelIconsDir");

        foldersBoxLayout->addWidget(labelIconsDir, 2, 0, 1, 1);

        downloadsDirWatchRecursiveCheckBox = new QCheckBox(foldersBox);
        downloadsDirWatchRecursiveCheckBox->setObjectName("downloadsDirWatchRecursiveCheckBox");

        foldersBoxLayout->addWidget(downloadsDirWatchRecursiveCheckBox, 4, 1, 1, 2);


        verticalLayout_9->addWidget(foldersBox);

        modsBox = new QGroupBox(featuresTab);
        modsBox->setObjectName("modsBox");
        verticalLayout_4 = new QVBoxLayout(modsBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        metadataDisableBtn = new QCheckBox(modsBox);
        metadataDisableBtn->setObjectName("metadataDisableBtn");

        verticalLayout_4->addWidget(metadataDisableBtn);

        metadataWarningLabel = new QLabel(modsBox);
        metadataWarningLabel->setObjectName("metadataWarningLabel");
        metadataWarningLabel->setWordWrap(true);

        verticalLayout_4->addWidget(metadataWarningLabel);


        verticalLayout_9->addWidget(modsBox);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        tabWidget->addTab(featuresTab, QString());
        generalTab = new QWidget();
        generalTab->setObjectName("generalTab");
        verticalLayout_6 = new QVBoxLayout(generalTab);
        verticalLayout_6->setObjectName("verticalLayout_6");
        sortingModeBox = new QGroupBox(generalTab);
        sortingModeBox->setObjectName("sortingModeBox");
        sortingModeBox->setEnabled(true);
        sortingModeBoxLayout = new QHBoxLayout(sortingModeBox);
        sortingModeBoxLayout->setObjectName("sortingModeBoxLayout");
        sortLastLaunchedBtn = new QRadioButton(sortingModeBox);
        sortingModeGroup = new QButtonGroup(LauncherPage);
        sortingModeGroup->setObjectName("sortingModeGroup");
        sortingModeGroup->addButton(sortLastLaunchedBtn);
        sortLastLaunchedBtn->setObjectName("sortLastLaunchedBtn");

        sortingModeBoxLayout->addWidget(sortLastLaunchedBtn);

        sortByNameBtn = new QRadioButton(sortingModeBox);
        sortingModeGroup->addButton(sortByNameBtn);
        sortByNameBtn->setObjectName("sortByNameBtn");

        sortingModeBoxLayout->addWidget(sortByNameBtn);


        verticalLayout_6->addWidget(sortingModeBox);

        themeBox = new QGroupBox(generalTab);
        themeBox->setObjectName("themeBox");
        verticalLayout_5 = new QVBoxLayout(themeBox);
        verticalLayout_5->setObjectName("verticalLayout_5");
        themeCustomizationWidget = new ThemeCustomizationWidget(themeBox);
        themeCustomizationWidget->setObjectName("themeCustomizationWidget");

        verticalLayout_5->addWidget(themeCustomizationWidget);


        verticalLayout_6->addWidget(themeBox);

        toolsBox = new QGroupBox(generalTab);
        toolsBox->setObjectName("toolsBox");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolsBox->sizePolicy().hasHeightForWidth());
        toolsBox->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(toolsBox);
        verticalLayout->setObjectName("verticalLayout");
        preferMenuBarCheckBox = new QCheckBox(toolsBox);
        preferMenuBarCheckBox->setObjectName("preferMenuBarCheckBox");

        verticalLayout->addWidget(preferMenuBarCheckBox);


        verticalLayout_6->addWidget(toolsBox);

        generalTabSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(generalTabSpacer);

        tabWidget->addTab(generalTab, QString());
        consoleTab = new QWidget();
        consoleTab->setObjectName("consoleTab");
        verticalLayout_2 = new QVBoxLayout(consoleTab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        consoleSettingsBox = new QGroupBox(consoleTab);
        consoleSettingsBox->setObjectName("consoleSettingsBox");
        verticalLayout_3 = new QVBoxLayout(consoleSettingsBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        showConsoleCheck = new QCheckBox(consoleSettingsBox);
        showConsoleCheck->setObjectName("showConsoleCheck");

        verticalLayout_3->addWidget(showConsoleCheck);

        autoCloseConsoleCheck = new QCheckBox(consoleSettingsBox);
        autoCloseConsoleCheck->setObjectName("autoCloseConsoleCheck");

        verticalLayout_3->addWidget(autoCloseConsoleCheck);

        showConsoleErrorCheck = new QCheckBox(consoleSettingsBox);
        showConsoleErrorCheck->setObjectName("showConsoleErrorCheck");

        verticalLayout_3->addWidget(showConsoleErrorCheck);


        verticalLayout_2->addWidget(consoleSettingsBox);

        groupBox_4 = new QGroupBox(consoleTab);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName("gridLayout_3");
        checkStopLogging = new QCheckBox(groupBox_4);
        checkStopLogging->setObjectName("checkStopLogging");

        gridLayout_3->addWidget(checkStopLogging, 1, 0, 1, 1);

        lineLimitSpinBox = new QSpinBox(groupBox_4);
        lineLimitSpinBox->setObjectName("lineLimitSpinBox");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineLimitSpinBox->sizePolicy().hasHeightForWidth());
        lineLimitSpinBox->setSizePolicy(sizePolicy2);
        lineLimitSpinBox->setMinimum(10000);
        lineLimitSpinBox->setMaximum(1000000);
        lineLimitSpinBox->setSingleStep(10000);
        lineLimitSpinBox->setValue(100000);

        gridLayout_3->addWidget(lineLimitSpinBox, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_4);

        themeBox_2 = new QGroupBox(consoleTab);
        themeBox_2->setObjectName("themeBox_2");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(themeBox_2->sizePolicy().hasHeightForWidth());
        themeBox_2->setSizePolicy(sizePolicy3);
        gridLayout_2 = new QGridLayout(themeBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        fontPreview = new QTextEdit(themeBox_2);
        fontPreview->setObjectName("fontPreview");
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(fontPreview->sizePolicy().hasHeightForWidth());
        fontPreview->setSizePolicy(sizePolicy4);
        fontPreview->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        fontPreview->setUndoRedoEnabled(false);
        fontPreview->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(fontPreview, 1, 0, 1, 2);

        consoleFont = new QFontComboBox(themeBox_2);
        consoleFont->setObjectName("consoleFont");
        sizePolicy2.setHeightForWidth(consoleFont->sizePolicy().hasHeightForWidth());
        consoleFont->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(consoleFont, 0, 0, 1, 1);

        fontSizeBox = new QSpinBox(themeBox_2);
        fontSizeBox->setObjectName("fontSizeBox");
        fontSizeBox->setMinimum(5);
        fontSizeBox->setMaximum(16);
        fontSizeBox->setValue(11);

        gridLayout_2->addWidget(fontSizeBox, 0, 1, 1, 1);


        verticalLayout_2->addWidget(themeBox_2);

        tabWidget->addTab(consoleTab, QString());

        mainLayout->addWidget(tabWidget);

#if QT_CONFIG(shortcut)
        labelDownloadsDir->setBuddy(downloadsDirTextBox);
        labelInstDir->setBuddy(instDirTextBox);
        labelModsDir->setBuddy(modsDirTextBox);
        labelIconsDir->setBuddy(iconsDirTextBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(tabWidget, autoUpdateCheckBox);
        QWidget::setTabOrder(autoUpdateCheckBox, instDirTextBox);
        QWidget::setTabOrder(instDirTextBox, instDirBrowseBtn);
        QWidget::setTabOrder(instDirBrowseBtn, modsDirTextBox);
        QWidget::setTabOrder(modsDirTextBox, modsDirBrowseBtn);
        QWidget::setTabOrder(modsDirBrowseBtn, iconsDirTextBox);
        QWidget::setTabOrder(iconsDirTextBox, iconsDirBrowseBtn);
        QWidget::setTabOrder(iconsDirBrowseBtn, sortLastLaunchedBtn);
        QWidget::setTabOrder(sortLastLaunchedBtn, sortByNameBtn);
        QWidget::setTabOrder(sortByNameBtn, showConsoleCheck);
        QWidget::setTabOrder(showConsoleCheck, autoCloseConsoleCheck);
        QWidget::setTabOrder(autoCloseConsoleCheck, showConsoleErrorCheck);
        QWidget::setTabOrder(showConsoleErrorCheck, lineLimitSpinBox);
        QWidget::setTabOrder(lineLimitSpinBox, checkStopLogging);
        QWidget::setTabOrder(checkStopLogging, consoleFont);
        QWidget::setTabOrder(consoleFont, fontSizeBox);
        QWidget::setTabOrder(fontSizeBox, fontPreview);

        retranslateUi(LauncherPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LauncherPage);
    } // setupUi

    void retranslateUi(QWidget *LauncherPage)
    {
        updateSettingsBox->setTitle(QCoreApplication::translate("LauncherPage", "Update Settings", nullptr));
        autoUpdateCheckBox->setText(QCoreApplication::translate("LauncherPage", "Check for updates automatically", nullptr));
        foldersBox->setTitle(QCoreApplication::translate("LauncherPage", "Folders", nullptr));
        labelDownloadsDir->setText(QCoreApplication::translate("LauncherPage", "&Downloads:", nullptr));
        labelInstDir->setText(QCoreApplication::translate("LauncherPage", "I&nstances:", nullptr));
        labelModsDir->setText(QCoreApplication::translate("LauncherPage", "&Mods:", nullptr));
        labelIconsDir->setText(QCoreApplication::translate("LauncherPage", "&Icons:", nullptr));
#if QT_CONFIG(tooltip)
        downloadsDirWatchRecursiveCheckBox->setToolTip(QCoreApplication::translate("LauncherPage", "When enabled, in addition to the downloads folder, its sub folders will also be searched when looking for resources (e.g. when looking for blocked mods on CurseForge).", nullptr));
#endif // QT_CONFIG(tooltip)
        downloadsDirWatchRecursiveCheckBox->setText(QCoreApplication::translate("LauncherPage", "Check downloads folder recursively", nullptr));
        modsBox->setTitle(QCoreApplication::translate("LauncherPage", "Mods", nullptr));
#if QT_CONFIG(tooltip)
        metadataDisableBtn->setToolTip(QCoreApplication::translate("LauncherPage", "Disable using metadata provided by mod providers (like Modrinth or Curseforge) for mods.", nullptr));
#endif // QT_CONFIG(tooltip)
        metadataDisableBtn->setText(QCoreApplication::translate("LauncherPage", "Disable using metadata for mods?", nullptr));
        metadataWarningLabel->setText(QCoreApplication::translate("LauncherPage", "<html><head/><body><p><span style=\" font-weight:600; color:#f5c211;\">Warning</span><span style=\" color:#f5c211;\">: Disabling mod metadata may also disable some QoL features, such as mod updating!</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(featuresTab), QCoreApplication::translate("LauncherPage", "Features", nullptr));
        sortingModeBox->setTitle(QCoreApplication::translate("LauncherPage", "Instance view sorting mode", nullptr));
        sortLastLaunchedBtn->setText(QCoreApplication::translate("LauncherPage", "&By last launched", nullptr));
        sortByNameBtn->setText(QCoreApplication::translate("LauncherPage", "By &name", nullptr));
        themeBox->setTitle(QCoreApplication::translate("LauncherPage", "Theme", nullptr));
        toolsBox->setTitle(QCoreApplication::translate("LauncherPage", "Tools", nullptr));
#if QT_CONFIG(tooltip)
        preferMenuBarCheckBox->setToolTip(QCoreApplication::translate("LauncherPage", "The menubar is more friendly for keyboard-driven interaction.", nullptr));
#endif // QT_CONFIG(tooltip)
        preferMenuBarCheckBox->setText(QCoreApplication::translate("LauncherPage", "&Replace toolbar with menubar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(generalTab), QCoreApplication::translate("LauncherPage", "User Interface", nullptr));
        consoleSettingsBox->setTitle(QCoreApplication::translate("LauncherPage", "Console Settings", nullptr));
        showConsoleCheck->setText(QCoreApplication::translate("LauncherPage", "Show console while the game is &running?", nullptr));
        autoCloseConsoleCheck->setText(QCoreApplication::translate("LauncherPage", "&Automatically close console when the game quits?", nullptr));
        showConsoleErrorCheck->setText(QCoreApplication::translate("LauncherPage", "Show console when the game &crashes?", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("LauncherPage", "&History limit", nullptr));
        checkStopLogging->setText(QCoreApplication::translate("LauncherPage", "&Stop logging when log overflows", nullptr));
        lineLimitSpinBox->setSuffix(QCoreApplication::translate("LauncherPage", " lines", nullptr));
        themeBox_2->setTitle(QCoreApplication::translate("LauncherPage", "Console &font", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(consoleTab), QCoreApplication::translate("LauncherPage", "Console", nullptr));
        (void)LauncherPage;
    } // retranslateUi

};

namespace Ui {
    class LauncherPage: public Ui_LauncherPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAUNCHERPAGE_H
