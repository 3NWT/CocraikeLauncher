/********************************************************************************
** Form generated from reading UI file 'ProxyPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROXYPAGE_H
#define UI_PROXYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProxyPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tabWidgetPage1;
    QVBoxLayout *verticalLayout;
    QLabel *proxyPlainTextWarningLabel_2;
    QGroupBox *proxyTypeBox;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *proxyDefaultBtn;
    QRadioButton *proxyNoneBtn;
    QRadioButton *proxySOCKS5Btn;
    QRadioButton *proxyHTTPBtn;
    QGroupBox *proxyAddrBox;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *proxyAddrEdit;
    QSpinBox *proxyPortEdit;
    QGroupBox *proxyAuthBox;
    QGridLayout *gridLayout_5;
    QLineEdit *proxyUserEdit;
    QLabel *proxyUsernameLabel;
    QLabel *proxyPasswordLabel;
    QLineEdit *proxyPassEdit;
    QLabel *proxyPlainTextWarningLabel;
    QSpacerItem *verticalSpacer;
    QButtonGroup *proxyGroup;

    void setupUi(QWidget *ProxyPage)
    {
        if (ProxyPage->objectName().isEmpty())
            ProxyPage->setObjectName("ProxyPage");
        ProxyPage->resize(598, 617);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProxyPage->sizePolicy().hasHeightForWidth());
        ProxyPage->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(ProxyPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(ProxyPage);
        tabWidget->setObjectName("tabWidget");
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName("tabWidgetPage1");
        verticalLayout = new QVBoxLayout(tabWidgetPage1);
        verticalLayout->setObjectName("verticalLayout");
        proxyPlainTextWarningLabel_2 = new QLabel(tabWidgetPage1);
        proxyPlainTextWarningLabel_2->setObjectName("proxyPlainTextWarningLabel_2");
        proxyPlainTextWarningLabel_2->setAlignment(Qt::AlignCenter);
        proxyPlainTextWarningLabel_2->setWordWrap(true);

        verticalLayout->addWidget(proxyPlainTextWarningLabel_2);

        proxyTypeBox = new QGroupBox(tabWidgetPage1);
        proxyTypeBox->setObjectName("proxyTypeBox");
        horizontalLayout_3 = new QHBoxLayout(proxyTypeBox);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        proxyDefaultBtn = new QRadioButton(proxyTypeBox);
        proxyGroup = new QButtonGroup(ProxyPage);
        proxyGroup->setObjectName("proxyGroup");
        proxyGroup->addButton(proxyDefaultBtn);
        proxyDefaultBtn->setObjectName("proxyDefaultBtn");

        horizontalLayout_3->addWidget(proxyDefaultBtn);

        proxyNoneBtn = new QRadioButton(proxyTypeBox);
        proxyGroup->addButton(proxyNoneBtn);
        proxyNoneBtn->setObjectName("proxyNoneBtn");

        horizontalLayout_3->addWidget(proxyNoneBtn);

        proxySOCKS5Btn = new QRadioButton(proxyTypeBox);
        proxyGroup->addButton(proxySOCKS5Btn);
        proxySOCKS5Btn->setObjectName("proxySOCKS5Btn");

        horizontalLayout_3->addWidget(proxySOCKS5Btn);

        proxyHTTPBtn = new QRadioButton(proxyTypeBox);
        proxyGroup->addButton(proxyHTTPBtn);
        proxyHTTPBtn->setObjectName("proxyHTTPBtn");

        horizontalLayout_3->addWidget(proxyHTTPBtn);


        verticalLayout->addWidget(proxyTypeBox);

        proxyAddrBox = new QGroupBox(tabWidgetPage1);
        proxyAddrBox->setObjectName("proxyAddrBox");
        horizontalLayout_2 = new QHBoxLayout(proxyAddrBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        proxyAddrEdit = new QLineEdit(proxyAddrBox);
        proxyAddrEdit->setObjectName("proxyAddrEdit");
        proxyAddrEdit->setPlaceholderText(QString::fromUtf8("127.0.0.1"));

        horizontalLayout_2->addWidget(proxyAddrEdit);

        proxyPortEdit = new QSpinBox(proxyAddrBox);
        proxyPortEdit->setObjectName("proxyPortEdit");
        proxyPortEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        proxyPortEdit->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        proxyPortEdit->setMaximum(65535);
        proxyPortEdit->setValue(8080);

        horizontalLayout_2->addWidget(proxyPortEdit);


        verticalLayout->addWidget(proxyAddrBox);

        proxyAuthBox = new QGroupBox(tabWidgetPage1);
        proxyAuthBox->setObjectName("proxyAuthBox");
        gridLayout_5 = new QGridLayout(proxyAuthBox);
        gridLayout_5->setObjectName("gridLayout_5");
        proxyUserEdit = new QLineEdit(proxyAuthBox);
        proxyUserEdit->setObjectName("proxyUserEdit");

        gridLayout_5->addWidget(proxyUserEdit, 0, 1, 1, 1);

        proxyUsernameLabel = new QLabel(proxyAuthBox);
        proxyUsernameLabel->setObjectName("proxyUsernameLabel");

        gridLayout_5->addWidget(proxyUsernameLabel, 0, 0, 1, 1);

        proxyPasswordLabel = new QLabel(proxyAuthBox);
        proxyPasswordLabel->setObjectName("proxyPasswordLabel");

        gridLayout_5->addWidget(proxyPasswordLabel, 1, 0, 1, 1);

        proxyPassEdit = new QLineEdit(proxyAuthBox);
        proxyPassEdit->setObjectName("proxyPassEdit");
        proxyPassEdit->setEchoMode(QLineEdit::Password);

        gridLayout_5->addWidget(proxyPassEdit, 1, 1, 1, 1);

        proxyPlainTextWarningLabel = new QLabel(proxyAuthBox);
        proxyPlainTextWarningLabel->setObjectName("proxyPlainTextWarningLabel");
        proxyPlainTextWarningLabel->setWordWrap(true);

        gridLayout_5->addWidget(proxyPlainTextWarningLabel, 2, 0, 1, 2);


        verticalLayout->addWidget(proxyAuthBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidget->addTab(tabWidgetPage1, QString());
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage1), QString::fromUtf8(""));

        verticalLayout_2->addWidget(tabWidget);

#if QT_CONFIG(shortcut)
        proxyUsernameLabel->setBuddy(proxyUserEdit);
        proxyPasswordLabel->setBuddy(proxyPassEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ProxyPage);

        QMetaObject::connectSlotsByName(ProxyPage);
    } // setupUi

    void retranslateUi(QWidget *ProxyPage)
    {
        proxyPlainTextWarningLabel_2->setText(QCoreApplication::translate("ProxyPage", "This only applies to the launcher. Minecraft does not accept proxy settings.", nullptr));
        proxyTypeBox->setTitle(QCoreApplication::translate("ProxyPage", "Type", nullptr));
#if QT_CONFIG(tooltip)
        proxyDefaultBtn->setToolTip(QCoreApplication::translate("ProxyPage", "Uses your system's default proxy settings.", nullptr));
#endif // QT_CONFIG(tooltip)
        proxyDefaultBtn->setText(QCoreApplication::translate("ProxyPage", "&Default", nullptr));
        proxyNoneBtn->setText(QCoreApplication::translate("ProxyPage", "&None", nullptr));
        proxySOCKS5Btn->setText(QCoreApplication::translate("ProxyPage", "&SOCKS5", nullptr));
        proxyHTTPBtn->setText(QCoreApplication::translate("ProxyPage", "&HTTP", nullptr));
        proxyAddrBox->setTitle(QCoreApplication::translate("ProxyPage", "&Address and Port", nullptr));
        proxyAuthBox->setTitle(QCoreApplication::translate("ProxyPage", "Authentication", nullptr));
        proxyUsernameLabel->setText(QCoreApplication::translate("ProxyPage", "&Username:", nullptr));
        proxyPasswordLabel->setText(QCoreApplication::translate("ProxyPage", "&Password:", nullptr));
        proxyPlainTextWarningLabel->setText(QCoreApplication::translate("ProxyPage", "Note: Proxy username and password are stored in plain text inside the launcher's configuration file!", nullptr));
        (void)ProxyPage;
    } // retranslateUi

};

namespace Ui {
    class ProxyPage: public Ui_ProxyPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROXYPAGE_H
