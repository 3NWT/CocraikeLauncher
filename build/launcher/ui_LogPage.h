/********************************************************************************
** Form generated from reading UI file 'LogPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGPAGE_H
#define UI_LOGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/widgets/LogView.h"

QT_BEGIN_NAMESPACE

class Ui_LogPage
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    LogView *text;
    QHBoxLayout *horizontalLayout;
    QCheckBox *trackLogCheckbox;
    QCheckBox *wrapCheckbox;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCopy;
    QPushButton *btnPaste;
    QPushButton *btnClear;
    QLabel *label;
    QPushButton *findButton;
    QLineEdit *searchBar;
    QPushButton *btnBottom;
    QFrame *line;

    void setupUi(QWidget *LogPage)
    {
        if (LogPage->objectName().isEmpty())
            LogPage->setObjectName("LogPage");
        LogPage->resize(825, 782);
        verticalLayout = new QVBoxLayout(LogPage);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(LogPage);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName("gridLayout");
        text = new LogView(tab);
        text->setObjectName("text");
        text->setUndoRedoEnabled(false);
        text->setReadOnly(true);
        text->setPlainText(QString::fromUtf8(""));
        text->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        text->setCenterOnScroll(false);

        gridLayout->addWidget(text, 1, 0, 1, 5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        trackLogCheckbox = new QCheckBox(tab);
        trackLogCheckbox->setObjectName("trackLogCheckbox");
        trackLogCheckbox->setChecked(true);

        horizontalLayout->addWidget(trackLogCheckbox);

        wrapCheckbox = new QCheckBox(tab);
        wrapCheckbox->setObjectName("wrapCheckbox");
        wrapCheckbox->setChecked(true);

        horizontalLayout->addWidget(wrapCheckbox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCopy = new QPushButton(tab);
        btnCopy->setObjectName("btnCopy");

        horizontalLayout->addWidget(btnCopy);

        btnPaste = new QPushButton(tab);
        btnPaste->setObjectName("btnPaste");

        horizontalLayout->addWidget(btnPaste);

        btnClear = new QPushButton(tab);
        btnClear->setObjectName("btnClear");

        horizontalLayout->addWidget(btnClear);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 5);

        label = new QLabel(tab);
        label->setObjectName("label");

        gridLayout->addWidget(label, 2, 0, 1, 1);

        findButton = new QPushButton(tab);
        findButton->setObjectName("findButton");

        gridLayout->addWidget(findButton, 2, 2, 1, 1);

        searchBar = new QLineEdit(tab);
        searchBar->setObjectName("searchBar");

        gridLayout->addWidget(searchBar, 2, 1, 1, 1);

        btnBottom = new QPushButton(tab);
        btnBottom->setObjectName("btnBottom");

        gridLayout->addWidget(btnBottom, 2, 4, 1, 1);

        line = new QFrame(tab);
        line->setObjectName("line");
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 3, 1, 1);

        tabWidget->addTab(tab, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QString::fromUtf8("Tab 1"));

        verticalLayout->addWidget(tabWidget);

        QWidget::setTabOrder(tabWidget, trackLogCheckbox);
        QWidget::setTabOrder(trackLogCheckbox, wrapCheckbox);
        QWidget::setTabOrder(wrapCheckbox, btnCopy);
        QWidget::setTabOrder(btnCopy, btnPaste);
        QWidget::setTabOrder(btnPaste, btnClear);
        QWidget::setTabOrder(btnClear, text);
        QWidget::setTabOrder(text, searchBar);
        QWidget::setTabOrder(searchBar, findButton);

        retranslateUi(LogPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LogPage);
    } // setupUi

    void retranslateUi(QWidget *LogPage)
    {
        trackLogCheckbox->setText(QCoreApplication::translate("LogPage", "Keep updating", nullptr));
        wrapCheckbox->setText(QCoreApplication::translate("LogPage", "Wrap lines", nullptr));
#if QT_CONFIG(tooltip)
        btnCopy->setToolTip(QCoreApplication::translate("LogPage", "Copy the whole log into the clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        btnCopy->setText(QCoreApplication::translate("LogPage", "&Copy", nullptr));
#if QT_CONFIG(tooltip)
        btnPaste->setToolTip(QCoreApplication::translate("LogPage", "Upload the log to the paste service configured in preferences", nullptr));
#endif // QT_CONFIG(tooltip)
        btnPaste->setText(QCoreApplication::translate("LogPage", "Upload", nullptr));
#if QT_CONFIG(tooltip)
        btnClear->setToolTip(QCoreApplication::translate("LogPage", "Clear the log", nullptr));
#endif // QT_CONFIG(tooltip)
        btnClear->setText(QCoreApplication::translate("LogPage", "Clear", nullptr));
        label->setText(QCoreApplication::translate("LogPage", "Search:", nullptr));
        findButton->setText(QCoreApplication::translate("LogPage", "Find", nullptr));
#if QT_CONFIG(tooltip)
        btnBottom->setToolTip(QCoreApplication::translate("LogPage", "Scroll all the way to bottom", nullptr));
#endif // QT_CONFIG(tooltip)
        btnBottom->setText(QCoreApplication::translate("LogPage", "Bottom", nullptr));
        (void)LogPage;
    } // retranslateUi

};

namespace Ui {
    class LogPage: public Ui_LogPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGPAGE_H
