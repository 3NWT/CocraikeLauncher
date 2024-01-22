/********************************************************************************
** Form generated from reading UI file 'APIPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APIPAGE_H
#define UI_APIPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_APIPage
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_paste;
    QVBoxLayout *verticalLayout_3;
    QLabel *pasteServiceTypeLabel;
    QComboBox *pasteTypeComboBox;
    QLabel *baseURLLabel;
    QLineEdit *baseURLEntry;
    QLabel *baseURLNote;
    QGroupBox *groupBox_meta;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLineEdit *metaURL;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_msa;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLineEdit *msaClientID;
    QLabel *label_4;
    QGroupBox *groupBox_modrinth;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *label_7;
    QLineEdit *modrinthToken;
    QGroupBox *groupBox_flame;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QLabel *label_9;
    QLineEdit *flameKey;
    QSpacerItem *verticalSpacer;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_ua;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *userAgentLineEdit;
    QLabel *userAgentLabel;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *APIPage)
    {
        if (APIPage->objectName().isEmpty())
            APIPage->setObjectName("APIPage");
        APIPage->resize(800, 600);
        verticalLayout = new QVBoxLayout(APIPage);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(APIPage);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_paste = new QGroupBox(tab);
        groupBox_paste->setObjectName("groupBox_paste");
        verticalLayout_3 = new QVBoxLayout(groupBox_paste);
        verticalLayout_3->setObjectName("verticalLayout_3");
        pasteServiceTypeLabel = new QLabel(groupBox_paste);
        pasteServiceTypeLabel->setObjectName("pasteServiceTypeLabel");

        verticalLayout_3->addWidget(pasteServiceTypeLabel);

        pasteTypeComboBox = new QComboBox(groupBox_paste);
        pasteTypeComboBox->setObjectName("pasteTypeComboBox");

        verticalLayout_3->addWidget(pasteTypeComboBox);

        baseURLLabel = new QLabel(groupBox_paste);
        baseURLLabel->setObjectName("baseURLLabel");

        verticalLayout_3->addWidget(baseURLLabel);

        baseURLEntry = new QLineEdit(groupBox_paste);
        baseURLEntry->setObjectName("baseURLEntry");
        baseURLEntry->setClearButtonEnabled(true);

        verticalLayout_3->addWidget(baseURLEntry);

        baseURLNote = new QLabel(groupBox_paste);
        baseURLNote->setObjectName("baseURLNote");
        baseURLNote->setWordWrap(true);

        verticalLayout_3->addWidget(baseURLNote);


        verticalLayout_2->addWidget(groupBox_paste);

        groupBox_meta = new QGroupBox(tab);
        groupBox_meta->setObjectName("groupBox_meta");
        verticalLayout_5 = new QVBoxLayout(groupBox_meta);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_5 = new QLabel(groupBox_meta);
        label_5->setObjectName("label_5");
        label_5->setTextFormat(Qt::RichText);
        label_5->setWordWrap(true);

        verticalLayout_5->addWidget(label_5);

        metaURL = new QLineEdit(groupBox_meta);
        metaURL->setObjectName("metaURL");

        verticalLayout_5->addWidget(metaURL);

        label_6 = new QLabel(groupBox_meta);
        label_6->setObjectName("label_6");
        label_6->setTextFormat(Qt::RichText);
        label_6->setWordWrap(true);
        label_6->setOpenExternalLinks(true);

        verticalLayout_5->addWidget(label_6);


        verticalLayout_2->addWidget(groupBox_meta);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tabWidget->addTab(tab, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QString::fromUtf8("Services"));
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_8 = new QVBoxLayout(tab_2);
        verticalLayout_8->setObjectName("verticalLayout_8");
        groupBox_msa = new QGroupBox(tab_2);
        groupBox_msa->setObjectName("groupBox_msa");
        verticalLayout_4 = new QVBoxLayout(groupBox_msa);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_3 = new QLabel(groupBox_msa);
        label_3->setObjectName("label_3");
        label_3->setTextFormat(Qt::RichText);
        label_3->setWordWrap(true);

        verticalLayout_4->addWidget(label_3);

        msaClientID = new QLineEdit(groupBox_msa);
        msaClientID->setObjectName("msaClientID");

        verticalLayout_4->addWidget(msaClientID);

        label_4 = new QLabel(groupBox_msa);
        label_4->setObjectName("label_4");
        label_4->setTextFormat(Qt::RichText);
        label_4->setWordWrap(true);
        label_4->setOpenExternalLinks(true);

        verticalLayout_4->addWidget(label_4);


        verticalLayout_8->addWidget(groupBox_msa);

        groupBox_modrinth = new QGroupBox(tab_2);
        groupBox_modrinth->setObjectName("groupBox_modrinth");
        groupBox_modrinth->setEnabled(true);
        gridLayout = new QGridLayout(groupBox_modrinth);
        gridLayout->setObjectName("gridLayout");
        label_8 = new QLabel(groupBox_modrinth);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        label_7 = new QLabel(groupBox_modrinth);
        label_7->setObjectName("label_7");
        label_7->setTextFormat(Qt::RichText);
        label_7->setWordWrap(true);
        label_7->setOpenExternalLinks(true);

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        modrinthToken = new QLineEdit(groupBox_modrinth);
        modrinthToken->setObjectName("modrinthToken");
        modrinthToken->setEnabled(true);

        gridLayout->addWidget(modrinthToken, 1, 0, 1, 1);


        verticalLayout_8->addWidget(groupBox_modrinth);

        groupBox_flame = new QGroupBox(tab_2);
        groupBox_flame->setObjectName("groupBox_flame");
        groupBox_flame->setEnabled(true);
        gridLayout_2 = new QGridLayout(groupBox_flame);
        gridLayout_2->setObjectName("gridLayout_2");
        label_10 = new QLabel(groupBox_flame);
        label_10->setObjectName("label_10");

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        label_9 = new QLabel(groupBox_flame);
        label_9->setObjectName("label_9");
        label_9->setTextFormat(Qt::RichText);
        label_9->setWordWrap(true);
        label_9->setOpenExternalLinks(true);

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        flameKey = new QLineEdit(groupBox_flame);
        flameKey->setObjectName("flameKey");
        flameKey->setEnabled(true);

        gridLayout_2->addWidget(flameKey, 1, 0, 1, 1);


        verticalLayout_8->addWidget(groupBox_flame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_6 = new QVBoxLayout(tab_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        groupBox_ua = new QGroupBox(tab_3);
        groupBox_ua->setObjectName("groupBox_ua");
        groupBox_ua->setMinimumSize(QSize(0, 0));
        verticalLayout_7 = new QVBoxLayout(groupBox_ua);
        verticalLayout_7->setObjectName("verticalLayout_7");
        userAgentLineEdit = new QLineEdit(groupBox_ua);
        userAgentLineEdit->setObjectName("userAgentLineEdit");

        verticalLayout_7->addWidget(userAgentLineEdit);

        userAgentLabel = new QLabel(groupBox_ua);
        userAgentLabel->setObjectName("userAgentLabel");

        verticalLayout_7->addWidget(userAgentLabel);


        verticalLayout_6->addWidget(groupBox_ua);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

#if QT_CONFIG(shortcut)
        pasteServiceTypeLabel->setBuddy(pasteTypeComboBox);
        baseURLLabel->setBuddy(baseURLEntry);
#endif // QT_CONFIG(shortcut)

        retranslateUi(APIPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(APIPage);
    } // setupUi

    void retranslateUi(QWidget *APIPage)
    {
        groupBox_paste->setTitle(QCoreApplication::translate("APIPage", "&Pastebin Service", nullptr));
        pasteServiceTypeLabel->setText(QCoreApplication::translate("APIPage", "Paste Service &Type", nullptr));
        baseURLLabel->setText(QCoreApplication::translate("APIPage", "Base &URL", nullptr));
        baseURLEntry->setPlaceholderText(QString());
        baseURLNote->setText(QCoreApplication::translate("APIPage", "Note: you probably want to change or clear the Base URL after changing the paste service type.", nullptr));
        groupBox_meta->setTitle(QCoreApplication::translate("APIPage", "Meta&data Server", nullptr));
        label_5->setText(QCoreApplication::translate("APIPage", "You can set this to a third-party metadata server to use patched libraries or other hacks.", nullptr));
        metaURL->setPlaceholderText(QString());
        label_6->setText(QCoreApplication::translate("APIPage", "Enter a custom URL for meta here.", nullptr));
        groupBox_msa->setTitle(QCoreApplication::translate("APIPage", "&Microsoft Authentication", nullptr));
        label_3->setText(QCoreApplication::translate("APIPage", "Note: you probably don't need to set this if logging in via Microsoft Authentication already works.", nullptr));
        msaClientID->setPlaceholderText(QCoreApplication::translate("APIPage", "(Default)", nullptr));
        label_4->setText(QCoreApplication::translate("APIPage", "Enter a custom client ID for Microsoft Authentication here.", nullptr));
        groupBox_modrinth->setTitle(QCoreApplication::translate("APIPage", "&Modrinth API", nullptr));
        label_8->setText(QCoreApplication::translate("APIPage", "<html><head/><body><p>Note: you only need to set this to access private data. Read the <a href=\"https://docs.modrinth.com/api-spec/#section/Authentication\">documentation</a> for more information.</p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("APIPage", "Enter a custom API token for Modrinth here.", nullptr));
        modrinthToken->setPlaceholderText(QCoreApplication::translate("APIPage", "(None)", nullptr));
        groupBox_flame->setTitle(QCoreApplication::translate("APIPage", "&CurseForge Core API", nullptr));
        label_10->setText(QCoreApplication::translate("APIPage", "Note: you probably don't need to set this if CurseForge already works.", nullptr));
        label_9->setText(QCoreApplication::translate("APIPage", "Enter a custom API Key for CurseForge here.", nullptr));
        flameKey->setPlaceholderText(QCoreApplication::translate("APIPage", "(Default)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("APIPage", "API Keys", nullptr));
        groupBox_ua->setTitle(QCoreApplication::translate("APIPage", "User Agent", nullptr));
        userAgentLabel->setText(QCoreApplication::translate("APIPage", "Enter a custom User Agent here. The special string $LAUNCHER_VER will be replaced with the version of the launcher.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("APIPage", "Miscellaneous", nullptr));
        (void)APIPage;
    } // retranslateUi

};

namespace Ui {
    class APIPage: public Ui_APIPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APIPAGE_H
