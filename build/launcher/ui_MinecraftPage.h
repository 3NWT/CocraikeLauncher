/********************************************************************************
** Form generated from reading UI file 'MinecraftPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINECRAFTPAGE_H
#define UI_MINECRAFTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MinecraftPage
{
public:
    QVBoxLayout *mainLayout;
    QTabWidget *tabWidget;
    QWidget *minecraftTab;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *windowSizeGroupBox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *maximizedCheckBox;
    QGridLayout *gridLayoutWindowSize;
    QLabel *labelWindowHeight;
    QLabel *labelWindowWidth;
    QSpinBox *windowWidthSpinBox;
    QSpinBox *windowHeightSpinBox;
    QGroupBox *nativeLibWorkaroundGroupBox;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *useNativeGLFWCheck;
    QCheckBox *useNativeOpenALCheck;
    QGroupBox *perfomanceGroupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *enableFeralGamemodeCheck;
    QCheckBox *enableMangoHud;
    QCheckBox *useDiscreteGpuCheck;
    QGroupBox *gameTimeGroupBox;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *showGameTime;
    QCheckBox *showGlobalGameTime;
    QCheckBox *recordGameTime;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *closeAfterLaunchCheck;
    QCheckBox *quitAfterGameStopCheck;
    QSpacerItem *verticalSpacerMinecraft;

    void setupUi(QWidget *MinecraftPage)
    {
        if (MinecraftPage->objectName().isEmpty())
            MinecraftPage->setObjectName("MinecraftPage");
        MinecraftPage->resize(936, 1134);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MinecraftPage->sizePolicy().hasHeightForWidth());
        MinecraftPage->setSizePolicy(sizePolicy);
        mainLayout = new QVBoxLayout(MinecraftPage);
        mainLayout->setObjectName("mainLayout");
        mainLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(MinecraftPage);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setTabShape(QTabWidget::Rounded);
        minecraftTab = new QWidget();
        minecraftTab->setObjectName("minecraftTab");
        verticalLayout_3 = new QVBoxLayout(minecraftTab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        windowSizeGroupBox = new QGroupBox(minecraftTab);
        windowSizeGroupBox->setObjectName("windowSizeGroupBox");
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

        nativeLibWorkaroundGroupBox = new QGroupBox(minecraftTab);
        nativeLibWorkaroundGroupBox->setObjectName("nativeLibWorkaroundGroupBox");
        verticalLayout_5 = new QVBoxLayout(nativeLibWorkaroundGroupBox);
        verticalLayout_5->setObjectName("verticalLayout_5");
        useNativeGLFWCheck = new QCheckBox(nativeLibWorkaroundGroupBox);
        useNativeGLFWCheck->setObjectName("useNativeGLFWCheck");

        verticalLayout_5->addWidget(useNativeGLFWCheck);

        useNativeOpenALCheck = new QCheckBox(nativeLibWorkaroundGroupBox);
        useNativeOpenALCheck->setObjectName("useNativeOpenALCheck");

        verticalLayout_5->addWidget(useNativeOpenALCheck);


        verticalLayout_3->addWidget(nativeLibWorkaroundGroupBox);

        perfomanceGroupBox = new QGroupBox(minecraftTab);
        perfomanceGroupBox->setObjectName("perfomanceGroupBox");
        verticalLayout_2 = new QVBoxLayout(perfomanceGroupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        enableFeralGamemodeCheck = new QCheckBox(perfomanceGroupBox);
        enableFeralGamemodeCheck->setObjectName("enableFeralGamemodeCheck");

        verticalLayout_2->addWidget(enableFeralGamemodeCheck);

        enableMangoHud = new QCheckBox(perfomanceGroupBox);
        enableMangoHud->setObjectName("enableMangoHud");

        verticalLayout_2->addWidget(enableMangoHud);

        useDiscreteGpuCheck = new QCheckBox(perfomanceGroupBox);
        useDiscreteGpuCheck->setObjectName("useDiscreteGpuCheck");

        verticalLayout_2->addWidget(useDiscreteGpuCheck);


        verticalLayout_3->addWidget(perfomanceGroupBox);

        gameTimeGroupBox = new QGroupBox(minecraftTab);
        gameTimeGroupBox->setObjectName("gameTimeGroupBox");
        verticalLayout_6 = new QVBoxLayout(gameTimeGroupBox);
        verticalLayout_6->setObjectName("verticalLayout_6");
        showGameTime = new QCheckBox(gameTimeGroupBox);
        showGameTime->setObjectName("showGameTime");

        verticalLayout_6->addWidget(showGameTime);

        showGlobalGameTime = new QCheckBox(gameTimeGroupBox);
        showGlobalGameTime->setObjectName("showGlobalGameTime");

        verticalLayout_6->addWidget(showGlobalGameTime);

        recordGameTime = new QCheckBox(gameTimeGroupBox);
        recordGameTime->setObjectName("recordGameTime");

        verticalLayout_6->addWidget(recordGameTime);


        verticalLayout_3->addWidget(gameTimeGroupBox);

        groupBox = new QGroupBox(minecraftTab);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        closeAfterLaunchCheck = new QCheckBox(groupBox);
        closeAfterLaunchCheck->setObjectName("closeAfterLaunchCheck");

        verticalLayout->addWidget(closeAfterLaunchCheck);

        quitAfterGameStopCheck = new QCheckBox(groupBox);
        quitAfterGameStopCheck->setObjectName("quitAfterGameStopCheck");

        verticalLayout->addWidget(quitAfterGameStopCheck);


        verticalLayout_3->addWidget(groupBox);

        verticalSpacerMinecraft = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacerMinecraft);

        tabWidget->addTab(minecraftTab, QString());
        tabWidget->setTabText(tabWidget->indexOf(minecraftTab), QString::fromUtf8("Minecraft"));

        mainLayout->addWidget(tabWidget);

#if QT_CONFIG(shortcut)
        labelWindowHeight->setBuddy(windowHeightSpinBox);
        labelWindowWidth->setBuddy(windowWidthSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(maximizedCheckBox, windowWidthSpinBox);
        QWidget::setTabOrder(windowWidthSpinBox, windowHeightSpinBox);
        QWidget::setTabOrder(windowHeightSpinBox, useNativeGLFWCheck);
        QWidget::setTabOrder(useNativeGLFWCheck, useNativeOpenALCheck);
        QWidget::setTabOrder(useNativeOpenALCheck, enableFeralGamemodeCheck);
        QWidget::setTabOrder(enableFeralGamemodeCheck, enableMangoHud);
        QWidget::setTabOrder(enableMangoHud, useDiscreteGpuCheck);

        retranslateUi(MinecraftPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MinecraftPage);
    } // setupUi

    void retranslateUi(QWidget *MinecraftPage)
    {
        windowSizeGroupBox->setTitle(QCoreApplication::translate("MinecraftPage", "Window Size", nullptr));
        maximizedCheckBox->setText(QCoreApplication::translate("MinecraftPage", "Start Minecraft &maximized?", nullptr));
        labelWindowHeight->setText(QCoreApplication::translate("MinecraftPage", "Window &height:", nullptr));
        labelWindowWidth->setText(QCoreApplication::translate("MinecraftPage", "Window &width:", nullptr));
        nativeLibWorkaroundGroupBox->setTitle(QCoreApplication::translate("MinecraftPage", "Native library workarounds", nullptr));
        useNativeGLFWCheck->setText(QCoreApplication::translate("MinecraftPage", "Use system installation of &GLFW", nullptr));
        useNativeOpenALCheck->setText(QCoreApplication::translate("MinecraftPage", "Use system installation of &OpenAL", nullptr));
        perfomanceGroupBox->setTitle(QCoreApplication::translate("MinecraftPage", "Performance", nullptr));
#if QT_CONFIG(tooltip)
        enableFeralGamemodeCheck->setToolTip(QCoreApplication::translate("MinecraftPage", "<html><head/><body><p>Enable Feral Interactive's GameMode, to potentially improve gaming performance.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        enableFeralGamemodeCheck->setText(QCoreApplication::translate("MinecraftPage", "Enable Feral GameMode", nullptr));
#if QT_CONFIG(tooltip)
        enableMangoHud->setToolTip(QCoreApplication::translate("MinecraftPage", "<html><head/><body><p>Enable MangoHud's advanced performance overlay.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        enableMangoHud->setText(QCoreApplication::translate("MinecraftPage", "Enable MangoHud", nullptr));
#if QT_CONFIG(tooltip)
        useDiscreteGpuCheck->setToolTip(QCoreApplication::translate("MinecraftPage", "<html><head/><body><p>Use the discrete GPU instead of the primary GPU.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        useDiscreteGpuCheck->setText(QCoreApplication::translate("MinecraftPage", "Use discrete GPU", nullptr));
        gameTimeGroupBox->setTitle(QCoreApplication::translate("MinecraftPage", "Game time", nullptr));
        showGameTime->setText(QCoreApplication::translate("MinecraftPage", "Show time spent &playing instances", nullptr));
        showGlobalGameTime->setText(QCoreApplication::translate("MinecraftPage", "Show time spent playing across &all instances", nullptr));
        recordGameTime->setText(QCoreApplication::translate("MinecraftPage", "&Record time spent playing instances", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MinecraftPage", "Miscellaneous", nullptr));
#if QT_CONFIG(tooltip)
        closeAfterLaunchCheck->setToolTip(QCoreApplication::translate("MinecraftPage", "<html><head/><body><p>The launcher will automatically reopen when the game crashes or exits.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        closeAfterLaunchCheck->setText(QCoreApplication::translate("MinecraftPage", "&Close the launcher after game window opens", nullptr));
#if QT_CONFIG(tooltip)
        quitAfterGameStopCheck->setToolTip(QCoreApplication::translate("MinecraftPage", "<html><head/><body><p>The launcher will automatically quit after the game exits or crashes.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        quitAfterGameStopCheck->setText(QCoreApplication::translate("MinecraftPage", "&Quit the launcher after game window closes", nullptr));
        (void)MinecraftPage;
    } // retranslateUi

};

namespace Ui {
    class MinecraftPage: public Ui_MinecraftPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINECRAFTPAGE_H
