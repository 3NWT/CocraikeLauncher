/********************************************************************************
** Form generated from reading UI file 'InstanceSettingsPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTANCESETTINGSPAGE_H
#define UI_INSTANCESETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/widgets/CustomCommands.h"

QT_BEGIN_NAMESPACE

class Ui_InstanceSettingsPage
{
public:
    QVBoxLayout *verticalLayout;
    QCommandLinkButton *openGlobalJavaSettingsButton;
    QTabWidget *settingsTabs;
    QWidget *minecraftTab;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *javaSettingsGroupBox;
    QGridLayout *gridLayout;
    QLineEdit *javaPathTextBox;
    QPushButton *javaDetectBtn;
    QPushButton *javaBrowseBtn;
    QPushButton *javaTestBtn;
    QCheckBox *skipCompatibilityCheckbox;
    QGroupBox *memoryGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *labelPermGen;
    QLabel *labelMinMem;
    QLabel *labelMaxMem;
    QLabel *labelPermgenNote;
    QSpinBox *minMemSpinBox;
    QSpinBox *maxMemSpinBox;
    QSpinBox *permGenSpinBox;
    QLabel *labelMaxMemIcon;
    QGroupBox *javaArgumentsGroupBox;
    QGridLayout *gridLayout_5;
    QPlainTextEdit *jvmArgsTextBox;
    QWidget *javaTab;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *windowSizeGroupBox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *maximizedCheckBox;
    QGridLayout *gridLayoutWindowSize;
    QLabel *labelWindowHeight;
    QLabel *labelWindowWidth;
    QSpinBox *windowWidthSpinBox;
    QSpinBox *windowHeightSpinBox;
    QGroupBox *consoleSettingsBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *showConsoleCheck;
    QCheckBox *autoCloseConsoleCheck;
    QCheckBox *showConsoleErrorCheck;
    QGroupBox *miscellaneousSettingsBox;
    QVBoxLayout *verticalLayout_12;
    QCheckBox *closeAfterLaunchCheck;
    QCheckBox *quitAfterGameStopCheck;
    QSpacerItem *verticalSpacerMinecraft_2;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    CustomCommands *customCommands;
    QWidget *workaroundsPage;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *nativeWorkaroundsGroupBox;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *useNativeGLFWCheck;
    QCheckBox *useNativeOpenALCheck;
    QSpacerItem *verticalSpacer;
    QWidget *performancePage;
    QVBoxLayout *verticalLayout_14;
    QGroupBox *perfomanceGroupBox;
    QVBoxLayout *verticalLayout_13;
    QCheckBox *enableFeralGamemodeCheck;
    QCheckBox *enableMangoHud;
    QCheckBox *useDiscreteGpuCheck;
    QSpacerItem *verticalSpacer_2;
    QWidget *miscellaneousPage;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *gameTimeGroupBox;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *showGameTime;
    QCheckBox *recordGameTime;
    QGroupBox *serverJoinGroupBox;
    QVBoxLayout *verticalLayout_11;
    QGridLayout *serverJoinLayout;
    QLabel *serverJoinAddressLabel;
    QLineEdit *serverJoinAddress;
    QGroupBox *instanceAccountGroupBox;
    QVBoxLayout *verticalLayout_15;
    QGridLayout *instanceAccountLayout;
    QLabel *instanceAccountNameLabel;
    QToolButton *instanceAccountSelector;
    QSpacerItem *verticalSpacerMiscellaneous;

    void setupUi(QWidget *InstanceSettingsPage)
    {
        if (InstanceSettingsPage->objectName().isEmpty())
            InstanceSettingsPage->setObjectName("InstanceSettingsPage");
        InstanceSettingsPage->resize(691, 581);
        verticalLayout = new QVBoxLayout(InstanceSettingsPage);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        openGlobalJavaSettingsButton = new QCommandLinkButton(InstanceSettingsPage);
        openGlobalJavaSettingsButton->setObjectName("openGlobalJavaSettingsButton");

        verticalLayout->addWidget(openGlobalJavaSettingsButton);

        settingsTabs = new QTabWidget(InstanceSettingsPage);
        settingsTabs->setObjectName("settingsTabs");
        settingsTabs->setTabShape(QTabWidget::Rounded);
        minecraftTab = new QWidget();
        minecraftTab->setObjectName("minecraftTab");
        verticalLayout_5 = new QVBoxLayout(minecraftTab);
        verticalLayout_5->setObjectName("verticalLayout_5");
        javaSettingsGroupBox = new QGroupBox(minecraftTab);
        javaSettingsGroupBox->setObjectName("javaSettingsGroupBox");
        javaSettingsGroupBox->setEnabled(true);
        javaSettingsGroupBox->setCheckable(true);
        javaSettingsGroupBox->setChecked(false);
        gridLayout = new QGridLayout(javaSettingsGroupBox);
        gridLayout->setObjectName("gridLayout");
        javaPathTextBox = new QLineEdit(javaSettingsGroupBox);
        javaPathTextBox->setObjectName("javaPathTextBox");

        gridLayout->addWidget(javaPathTextBox, 0, 0, 1, 3);

        javaDetectBtn = new QPushButton(javaSettingsGroupBox);
        javaDetectBtn->setObjectName("javaDetectBtn");

        gridLayout->addWidget(javaDetectBtn, 1, 0, 1, 1);

        javaBrowseBtn = new QPushButton(javaSettingsGroupBox);
        javaBrowseBtn->setObjectName("javaBrowseBtn");

        gridLayout->addWidget(javaBrowseBtn, 1, 1, 1, 1);

        javaTestBtn = new QPushButton(javaSettingsGroupBox);
        javaTestBtn->setObjectName("javaTestBtn");

        gridLayout->addWidget(javaTestBtn, 1, 2, 1, 1);

        skipCompatibilityCheckbox = new QCheckBox(javaSettingsGroupBox);
        skipCompatibilityCheckbox->setObjectName("skipCompatibilityCheckbox");

        gridLayout->addWidget(skipCompatibilityCheckbox, 2, 0, 1, 1);


        verticalLayout_5->addWidget(javaSettingsGroupBox);

        memoryGroupBox = new QGroupBox(minecraftTab);
        memoryGroupBox->setObjectName("memoryGroupBox");
        memoryGroupBox->setEnabled(true);
        memoryGroupBox->setCheckable(true);
        memoryGroupBox->setChecked(false);
        gridLayout_2 = new QGridLayout(memoryGroupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        labelPermGen = new QLabel(memoryGroupBox);
        labelPermGen->setObjectName("labelPermGen");
        labelPermGen->setText(QString::fromUtf8("PermGen:"));

        gridLayout_2->addWidget(labelPermGen, 2, 0, 1, 1);

        labelMinMem = new QLabel(memoryGroupBox);
        labelMinMem->setObjectName("labelMinMem");

        gridLayout_2->addWidget(labelMinMem, 0, 0, 1, 1);

        labelMaxMem = new QLabel(memoryGroupBox);
        labelMaxMem->setObjectName("labelMaxMem");

        gridLayout_2->addWidget(labelMaxMem, 1, 0, 1, 1);

        labelPermgenNote = new QLabel(memoryGroupBox);
        labelPermgenNote->setObjectName("labelPermgenNote");

        gridLayout_2->addWidget(labelPermgenNote, 3, 0, 1, 3);

        minMemSpinBox = new QSpinBox(memoryGroupBox);
        minMemSpinBox->setObjectName("minMemSpinBox");
        minMemSpinBox->setSuffix(QString::fromUtf8(" MiB"));
        minMemSpinBox->setMinimum(128);
        minMemSpinBox->setMaximum(1048576);
        minMemSpinBox->setSingleStep(128);
        minMemSpinBox->setValue(256);

        gridLayout_2->addWidget(minMemSpinBox, 0, 2, 1, 1);

        maxMemSpinBox = new QSpinBox(memoryGroupBox);
        maxMemSpinBox->setObjectName("maxMemSpinBox");
        maxMemSpinBox->setSuffix(QString::fromUtf8(" MiB"));
        maxMemSpinBox->setMinimum(128);
        maxMemSpinBox->setMaximum(1048576);
        maxMemSpinBox->setSingleStep(128);
        maxMemSpinBox->setValue(1024);

        gridLayout_2->addWidget(maxMemSpinBox, 1, 2, 1, 1);

        permGenSpinBox = new QSpinBox(memoryGroupBox);
        permGenSpinBox->setObjectName("permGenSpinBox");
        permGenSpinBox->setSuffix(QString::fromUtf8(" MiB"));
        permGenSpinBox->setMinimum(64);
        permGenSpinBox->setMaximum(999999999);
        permGenSpinBox->setSingleStep(8);
        permGenSpinBox->setValue(64);

        gridLayout_2->addWidget(permGenSpinBox, 2, 2, 1, 1);

        labelMaxMemIcon = new QLabel(memoryGroupBox);
        labelMaxMemIcon->setObjectName("labelMaxMemIcon");
        labelMaxMemIcon->setText(QString::fromUtf8(""));
        labelMaxMemIcon->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelMaxMemIcon, 1, 3, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);

        verticalLayout_5->addWidget(memoryGroupBox);

        javaArgumentsGroupBox = new QGroupBox(minecraftTab);
        javaArgumentsGroupBox->setObjectName("javaArgumentsGroupBox");
        javaArgumentsGroupBox->setEnabled(true);
        javaArgumentsGroupBox->setCheckable(true);
        javaArgumentsGroupBox->setChecked(false);
        gridLayout_5 = new QGridLayout(javaArgumentsGroupBox);
        gridLayout_5->setObjectName("gridLayout_5");
        jvmArgsTextBox = new QPlainTextEdit(javaArgumentsGroupBox);
        jvmArgsTextBox->setObjectName("jvmArgsTextBox");

        gridLayout_5->addWidget(jvmArgsTextBox, 1, 1, 1, 1);


        verticalLayout_5->addWidget(javaArgumentsGroupBox);

        settingsTabs->addTab(minecraftTab, QString());
        settingsTabs->setTabText(settingsTabs->indexOf(minecraftTab), QString::fromUtf8("Java"));
        javaTab = new QWidget();
        javaTab->setObjectName("javaTab");
        verticalLayout_3 = new QVBoxLayout(javaTab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        windowSizeGroupBox = new QGroupBox(javaTab);
        windowSizeGroupBox->setObjectName("windowSizeGroupBox");
        windowSizeGroupBox->setEnabled(true);
        windowSizeGroupBox->setCheckable(true);
        windowSizeGroupBox->setChecked(false);
        verticalLayout_4 = new QVBoxLayout(windowSizeGroupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        maximizedCheckBox = new QCheckBox(windowSizeGroupBox);
        maximizedCheckBox->setObjectName("maximizedCheckBox");

        verticalLayout_4->addWidget(maximizedCheckBox);

        gridLayoutWindowSize = new QGridLayout();
        gridLayoutWindowSize->setObjectName("gridLayoutWindowSize");
        labelWindowHeight = new QLabel(windowSizeGroupBox);
        labelWindowHeight->setObjectName("labelWindowHeight");

        gridLayoutWindowSize->addWidget(labelWindowHeight, 1, 0, 1, 1);

        labelWindowWidth = new QLabel(windowSizeGroupBox);
        labelWindowWidth->setObjectName("labelWindowWidth");

        gridLayoutWindowSize->addWidget(labelWindowWidth, 0, 0, 1, 1);

        windowWidthSpinBox = new QSpinBox(windowSizeGroupBox);
        windowWidthSpinBox->setObjectName("windowWidthSpinBox");
        windowWidthSpinBox->setMinimum(1);
        windowWidthSpinBox->setMaximum(65536);
        windowWidthSpinBox->setSingleStep(1);
        windowWidthSpinBox->setValue(854);

        gridLayoutWindowSize->addWidget(windowWidthSpinBox, 0, 1, 1, 1);

        windowHeightSpinBox = new QSpinBox(windowSizeGroupBox);
        windowHeightSpinBox->setObjectName("windowHeightSpinBox");
        windowHeightSpinBox->setMinimum(1);
        windowHeightSpinBox->setMaximum(65536);
        windowHeightSpinBox->setValue(480);

        gridLayoutWindowSize->addWidget(windowHeightSpinBox, 1, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayoutWindowSize);


        verticalLayout_3->addWidget(windowSizeGroupBox);

        consoleSettingsBox = new QGroupBox(javaTab);
        consoleSettingsBox->setObjectName("consoleSettingsBox");
        consoleSettingsBox->setEnabled(true);
        consoleSettingsBox->setCheckable(true);
        consoleSettingsBox->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(consoleSettingsBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        showConsoleCheck = new QCheckBox(consoleSettingsBox);
        showConsoleCheck->setObjectName("showConsoleCheck");

        verticalLayout_2->addWidget(showConsoleCheck);

        autoCloseConsoleCheck = new QCheckBox(consoleSettingsBox);
        autoCloseConsoleCheck->setObjectName("autoCloseConsoleCheck");

        verticalLayout_2->addWidget(autoCloseConsoleCheck);

        showConsoleErrorCheck = new QCheckBox(consoleSettingsBox);
        showConsoleErrorCheck->setObjectName("showConsoleErrorCheck");

        verticalLayout_2->addWidget(showConsoleErrorCheck);


        verticalLayout_3->addWidget(consoleSettingsBox);

        miscellaneousSettingsBox = new QGroupBox(javaTab);
        miscellaneousSettingsBox->setObjectName("miscellaneousSettingsBox");
        miscellaneousSettingsBox->setCheckable(true);
        miscellaneousSettingsBox->setChecked(false);
        verticalLayout_12 = new QVBoxLayout(miscellaneousSettingsBox);
        verticalLayout_12->setObjectName("verticalLayout_12");
        closeAfterLaunchCheck = new QCheckBox(miscellaneousSettingsBox);
        closeAfterLaunchCheck->setObjectName("closeAfterLaunchCheck");

        verticalLayout_12->addWidget(closeAfterLaunchCheck);

        quitAfterGameStopCheck = new QCheckBox(miscellaneousSettingsBox);
        quitAfterGameStopCheck->setObjectName("quitAfterGameStopCheck");

        verticalLayout_12->addWidget(quitAfterGameStopCheck);


        verticalLayout_3->addWidget(miscellaneousSettingsBox);

        verticalSpacerMinecraft_2 = new QSpacerItem(88, 125, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacerMinecraft_2);

        settingsTabs->addTab(javaTab, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setObjectName("verticalLayout_6");
        customCommands = new CustomCommands(tab);
        customCommands->setObjectName("customCommands");

        verticalLayout_6->addWidget(customCommands);

        settingsTabs->addTab(tab, QString());
        workaroundsPage = new QWidget();
        workaroundsPage->setObjectName("workaroundsPage");
        verticalLayout_8 = new QVBoxLayout(workaroundsPage);
        verticalLayout_8->setObjectName("verticalLayout_8");
        nativeWorkaroundsGroupBox = new QGroupBox(workaroundsPage);
        nativeWorkaroundsGroupBox->setObjectName("nativeWorkaroundsGroupBox");
        nativeWorkaroundsGroupBox->setEnabled(true);
        nativeWorkaroundsGroupBox->setCheckable(true);
        nativeWorkaroundsGroupBox->setChecked(false);
        verticalLayout_7 = new QVBoxLayout(nativeWorkaroundsGroupBox);
        verticalLayout_7->setObjectName("verticalLayout_7");
        useNativeGLFWCheck = new QCheckBox(nativeWorkaroundsGroupBox);
        useNativeGLFWCheck->setObjectName("useNativeGLFWCheck");

        verticalLayout_7->addWidget(useNativeGLFWCheck);

        useNativeOpenALCheck = new QCheckBox(nativeWorkaroundsGroupBox);
        useNativeOpenALCheck->setObjectName("useNativeOpenALCheck");

        verticalLayout_7->addWidget(useNativeOpenALCheck);


        verticalLayout_8->addWidget(nativeWorkaroundsGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        settingsTabs->addTab(workaroundsPage, QString());
        performancePage = new QWidget();
        performancePage->setObjectName("performancePage");
        verticalLayout_14 = new QVBoxLayout(performancePage);
        verticalLayout_14->setObjectName("verticalLayout_14");
        perfomanceGroupBox = new QGroupBox(performancePage);
        perfomanceGroupBox->setObjectName("perfomanceGroupBox");
        perfomanceGroupBox->setEnabled(true);
        perfomanceGroupBox->setCheckable(true);
        perfomanceGroupBox->setChecked(false);
        verticalLayout_13 = new QVBoxLayout(perfomanceGroupBox);
        verticalLayout_13->setObjectName("verticalLayout_13");
        enableFeralGamemodeCheck = new QCheckBox(perfomanceGroupBox);
        enableFeralGamemodeCheck->setObjectName("enableFeralGamemodeCheck");

        verticalLayout_13->addWidget(enableFeralGamemodeCheck);

        enableMangoHud = new QCheckBox(perfomanceGroupBox);
        enableMangoHud->setObjectName("enableMangoHud");

        verticalLayout_13->addWidget(enableMangoHud);

        useDiscreteGpuCheck = new QCheckBox(perfomanceGroupBox);
        useDiscreteGpuCheck->setObjectName("useDiscreteGpuCheck");

        verticalLayout_13->addWidget(useDiscreteGpuCheck);


        verticalLayout_14->addWidget(perfomanceGroupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_2);

        settingsTabs->addTab(performancePage, QString());
        miscellaneousPage = new QWidget();
        miscellaneousPage->setObjectName("miscellaneousPage");
        verticalLayout_9 = new QVBoxLayout(miscellaneousPage);
        verticalLayout_9->setObjectName("verticalLayout_9");
        gameTimeGroupBox = new QGroupBox(miscellaneousPage);
        gameTimeGroupBox->setObjectName("gameTimeGroupBox");
        gameTimeGroupBox->setEnabled(true);
        gameTimeGroupBox->setCheckable(true);
        gameTimeGroupBox->setChecked(false);
        verticalLayout_10 = new QVBoxLayout(gameTimeGroupBox);
        verticalLayout_10->setObjectName("verticalLayout_10");
        showGameTime = new QCheckBox(gameTimeGroupBox);
        showGameTime->setObjectName("showGameTime");

        verticalLayout_10->addWidget(showGameTime);

        recordGameTime = new QCheckBox(gameTimeGroupBox);
        recordGameTime->setObjectName("recordGameTime");

        verticalLayout_10->addWidget(recordGameTime);


        verticalLayout_9->addWidget(gameTimeGroupBox);

        serverJoinGroupBox = new QGroupBox(miscellaneousPage);
        serverJoinGroupBox->setObjectName("serverJoinGroupBox");
        serverJoinGroupBox->setCheckable(true);
        serverJoinGroupBox->setChecked(false);
        verticalLayout_11 = new QVBoxLayout(serverJoinGroupBox);
        verticalLayout_11->setObjectName("verticalLayout_11");
        serverJoinLayout = new QGridLayout();
        serverJoinLayout->setObjectName("serverJoinLayout");
        serverJoinAddressLabel = new QLabel(serverJoinGroupBox);
        serverJoinAddressLabel->setObjectName("serverJoinAddressLabel");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(serverJoinAddressLabel->sizePolicy().hasHeightForWidth());
        serverJoinAddressLabel->setSizePolicy(sizePolicy);

        serverJoinLayout->addWidget(serverJoinAddressLabel, 0, 0, 1, 1);

        serverJoinAddress = new QLineEdit(serverJoinGroupBox);
        serverJoinAddress->setObjectName("serverJoinAddress");

        serverJoinLayout->addWidget(serverJoinAddress, 0, 1, 1, 1);


        verticalLayout_11->addLayout(serverJoinLayout);


        verticalLayout_9->addWidget(serverJoinGroupBox);

        instanceAccountGroupBox = new QGroupBox(miscellaneousPage);
        instanceAccountGroupBox->setObjectName("instanceAccountGroupBox");
        instanceAccountGroupBox->setCheckable(true);
        instanceAccountGroupBox->setChecked(false);
        verticalLayout_15 = new QVBoxLayout(instanceAccountGroupBox);
        verticalLayout_15->setObjectName("verticalLayout_15");
        instanceAccountLayout = new QGridLayout();
        instanceAccountLayout->setObjectName("instanceAccountLayout");
        instanceAccountNameLabel = new QLabel(instanceAccountGroupBox);
        instanceAccountNameLabel->setObjectName("instanceAccountNameLabel");
        sizePolicy.setHeightForWidth(instanceAccountNameLabel->sizePolicy().hasHeightForWidth());
        instanceAccountNameLabel->setSizePolicy(sizePolicy);

        instanceAccountLayout->addWidget(instanceAccountNameLabel, 0, 0, 1, 1);

        instanceAccountSelector = new QToolButton(instanceAccountGroupBox);
        instanceAccountSelector->setObjectName("instanceAccountSelector");
        instanceAccountSelector->setPopupMode(QToolButton::InstantPopup);
        instanceAccountSelector->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        instanceAccountLayout->addWidget(instanceAccountSelector, 0, 1, 1, 1);


        verticalLayout_15->addLayout(instanceAccountLayout);


        verticalLayout_9->addWidget(instanceAccountGroupBox);

        verticalSpacerMiscellaneous = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacerMiscellaneous);

        settingsTabs->addTab(miscellaneousPage, QString());

        verticalLayout->addWidget(settingsTabs);

#if QT_CONFIG(shortcut)
        labelMaxMemIcon->setBuddy(maxMemSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(openGlobalJavaSettingsButton, settingsTabs);
        QWidget::setTabOrder(settingsTabs, javaSettingsGroupBox);
        QWidget::setTabOrder(javaSettingsGroupBox, javaPathTextBox);
        QWidget::setTabOrder(javaPathTextBox, javaDetectBtn);
        QWidget::setTabOrder(javaDetectBtn, javaBrowseBtn);
        QWidget::setTabOrder(javaBrowseBtn, javaTestBtn);
        QWidget::setTabOrder(javaTestBtn, memoryGroupBox);
        QWidget::setTabOrder(memoryGroupBox, minMemSpinBox);
        QWidget::setTabOrder(minMemSpinBox, maxMemSpinBox);
        QWidget::setTabOrder(maxMemSpinBox, permGenSpinBox);
        QWidget::setTabOrder(permGenSpinBox, javaArgumentsGroupBox);
        QWidget::setTabOrder(javaArgumentsGroupBox, jvmArgsTextBox);
        QWidget::setTabOrder(jvmArgsTextBox, windowSizeGroupBox);
        QWidget::setTabOrder(windowSizeGroupBox, maximizedCheckBox);
        QWidget::setTabOrder(maximizedCheckBox, windowWidthSpinBox);
        QWidget::setTabOrder(windowWidthSpinBox, windowHeightSpinBox);
        QWidget::setTabOrder(windowHeightSpinBox, consoleSettingsBox);
        QWidget::setTabOrder(consoleSettingsBox, showConsoleCheck);
        QWidget::setTabOrder(showConsoleCheck, autoCloseConsoleCheck);
        QWidget::setTabOrder(autoCloseConsoleCheck, showConsoleErrorCheck);
        QWidget::setTabOrder(showConsoleErrorCheck, nativeWorkaroundsGroupBox);
        QWidget::setTabOrder(nativeWorkaroundsGroupBox, useNativeGLFWCheck);
        QWidget::setTabOrder(useNativeGLFWCheck, useNativeOpenALCheck);
        QWidget::setTabOrder(useNativeOpenALCheck, showGameTime);
        QWidget::setTabOrder(showGameTime, recordGameTime);

        retranslateUi(InstanceSettingsPage);

        settingsTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(InstanceSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *InstanceSettingsPage)
    {
        openGlobalJavaSettingsButton->setText(QCoreApplication::translate("InstanceSettingsPage", "Open Global Settings", nullptr));
        openGlobalJavaSettingsButton->setDescription(QCoreApplication::translate("InstanceSettingsPage", "The settings here are overrides for global settings.", nullptr));
        javaSettingsGroupBox->setTitle(QCoreApplication::translate("InstanceSettingsPage", "Java insta&llation", nullptr));
        javaDetectBtn->setText(QCoreApplication::translate("InstanceSettingsPage", "Auto-detect...", nullptr));
        javaBrowseBtn->setText(QCoreApplication::translate("InstanceSettingsPage", "Browse...", nullptr));
        javaTestBtn->setText(QCoreApplication::translate("InstanceSettingsPage", "Test", nullptr));
#if QT_CONFIG(tooltip)
        skipCompatibilityCheckbox->setToolTip(QCoreApplication::translate("InstanceSettingsPage", "If enabled, the launcher will not check if an instance is compatible with the selected Java version.", nullptr));
#endif // QT_CONFIG(tooltip)
        skipCompatibilityCheckbox->setText(QCoreApplication::translate("InstanceSettingsPage", "Skip Java compatibility checks", nullptr));
        memoryGroupBox->setTitle(QCoreApplication::translate("InstanceSettingsPage", "Memor&y", nullptr));
        labelMinMem->setText(QCoreApplication::translate("InstanceSettingsPage", "Minimum memory allocation:", nullptr));
        labelMaxMem->setText(QCoreApplication::translate("InstanceSettingsPage", "Maximum memory allocation:", nullptr));
        labelPermgenNote->setText(QCoreApplication::translate("InstanceSettingsPage", "Note: Permgen is set automatically by Java 8 and later", nullptr));
#if QT_CONFIG(tooltip)
        minMemSpinBox->setToolTip(QCoreApplication::translate("InstanceSettingsPage", "The amount of memory Minecraft is started with.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        maxMemSpinBox->setToolTip(QCoreApplication::translate("InstanceSettingsPage", "The maximum amount of memory Minecraft is allowed to use.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        permGenSpinBox->setToolTip(QCoreApplication::translate("InstanceSettingsPage", "The amount of memory available to store loaded Java classes.", nullptr));
#endif // QT_CONFIG(tooltip)
        javaArgumentsGroupBox->setTitle(QCoreApplication::translate("InstanceSettingsPage", "Java argumen&ts", nullptr));
        windowSizeGroupBox->setTitle(QCoreApplication::translate("InstanceSettingsPage", "Game Window", nullptr));
        maximizedCheckBox->setText(QCoreApplication::translate("InstanceSettingsPage", "Start Minecraft maximized?", nullptr));
        labelWindowHeight->setText(QCoreApplication::translate("InstanceSettingsPage", "Window height:", nullptr));
        labelWindowWidth->setText(QCoreApplication::translate("InstanceSettingsPage", "Window width:", nullptr));
        consoleSettingsBox->setTitle(QCoreApplication::translate("InstanceSettingsPage", "Conso&le Settings", nullptr));
        showConsoleCheck->setText(QCoreApplication::translate("InstanceSettingsPage", "Show console while the game is running?", nullptr));
        autoCloseConsoleCheck->setText(QCoreApplication::translate("InstanceSettingsPage", "Automatically close console when the game quits?", nullptr));
        showConsoleErrorCheck->setText(QCoreApplication::translate("InstanceSettingsPage", "Show console when the game crashes?", nullptr));
        miscellaneousSettingsBox->setTitle(QCoreApplication::translate("InstanceSettingsPage", "Miscellaneous", nullptr));
        closeAfterLaunchCheck->setText(QCoreApplication::translate("InstanceSettingsPage", "Close the launcher after game window opens", nullptr));
        quitAfterGameStopCheck->setText(QCoreApplication::translate("InstanceSettingsPage", "Quit the launcher after game window closes", nullptr));
        settingsTabs->setTabText(settingsTabs->indexOf(javaTab), QCoreApplication::translate("InstanceSettingsPage", "Game windows", nullptr));
        settingsTabs->setTabText(settingsTabs->indexOf(tab), QCoreApplication::translate("InstanceSettingsPage", "Custom commands", nullptr));
        nativeWorkaroundsGroupBox->setTitle(QCoreApplication::translate("InstanceSettingsPage", "Native libraries", nullptr));
        useNativeGLFWCheck->setText(QCoreApplication::translate("InstanceSettingsPage", "Use system installation of GLFW", nullptr));
        useNativeOpenALCheck->setText(QCoreApplication::translate("InstanceSettingsPage", "Use system installation of OpenAL", nullptr));
        settingsTabs->setTabText(settingsTabs->indexOf(workaroundsPage), QCoreApplication::translate("InstanceSettingsPage", "Workarounds", nullptr));
        perfomanceGroupBox->setTitle(QCoreApplication::translate("InstanceSettingsPage", "Performance", nullptr));
#if QT_CONFIG(tooltip)
        enableFeralGamemodeCheck->setToolTip(QCoreApplication::translate("InstanceSettingsPage", "<html><head/><body><p>Enable Feral Interactive's GameMode, to potentially improve gaming performance.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        enableFeralGamemodeCheck->setText(QCoreApplication::translate("InstanceSettingsPage", "Enable Feral GameMode", nullptr));
#if QT_CONFIG(tooltip)
        enableMangoHud->setToolTip(QCoreApplication::translate("InstanceSettingsPage", "<html><head/><body><p>Enable MangoHud's advanced performance overlay.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        enableMangoHud->setText(QCoreApplication::translate("InstanceSettingsPage", "Enable MangoHud", nullptr));
#if QT_CONFIG(tooltip)
        useDiscreteGpuCheck->setToolTip(QCoreApplication::translate("InstanceSettingsPage", "<html><head/><body><p>Use the discrete GPU instead of the primary GPU.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        useDiscreteGpuCheck->setText(QCoreApplication::translate("InstanceSettingsPage", "Use discrete GPU", nullptr));
        settingsTabs->setTabText(settingsTabs->indexOf(performancePage), QCoreApplication::translate("InstanceSettingsPage", "Performance", nullptr));
        gameTimeGroupBox->setTitle(QCoreApplication::translate("InstanceSettingsPage", "Override global game time settings", nullptr));
        showGameTime->setText(QCoreApplication::translate("InstanceSettingsPage", "Show time spent playing this instance", nullptr));
        recordGameTime->setText(QCoreApplication::translate("InstanceSettingsPage", "Record time spent playing this instance", nullptr));
        serverJoinGroupBox->setTitle(QCoreApplication::translate("InstanceSettingsPage", "Set a server to join on launch", nullptr));
        serverJoinAddressLabel->setText(QCoreApplication::translate("InstanceSettingsPage", "Server address:", nullptr));
        instanceAccountGroupBox->setTitle(QCoreApplication::translate("InstanceSettingsPage", "Override default account", nullptr));
        instanceAccountNameLabel->setText(QCoreApplication::translate("InstanceSettingsPage", "Account:", nullptr));
        settingsTabs->setTabText(settingsTabs->indexOf(miscellaneousPage), QCoreApplication::translate("InstanceSettingsPage", "Miscellaneous", nullptr));
        (void)InstanceSettingsPage;
    } // retranslateUi

};

namespace Ui {
    class InstanceSettingsPage: public Ui_InstanceSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTANCESETTINGSPAGE_H
