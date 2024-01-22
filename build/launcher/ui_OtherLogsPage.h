/********************************************************************************
** Form generated from reading UI file 'OtherLogsPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTHERLOGSPAGE_H
#define UI_OTHERLOGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OtherLogsPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QLineEdit *searchBar;
    QPushButton *findButton;
    QPlainTextEdit *text;
    QGridLayout *gridLayout;
    QPushButton *btnCopy;
    QPushButton *btnDelete;
    QPushButton *btnPaste;
    QPushButton *btnClean;
    QPushButton *btnReload;
    QComboBox *selectLogBox;
    QLabel *label;

    void setupUi(QWidget *OtherLogsPage)
    {
        if (OtherLogsPage->objectName().isEmpty())
            OtherLogsPage->setObjectName("OtherLogsPage");
        OtherLogsPage->resize(657, 538);
        verticalLayout_2 = new QVBoxLayout(OtherLogsPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(OtherLogsPage);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName("gridLayout_2");
        searchBar = new QLineEdit(tab);
        searchBar->setObjectName("searchBar");

        gridLayout_2->addWidget(searchBar, 2, 1, 1, 1);

        findButton = new QPushButton(tab);
        findButton->setObjectName("findButton");

        gridLayout_2->addWidget(findButton, 2, 2, 1, 1);

        text = new QPlainTextEdit(tab);
        text->setObjectName("text");
        text->setEnabled(false);
        text->setReadOnly(true);
        text->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(text, 1, 0, 1, 4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        btnCopy = new QPushButton(tab);
        btnCopy->setObjectName("btnCopy");

        gridLayout->addWidget(btnCopy, 3, 1, 1, 1);

        btnDelete = new QPushButton(tab);
        btnDelete->setObjectName("btnDelete");

        gridLayout->addWidget(btnDelete, 3, 3, 1, 1);

        btnPaste = new QPushButton(tab);
        btnPaste->setObjectName("btnPaste");

        gridLayout->addWidget(btnPaste, 3, 2, 1, 1);

        btnClean = new QPushButton(tab);
        btnClean->setObjectName("btnClean");

        gridLayout->addWidget(btnClean, 3, 4, 1, 1);

        btnReload = new QPushButton(tab);
        btnReload->setObjectName("btnReload");

        gridLayout->addWidget(btnReload, 3, 0, 1, 1);

        selectLogBox = new QComboBox(tab);
        selectLogBox->setObjectName("selectLogBox");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(selectLogBox->sizePolicy().hasHeightForWidth());
        selectLogBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(selectLogBox, 0, 0, 1, 5);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 4);

        label = new QLabel(tab);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QString::fromUtf8("Tab 1"));

        verticalLayout_2->addWidget(tabWidget);

        QWidget::setTabOrder(tabWidget, selectLogBox);
        QWidget::setTabOrder(selectLogBox, btnReload);
        QWidget::setTabOrder(btnReload, btnCopy);
        QWidget::setTabOrder(btnCopy, btnPaste);
        QWidget::setTabOrder(btnPaste, btnDelete);
        QWidget::setTabOrder(btnDelete, btnClean);
        QWidget::setTabOrder(btnClean, text);
        QWidget::setTabOrder(text, searchBar);
        QWidget::setTabOrder(searchBar, findButton);

        retranslateUi(OtherLogsPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OtherLogsPage);
    } // setupUi

    void retranslateUi(QWidget *OtherLogsPage)
    {
        findButton->setText(QCoreApplication::translate("OtherLogsPage", "Find", nullptr));
#if QT_CONFIG(tooltip)
        btnCopy->setToolTip(QCoreApplication::translate("OtherLogsPage", "Copy the whole log into the clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        btnCopy->setText(QCoreApplication::translate("OtherLogsPage", "&Copy", nullptr));
#if QT_CONFIG(tooltip)
        btnDelete->setToolTip(QCoreApplication::translate("OtherLogsPage", "Clear the log", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDelete->setText(QCoreApplication::translate("OtherLogsPage", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        btnPaste->setToolTip(QCoreApplication::translate("OtherLogsPage", "Upload the log to the paste service configured in preferences.", nullptr));
#endif // QT_CONFIG(tooltip)
        btnPaste->setText(QCoreApplication::translate("OtherLogsPage", "Upload", nullptr));
#if QT_CONFIG(tooltip)
        btnClean->setToolTip(QCoreApplication::translate("OtherLogsPage", "Clear the log", nullptr));
#endif // QT_CONFIG(tooltip)
        btnClean->setText(QCoreApplication::translate("OtherLogsPage", "Clean", nullptr));
        btnReload->setText(QCoreApplication::translate("OtherLogsPage", "Reload", nullptr));
        label->setText(QCoreApplication::translate("OtherLogsPage", "Search:", nullptr));
        (void)OtherLogsPage;
    } // retranslateUi

};

namespace Ui {
    class OtherLogsPage: public Ui_OtherLogsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTHERLOGSPAGE_H
