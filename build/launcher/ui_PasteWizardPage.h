/********************************************************************************
** Form generated from reading UI file 'PasteWizardPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASTEWIZARDPAGE_H
#define UI_PASTEWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PasteWizardPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QRadioButton *defaultSettingsRadioButton;
    QRadioButton *previousSettingsRadioButton;
    QSpacerItem *verticalSpacer;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *PasteWizardPage)
    {
        if (PasteWizardPage->objectName().isEmpty())
            PasteWizardPage->setObjectName("PasteWizardPage");
        PasteWizardPage->resize(400, 300);
        verticalLayout = new QVBoxLayout(PasteWizardPage);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(PasteWizardPage);
        label->setObjectName("label");
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        line = new QFrame(PasteWizardPage);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        defaultSettingsRadioButton = new QRadioButton(PasteWizardPage);
        buttonGroup = new QButtonGroup(PasteWizardPage);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(defaultSettingsRadioButton);
        defaultSettingsRadioButton->setObjectName("defaultSettingsRadioButton");
        defaultSettingsRadioButton->setChecked(true);

        verticalLayout->addWidget(defaultSettingsRadioButton);

        previousSettingsRadioButton = new QRadioButton(PasteWizardPage);
        buttonGroup->addButton(previousSettingsRadioButton);
        previousSettingsRadioButton->setObjectName("previousSettingsRadioButton");
        previousSettingsRadioButton->setChecked(false);

        verticalLayout->addWidget(previousSettingsRadioButton);

        verticalSpacer = new QSpacerItem(20, 156, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(PasteWizardPage);

        QMetaObject::connectSlotsByName(PasteWizardPage);
    } // setupUi

    void retranslateUi(QWidget *PasteWizardPage)
    {
        PasteWizardPage->setWindowTitle(QCoreApplication::translate("PasteWizardPage", "Form", nullptr));
        label->setText(QCoreApplication::translate("PasteWizardPage", "The default paste service has changed to mclo.gs, please choose what you want to do with your settings.", nullptr));
        defaultSettingsRadioButton->setText(QCoreApplication::translate("PasteWizardPage", "Use new default service", nullptr));
        previousSettingsRadioButton->setText(QCoreApplication::translate("PasteWizardPage", "Keep previous settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PasteWizardPage: public Ui_PasteWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASTEWIZARDPAGE_H
