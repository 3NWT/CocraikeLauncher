/********************************************************************************
** Form generated from reading UI file 'CustomCommands.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMCOMMANDS_H
#define UI_CUSTOMCOMMANDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomCommands
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *customCommandsGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *labelPostExitCmd;
    QLineEdit *preLaunchCmdTextBox;
    QLabel *labelPreLaunchCmd;
    QLineEdit *postExitCmdTextBox;
    QLabel *labelWrapperCmd;
    QLineEdit *wrapperCmdTextBox;
    QLabel *labelCustomCmdsDescription;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *CustomCommands)
    {
        if (CustomCommands->objectName().isEmpty())
            CustomCommands->setObjectName("CustomCommands");
        CustomCommands->resize(518, 646);
        verticalLayout = new QVBoxLayout(CustomCommands);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        customCommandsGroupBox = new QGroupBox(CustomCommands);
        customCommandsGroupBox->setObjectName("customCommandsGroupBox");
        customCommandsGroupBox->setEnabled(true);
        customCommandsGroupBox->setCheckable(true);
        customCommandsGroupBox->setChecked(false);
        gridLayout_4 = new QGridLayout(customCommandsGroupBox);
        gridLayout_4->setObjectName("gridLayout_4");
        labelPostExitCmd = new QLabel(customCommandsGroupBox);
        labelPostExitCmd->setObjectName("labelPostExitCmd");

        gridLayout_4->addWidget(labelPostExitCmd, 2, 0, 1, 1);

        preLaunchCmdTextBox = new QLineEdit(customCommandsGroupBox);
        preLaunchCmdTextBox->setObjectName("preLaunchCmdTextBox");

        gridLayout_4->addWidget(preLaunchCmdTextBox, 0, 1, 1, 1);

        labelPreLaunchCmd = new QLabel(customCommandsGroupBox);
        labelPreLaunchCmd->setObjectName("labelPreLaunchCmd");

        gridLayout_4->addWidget(labelPreLaunchCmd, 0, 0, 1, 1);

        postExitCmdTextBox = new QLineEdit(customCommandsGroupBox);
        postExitCmdTextBox->setObjectName("postExitCmdTextBox");

        gridLayout_4->addWidget(postExitCmdTextBox, 2, 1, 1, 1);

        labelWrapperCmd = new QLabel(customCommandsGroupBox);
        labelWrapperCmd->setObjectName("labelWrapperCmd");

        gridLayout_4->addWidget(labelWrapperCmd, 1, 0, 1, 1);

        wrapperCmdTextBox = new QLineEdit(customCommandsGroupBox);
        wrapperCmdTextBox->setObjectName("wrapperCmdTextBox");

        gridLayout_4->addWidget(wrapperCmdTextBox, 1, 1, 1, 1);


        verticalLayout->addWidget(customCommandsGroupBox);

        labelCustomCmdsDescription = new QLabel(CustomCommands);
        labelCustomCmdsDescription->setObjectName("labelCustomCmdsDescription");
        labelCustomCmdsDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelCustomCmdsDescription->setWordWrap(true);
        labelCustomCmdsDescription->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(labelCustomCmdsDescription);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#if QT_CONFIG(shortcut)
        labelPostExitCmd->setBuddy(postExitCmdTextBox);
        labelPreLaunchCmd->setBuddy(preLaunchCmdTextBox);
        labelWrapperCmd->setBuddy(wrapperCmdTextBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(CustomCommands);

        QMetaObject::connectSlotsByName(CustomCommands);
    } // setupUi

    void retranslateUi(QWidget *CustomCommands)
    {
        customCommandsGroupBox->setTitle(QCoreApplication::translate("CustomCommands", "&Custom Commands", nullptr));
        labelPostExitCmd->setText(QCoreApplication::translate("CustomCommands", "P&ost-exit command:", nullptr));
        labelPreLaunchCmd->setText(QCoreApplication::translate("CustomCommands", "&Pre-launch command:", nullptr));
        labelWrapperCmd->setText(QCoreApplication::translate("CustomCommands", "&Wrapper command:", nullptr));
        labelCustomCmdsDescription->setText(QCoreApplication::translate("CustomCommands", "<html><head/><body><p>Pre-launch command runs before the instance launches and post-exit command runs after it exits.</p><p>Both will be run in the launcher's working folder with extra environment variables:</p><ul><li>$INST_NAME - Name of the instance</li><li>$INST_ID - ID of the instance (its folder name)</li><li>$INST_DIR - absolute path of the instance</li><li>$INST_MC_DIR - absolute path of Minecraft</li><li>$INST_JAVA - Java binary used for launch</li><li>$INST_JAVA_ARGS - command-line parameters used for launch (warning: will not work correctly if arguments contain spaces)</li></ul><p>Wrapper command allows launching using an extra wrapper program (like 'optirun' on Linux)</p></body></html>", nullptr));
        (void)CustomCommands;
    } // retranslateUi

};

namespace Ui {
    class CustomCommands: public Ui_CustomCommands {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMCOMMANDS_H
