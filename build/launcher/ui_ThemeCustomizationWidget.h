/********************************************************************************
** Form generated from reading UI file 'ThemeCustomizationWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEMECUSTOMIZATIONWIDGET_H
#define UI_THEMECUSTOMIZATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThemeCustomizationWidget
{
public:
    QFormLayout *formLayout;
    QLabel *iconsLabel;
    QComboBox *iconsComboBox;
    QLabel *widgetThemeLabel;
    QComboBox *widgetStyleComboBox;
    QLabel *backgroundCatLabel;
    QHBoxLayout *horizontalLayout;
    QComboBox *backgroundCatComboBox;
    QPushButton *catInfoLabel;

    void setupUi(QWidget *ThemeCustomizationWidget)
    {
        if (ThemeCustomizationWidget->objectName().isEmpty())
            ThemeCustomizationWidget->setObjectName("ThemeCustomizationWidget");
        ThemeCustomizationWidget->resize(400, 191);
        ThemeCustomizationWidget->setWindowTitle(QString::fromUtf8("Form"));
        formLayout = new QFormLayout(ThemeCustomizationWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setSizeConstraint(QLayout::SetMinimumSize);
        formLayout->setContentsMargins(0, 0, 0, 0);
        iconsLabel = new QLabel(ThemeCustomizationWidget);
        iconsLabel->setObjectName("iconsLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, iconsLabel);

        iconsComboBox = new QComboBox(ThemeCustomizationWidget);
        iconsComboBox->setObjectName("iconsComboBox");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(iconsComboBox->sizePolicy().hasHeightForWidth());
        iconsComboBox->setSizePolicy(sizePolicy);
        iconsComboBox->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(0, QFormLayout::FieldRole, iconsComboBox);

        widgetThemeLabel = new QLabel(ThemeCustomizationWidget);
        widgetThemeLabel->setObjectName("widgetThemeLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, widgetThemeLabel);

        widgetStyleComboBox = new QComboBox(ThemeCustomizationWidget);
        widgetStyleComboBox->setObjectName("widgetStyleComboBox");
        sizePolicy.setHeightForWidth(widgetStyleComboBox->sizePolicy().hasHeightForWidth());
        widgetStyleComboBox->setSizePolicy(sizePolicy);
        widgetStyleComboBox->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(1, QFormLayout::FieldRole, widgetStyleComboBox);

        backgroundCatLabel = new QLabel(ThemeCustomizationWidget);
        backgroundCatLabel->setObjectName("backgroundCatLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, backgroundCatLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        backgroundCatComboBox = new QComboBox(ThemeCustomizationWidget);
        backgroundCatComboBox->setObjectName("backgroundCatComboBox");
        sizePolicy.setHeightForWidth(backgroundCatComboBox->sizePolicy().hasHeightForWidth());
        backgroundCatComboBox->setSizePolicy(sizePolicy);
        backgroundCatComboBox->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(backgroundCatComboBox);

        catInfoLabel = new QPushButton(ThemeCustomizationWidget);
        catInfoLabel->setObjectName("catInfoLabel");
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("about");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        catInfoLabel->setIcon(icon);
        catInfoLabel->setFlat(true);

        horizontalLayout->addWidget(catInfoLabel);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

#if QT_CONFIG(shortcut)
        iconsLabel->setBuddy(iconsComboBox);
        widgetThemeLabel->setBuddy(widgetStyleComboBox);
        backgroundCatLabel->setBuddy(backgroundCatComboBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ThemeCustomizationWidget);

        QMetaObject::connectSlotsByName(ThemeCustomizationWidget);
    } // setupUi

    void retranslateUi(QWidget *ThemeCustomizationWidget)
    {
        iconsLabel->setText(QCoreApplication::translate("ThemeCustomizationWidget", "&Icons", nullptr));
        widgetThemeLabel->setText(QCoreApplication::translate("ThemeCustomizationWidget", "&Colors", nullptr));
#if QT_CONFIG(tooltip)
        backgroundCatLabel->setToolTip(QCoreApplication::translate("ThemeCustomizationWidget", "The cat appears in the background and is not shown by default. It is only made visible when pressing the Cat button in the Toolbar.", nullptr));
#endif // QT_CONFIG(tooltip)
        backgroundCatLabel->setText(QCoreApplication::translate("ThemeCustomizationWidget", "C&at", nullptr));
#if QT_CONFIG(tooltip)
        backgroundCatComboBox->setToolTip(QCoreApplication::translate("ThemeCustomizationWidget", "The cat appears in the background and is not shown by default. It is only made visible when pressing the Cat button in the Toolbar.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        catInfoLabel->setToolTip(QCoreApplication::translate("ThemeCustomizationWidget", "The cat appears in the background and is not shown by default. It is only made visible when pressing the Cat button in the Toolbar.", nullptr));
#endif // QT_CONFIG(tooltip)
        catInfoLabel->setText(QString());
        (void)ThemeCustomizationWidget;
    } // retranslateUi

};

namespace Ui {
    class ThemeCustomizationWidget: public Ui_ThemeCustomizationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEMECUSTOMIZATIONWIDGET_H
