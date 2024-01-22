/********************************************************************************
** Form generated from reading UI file 'JavaPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JAVAPAGE_H
#define UI_JAVAPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JavaPage
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *memoryGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *labelMaxMem;
    QLabel *labelPermGen;
    QLabel *labelMinMem;
    QSpinBox *minMemSpinBox;
    QSpinBox *maxMemSpinBox;
    QSpinBox *permGenSpinBox;
    QLabel *labelMaxMemIcon;
    QGroupBox *javaSettingsGroupBox;
    QGridLayout *gridLayout_3;
    QPushButton *javaDetectBtn;
    QLabel *labelJVMArgs;
    QLabel *labelJavaPath;
    QPushButton *javaTestBtn;
    QHBoxLayout *horizontalLayout;
    QLineEdit *javaPathTextBox;
    QPushButton *javaBrowseBtn;
    QCheckBox *skipCompatibilityCheckbox;
    QCheckBox *skipJavaWizardCheckbox;
    QPlainTextEdit *jvmArgsTextBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *JavaPage)
    {
        if (JavaPage->objectName().isEmpty())
            JavaPage->setObjectName("JavaPage");
        JavaPage->resize(545, 580);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JavaPage->sizePolicy().hasHeightForWidth());
        JavaPage->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(JavaPage);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(JavaPage);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        memoryGroupBox = new QGroupBox(tab);
        memoryGroupBox->setObjectName("memoryGroupBox");
        gridLayout_2 = new QGridLayout(memoryGroupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        labelMaxMem = new QLabel(memoryGroupBox);
        labelMaxMem->setObjectName("labelMaxMem");

        gridLayout_2->addWidget(labelMaxMem, 1, 0, 1, 1);

        labelPermGen = new QLabel(memoryGroupBox);
        labelPermGen->setObjectName("labelPermGen");
        labelPermGen->setText(QString::fromUtf8("&PermGen:"));

        gridLayout_2->addWidget(labelPermGen, 2, 0, 1, 1);

        labelMinMem = new QLabel(memoryGroupBox);
        labelMinMem->setObjectName("labelMinMem");

        gridLayout_2->addWidget(labelMinMem, 0, 0, 1, 1);

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

        gridLayout_2->addWidget(labelMaxMemIcon, 1, 3, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);

        verticalLayout_2->addWidget(memoryGroupBox);

        javaSettingsGroupBox = new QGroupBox(tab);
        javaSettingsGroupBox->setObjectName("javaSettingsGroupBox");
        gridLayout_3 = new QGridLayout(javaSettingsGroupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        javaDetectBtn = new QPushButton(javaSettingsGroupBox);
        javaDetectBtn->setObjectName("javaDetectBtn");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(javaDetectBtn->sizePolicy().hasHeightForWidth());
        javaDetectBtn->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(javaDetectBtn, 3, 1, 1, 1);

        labelJVMArgs = new QLabel(javaSettingsGroupBox);
        labelJVMArgs->setObjectName("labelJVMArgs");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelJVMArgs->sizePolicy().hasHeightForWidth());
        labelJVMArgs->setSizePolicy(sizePolicy2);
        labelJVMArgs->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(labelJVMArgs, 2, 0, 1, 1);

        labelJavaPath = new QLabel(javaSettingsGroupBox);
        labelJavaPath->setObjectName("labelJavaPath");
        sizePolicy2.setHeightForWidth(labelJavaPath->sizePolicy().hasHeightForWidth());
        labelJavaPath->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(labelJavaPath, 0, 0, 1, 1);

        javaTestBtn = new QPushButton(javaSettingsGroupBox);
        javaTestBtn->setObjectName("javaTestBtn");
        sizePolicy1.setHeightForWidth(javaTestBtn->sizePolicy().hasHeightForWidth());
        javaTestBtn->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(javaTestBtn, 3, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        javaPathTextBox = new QLineEdit(javaSettingsGroupBox);
        javaPathTextBox->setObjectName("javaPathTextBox");

        horizontalLayout->addWidget(javaPathTextBox);

        javaBrowseBtn = new QPushButton(javaSettingsGroupBox);
        javaBrowseBtn->setObjectName("javaBrowseBtn");
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(javaBrowseBtn->sizePolicy().hasHeightForWidth());
        javaBrowseBtn->setSizePolicy(sizePolicy3);
        javaBrowseBtn->setMaximumSize(QSize(28, 16777215));
        javaBrowseBtn->setText(QString::fromUtf8("..."));

        horizontalLayout->addWidget(javaBrowseBtn);


        gridLayout_3->addLayout(horizontalLayout, 0, 1, 1, 2);

        skipCompatibilityCheckbox = new QCheckBox(javaSettingsGroupBox);
        skipCompatibilityCheckbox->setObjectName("skipCompatibilityCheckbox");
        sizePolicy1.setHeightForWidth(skipCompatibilityCheckbox->sizePolicy().hasHeightForWidth());
        skipCompatibilityCheckbox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(skipCompatibilityCheckbox, 4, 1, 1, 1);

        skipJavaWizardCheckbox = new QCheckBox(javaSettingsGroupBox);
        skipJavaWizardCheckbox->setObjectName("skipJavaWizardCheckbox");

        gridLayout_3->addWidget(skipJavaWizardCheckbox, 5, 1, 1, 1);

        jvmArgsTextBox = new QPlainTextEdit(javaSettingsGroupBox);
        jvmArgsTextBox->setObjectName("jvmArgsTextBox");
        jvmArgsTextBox->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(jvmArgsTextBox->sizePolicy().hasHeightForWidth());
        jvmArgsTextBox->setSizePolicy(sizePolicy4);
        jvmArgsTextBox->setMaximumSize(QSize(16777215, 100));

        gridLayout_3->addWidget(jvmArgsTextBox, 2, 1, 1, 2);


        verticalLayout_2->addWidget(javaSettingsGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QString::fromUtf8("Tab 1"));

        verticalLayout->addWidget(tabWidget);

#if QT_CONFIG(shortcut)
        labelMaxMem->setBuddy(maxMemSpinBox);
        labelPermGen->setBuddy(permGenSpinBox);
        labelMinMem->setBuddy(minMemSpinBox);
        labelMaxMemIcon->setBuddy(maxMemSpinBox);
        labelJavaPath->setBuddy(javaPathTextBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(minMemSpinBox, maxMemSpinBox);
        QWidget::setTabOrder(maxMemSpinBox, permGenSpinBox);
        QWidget::setTabOrder(permGenSpinBox, javaBrowseBtn);
        QWidget::setTabOrder(javaBrowseBtn, javaPathTextBox);
        QWidget::setTabOrder(javaPathTextBox, javaDetectBtn);
        QWidget::setTabOrder(javaDetectBtn, javaTestBtn);
        QWidget::setTabOrder(javaTestBtn, tabWidget);

        retranslateUi(JavaPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(JavaPage);
    } // setupUi

    void retranslateUi(QWidget *JavaPage)
    {
        memoryGroupBox->setTitle(QCoreApplication::translate("JavaPage", "Memory", nullptr));
        labelMaxMem->setText(QCoreApplication::translate("JavaPage", "Ma&ximum memory allocation:", nullptr));
        labelMinMem->setText(QCoreApplication::translate("JavaPage", "&Minimum memory allocation:", nullptr));
#if QT_CONFIG(tooltip)
        minMemSpinBox->setToolTip(QCoreApplication::translate("JavaPage", "The amount of memory Minecraft is started with.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        maxMemSpinBox->setToolTip(QCoreApplication::translate("JavaPage", "The maximum amount of memory Minecraft is allowed to use.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        permGenSpinBox->setToolTip(QCoreApplication::translate("JavaPage", "The amount of memory available to store loaded Java classes.", nullptr));
#endif // QT_CONFIG(tooltip)
        labelMaxMemIcon->setText(QString());
        javaSettingsGroupBox->setTitle(QCoreApplication::translate("JavaPage", "Java Runtime", nullptr));
        javaDetectBtn->setText(QCoreApplication::translate("JavaPage", "&Auto-detect...", nullptr));
        labelJVMArgs->setText(QCoreApplication::translate("JavaPage", "JVM arguments:", nullptr));
        labelJavaPath->setText(QCoreApplication::translate("JavaPage", "&Java path:", nullptr));
        javaTestBtn->setText(QCoreApplication::translate("JavaPage", "&Test", nullptr));
#if QT_CONFIG(tooltip)
        skipCompatibilityCheckbox->setToolTip(QCoreApplication::translate("JavaPage", "If enabled, the launcher will not check if an instance is compatible with the selected Java version.", nullptr));
#endif // QT_CONFIG(tooltip)
        skipCompatibilityCheckbox->setText(QCoreApplication::translate("JavaPage", "&Skip Java compatibility checks", nullptr));
#if QT_CONFIG(tooltip)
        skipJavaWizardCheckbox->setToolTip(QCoreApplication::translate("JavaPage", "If enabled, the launcher will not prompt you to choose a Java version if one isn't found.", nullptr));
#endif // QT_CONFIG(tooltip)
        skipJavaWizardCheckbox->setText(QCoreApplication::translate("JavaPage", "Skip Java &Wizard", nullptr));
        (void)JavaPage;
    } // retranslateUi

};

namespace Ui {
    class JavaPage: public Ui_JavaPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JAVAPAGE_H
