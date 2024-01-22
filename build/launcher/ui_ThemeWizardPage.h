/********************************************************************************
** Form generated from reading UI file 'ThemeWizardPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEMEWIZARDPAGE_H
#define UI_THEMEWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>
#include "ui/widgets/ThemeCustomizationWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ThemeWizardPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    ThemeCustomizationWidget *themeCustomizationWidget;
    QLabel *label_2;
    QFrame *line;
    QLabel *label_4;
    QGridLayout *iconPreview;
    QPushButton *previewIconButton2;
    QPushButton *previewIconButton5;
    QPushButton *previewIconButton7;
    QPushButton *previewIconButton4;
    QPushButton *previewIconButton1;
    QPushButton *previewIconButton0;
    QPushButton *previewIconButton9;
    QPushButton *previewIconButton6;
    QPushButton *previewIconButton3;
    QPushButton *previewIconButton8;
    QPushButton *catImagePreviewButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWizardPage *ThemeWizardPage)
    {
        if (ThemeWizardPage->objectName().isEmpty())
            ThemeWizardPage->setObjectName("ThemeWizardPage");
        ThemeWizardPage->resize(510, 552);
        verticalLayout_2 = new QVBoxLayout(ThemeWizardPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(ThemeWizardPage);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        themeCustomizationWidget = new ThemeCustomizationWidget(ThemeWizardPage);
        themeCustomizationWidget->setObjectName("themeCustomizationWidget");
        themeCustomizationWidget->setMinimumSize(QSize(0, 100));

        verticalLayout_2->addWidget(themeCustomizationWidget);

        label_2 = new QLabel(ThemeWizardPage);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(true);

        verticalLayout_2->addWidget(label_2);

        line = new QFrame(ThemeWizardPage);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        label_4 = new QLabel(ThemeWizardPage);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        iconPreview = new QGridLayout();
        iconPreview->setObjectName("iconPreview");
        previewIconButton2 = new QPushButton(ThemeWizardPage);
        previewIconButton2->setObjectName("previewIconButton2");
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(previewIconButton2->sizePolicy().hasHeightForWidth());
        previewIconButton2->setSizePolicy(sizePolicy);
        previewIconButton2->setMinimumSize(QSize(30, 30));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("applications-engineering");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        previewIconButton2->setIcon(icon);
        previewIconButton2->setCheckable(false);
        previewIconButton2->setFlat(true);

        iconPreview->addWidget(previewIconButton2, 0, 2, 1, 1);

        previewIconButton5 = new QPushButton(ThemeWizardPage);
        previewIconButton5->setObjectName("previewIconButton5");
        sizePolicy.setHeightForWidth(previewIconButton5->sizePolicy().hasHeightForWidth());
        previewIconButton5->setSizePolicy(sizePolicy);
        previewIconButton5->setMinimumSize(QSize(30, 30));
        previewIconButton5->setIcon(icon);
        previewIconButton5->setCheckable(false);
        previewIconButton5->setFlat(true);

        iconPreview->addWidget(previewIconButton5, 0, 5, 1, 1);

        previewIconButton7 = new QPushButton(ThemeWizardPage);
        previewIconButton7->setObjectName("previewIconButton7");
        sizePolicy.setHeightForWidth(previewIconButton7->sizePolicy().hasHeightForWidth());
        previewIconButton7->setSizePolicy(sizePolicy);
        previewIconButton7->setMinimumSize(QSize(30, 30));
        previewIconButton7->setIcon(icon);
        previewIconButton7->setCheckable(false);
        previewIconButton7->setFlat(true);

        iconPreview->addWidget(previewIconButton7, 0, 7, 1, 1);

        previewIconButton4 = new QPushButton(ThemeWizardPage);
        previewIconButton4->setObjectName("previewIconButton4");
        sizePolicy.setHeightForWidth(previewIconButton4->sizePolicy().hasHeightForWidth());
        previewIconButton4->setSizePolicy(sizePolicy);
        previewIconButton4->setMinimumSize(QSize(30, 30));
        previewIconButton4->setIcon(icon);
        previewIconButton4->setCheckable(false);
        previewIconButton4->setFlat(true);

        iconPreview->addWidget(previewIconButton4, 0, 4, 1, 1);

        previewIconButton1 = new QPushButton(ThemeWizardPage);
        previewIconButton1->setObjectName("previewIconButton1");
        sizePolicy.setHeightForWidth(previewIconButton1->sizePolicy().hasHeightForWidth());
        previewIconButton1->setSizePolicy(sizePolicy);
        previewIconButton1->setMinimumSize(QSize(30, 30));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("centralmods");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        previewIconButton1->setIcon(icon1);
        previewIconButton1->setCheckable(false);
        previewIconButton1->setFlat(true);

        iconPreview->addWidget(previewIconButton1, 0, 1, 1, 1);

        previewIconButton0 = new QPushButton(ThemeWizardPage);
        previewIconButton0->setObjectName("previewIconButton0");
        sizePolicy.setHeightForWidth(previewIconButton0->sizePolicy().hasHeightForWidth());
        previewIconButton0->setSizePolicy(sizePolicy);
        previewIconButton0->setMinimumSize(QSize(30, 30));
        previewIconButton0->setIcon(icon);
        previewIconButton0->setCheckable(false);
        previewIconButton0->setFlat(true);

        iconPreview->addWidget(previewIconButton0, 0, 0, 1, 1);

        previewIconButton9 = new QPushButton(ThemeWizardPage);
        previewIconButton9->setObjectName("previewIconButton9");
        sizePolicy.setHeightForWidth(previewIconButton9->sizePolicy().hasHeightForWidth());
        previewIconButton9->setSizePolicy(sizePolicy);
        previewIconButton9->setMinimumSize(QSize(30, 30));
        QIcon icon2;
        iconThemeName = QString::fromUtf8("viewfolder");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        previewIconButton9->setIcon(icon2);
        previewIconButton9->setCheckable(false);
        previewIconButton9->setFlat(true);

        iconPreview->addWidget(previewIconButton9, 0, 9, 1, 1);

        previewIconButton6 = new QPushButton(ThemeWizardPage);
        previewIconButton6->setObjectName("previewIconButton6");
        sizePolicy.setHeightForWidth(previewIconButton6->sizePolicy().hasHeightForWidth());
        previewIconButton6->setSizePolicy(sizePolicy);
        previewIconButton6->setMinimumSize(QSize(30, 30));
        QIcon icon3;
        iconThemeName = QString::fromUtf8("new");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        previewIconButton6->setIcon(icon3);
        previewIconButton6->setCheckable(false);
        previewIconButton6->setFlat(true);

        iconPreview->addWidget(previewIconButton6, 0, 6, 1, 1);

        previewIconButton3 = new QPushButton(ThemeWizardPage);
        previewIconButton3->setObjectName("previewIconButton3");
        sizePolicy.setHeightForWidth(previewIconButton3->sizePolicy().hasHeightForWidth());
        previewIconButton3->setSizePolicy(sizePolicy);
        previewIconButton3->setMinimumSize(QSize(30, 30));
        previewIconButton3->setIcon(icon);
        previewIconButton3->setCheckable(false);
        previewIconButton3->setFlat(true);

        iconPreview->addWidget(previewIconButton3, 0, 3, 1, 1);

        previewIconButton8 = new QPushButton(ThemeWizardPage);
        previewIconButton8->setObjectName("previewIconButton8");
        sizePolicy.setHeightForWidth(previewIconButton8->sizePolicy().hasHeightForWidth());
        previewIconButton8->setSizePolicy(sizePolicy);
        previewIconButton8->setMinimumSize(QSize(30, 30));
        previewIconButton8->setIcon(icon);
        previewIconButton8->setCheckable(false);
        previewIconButton8->setFlat(true);

        iconPreview->addWidget(previewIconButton8, 0, 8, 1, 1);


        verticalLayout_2->addLayout(iconPreview);

        catImagePreviewButton = new QPushButton(ThemeWizardPage);
        catImagePreviewButton->setObjectName("catImagePreviewButton");
        catImagePreviewButton->setMinimumSize(QSize(0, 256));
        catImagePreviewButton->setIconSize(QSize(256, 256));
        catImagePreviewButton->setFlat(true);

        verticalLayout_2->addWidget(catImagePreviewButton);

        verticalSpacer = new QSpacerItem(20, 193, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(ThemeWizardPage);

        QMetaObject::connectSlotsByName(ThemeWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *ThemeWizardPage)
    {
        ThemeWizardPage->setWindowTitle(QCoreApplication::translate("ThemeWizardPage", "WizardPage", nullptr));
        label->setText(QCoreApplication::translate("ThemeWizardPage", "Select the Theme you wish to use", nullptr));
        label_2->setText(QCoreApplication::translate("ThemeWizardPage", "Hint: The cat appears in the background and is not shown by default. It is only made visible when pressing the Cat button in the Toolbar.", nullptr));
        label_4->setText(QCoreApplication::translate("ThemeWizardPage", " Preview:", nullptr));
#if QT_CONFIG(tooltip)
        catImagePreviewButton->setToolTip(QCoreApplication::translate("ThemeWizardPage", "The cat appears in the background and does not serve a purpose, it is purely visual.", nullptr));
#endif // QT_CONFIG(tooltip)
        catImagePreviewButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ThemeWizardPage: public Ui_ThemeWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEMEWIZARDPAGE_H
