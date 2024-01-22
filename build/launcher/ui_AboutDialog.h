/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *icon;
    QSpacerItem *horizontalSpacer_2;
    QLabel *title;
    QLabel *versionLabel;
    QTabWidget *tabWidget;
    QWidget *aboutTab;
    QVBoxLayout *verticalLayout_5;
    QLabel *aboutLabel;
    QLabel *urlLabel;
    QLabel *copyLabel;
    QFrame *line;
    QLabel *platformLabel;
    QLabel *buildDateLabel;
    QLabel *commitLabel;
    QLabel *channelLabel;
    QSpacerItem *verticalSpacer;
    QWidget *creditsTab;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *creditsText;
    QWidget *licenseTab;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *licenseText;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *aboutQt;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *closeButton;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->resize(573, 600);
        AboutDialog->setMinimumSize(QSize(450, 400));
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        icon = new QLabel(AboutDialog);
        icon->setObjectName("icon");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(icon->sizePolicy().hasHeightForWidth());
        icon->setSizePolicy(sizePolicy);
        icon->setMinimumSize(QSize(64, 64));
        icon->setBaseSize(QSize(64, 64));

        horizontalLayout->addWidget(icon);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        title = new QLabel(AboutDialog);
        title->setObjectName("title");
        QFont font;
        font.setPointSize(15);
        title->setFont(font);
        title->setText(QString::fromUtf8("Launcher"));
        title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(title);

        versionLabel = new QLabel(AboutDialog);
        versionLabel->setObjectName("versionLabel");
        versionLabel->setCursor(QCursor(Qt::IBeamCursor));
        versionLabel->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout->addWidget(versionLabel, 0, Qt::AlignHCenter);

        tabWidget = new QTabWidget(AboutDialog);
        tabWidget->setObjectName("tabWidget");
        aboutTab = new QWidget();
        aboutTab->setObjectName("aboutTab");
        verticalLayout_5 = new QVBoxLayout(aboutTab);
        verticalLayout_5->setObjectName("verticalLayout_5");
        aboutLabel = new QLabel(aboutTab);
        aboutLabel->setObjectName("aboutLabel");
        aboutLabel->setEnabled(true);
        aboutLabel->setAlignment(Qt::AlignCenter);
        aboutLabel->setWordWrap(true);

        verticalLayout_5->addWidget(aboutLabel);

        urlLabel = new QLabel(aboutTab);
        urlLabel->setObjectName("urlLabel");
        QFont font1;
        font1.setPointSize(10);
        urlLabel->setFont(font1);
        urlLabel->setText(QString::fromUtf8("GIT URL"));
        urlLabel->setAlignment(Qt::AlignCenter);
        urlLabel->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);

        verticalLayout_5->addWidget(urlLabel);

        copyLabel = new QLabel(aboutTab);
        copyLabel->setObjectName("copyLabel");
        QFont font2;
        font2.setPointSize(8);
        font2.setKerning(true);
        copyLabel->setFont(font2);
        copyLabel->setText(QString::fromUtf8("COPYRIGHT"));
        copyLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(copyLabel);

        line = new QFrame(aboutTab);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line);

        platformLabel = new QLabel(aboutTab);
        platformLabel->setObjectName("platformLabel");
        platformLabel->setCursor(QCursor(Qt::IBeamCursor));
        platformLabel->setAlignment(Qt::AlignCenter);
        platformLabel->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_5->addWidget(platformLabel, 0, Qt::AlignHCenter);

        buildDateLabel = new QLabel(aboutTab);
        buildDateLabel->setObjectName("buildDateLabel");
        buildDateLabel->setCursor(QCursor(Qt::IBeamCursor));
        buildDateLabel->setAlignment(Qt::AlignCenter);
        buildDateLabel->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_5->addWidget(buildDateLabel, 0, Qt::AlignHCenter);

        commitLabel = new QLabel(aboutTab);
        commitLabel->setObjectName("commitLabel");
        commitLabel->setCursor(QCursor(Qt::IBeamCursor));
        commitLabel->setAlignment(Qt::AlignCenter);
        commitLabel->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_5->addWidget(commitLabel, 0, Qt::AlignHCenter);

        channelLabel = new QLabel(aboutTab);
        channelLabel->setObjectName("channelLabel");
        channelLabel->setCursor(QCursor(Qt::IBeamCursor));
        channelLabel->setAlignment(Qt::AlignCenter);
        channelLabel->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_5->addWidget(channelLabel, 0, Qt::AlignHCenter);

        verticalSpacer = new QSpacerItem(20, 212, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        tabWidget->addTab(aboutTab, QString());
        creditsTab = new QWidget();
        creditsTab->setObjectName("creditsTab");
        verticalLayout_2 = new QVBoxLayout(creditsTab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        creditsText = new QTextBrowser(creditsTab);
        creditsText->setObjectName("creditsText");
        creditsText->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(creditsText);

        tabWidget->addTab(creditsTab, QString());
        licenseTab = new QWidget();
        licenseTab->setObjectName("licenseTab");
        verticalLayout_3 = new QVBoxLayout(licenseTab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        licenseText = new QTextEdit(licenseTab);
        licenseText->setObjectName("licenseText");
        licenseText->setMinimumSize(QSize(0, 0));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        licenseText->setFont(font3);
        licenseText->setReadOnly(true);
        licenseText->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout_3->addWidget(licenseText);

        tabWidget->addTab(licenseTab, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        aboutQt = new QPushButton(AboutDialog);
        aboutQt->setObjectName("aboutQt");
        aboutQt->setAutoFillBackground(false);

        horizontalLayout_2->addWidget(aboutQt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        closeButton = new QPushButton(AboutDialog);
        closeButton->setObjectName("closeButton");

        horizontalLayout_2->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(tabWidget, creditsText);
        QWidget::setTabOrder(creditsText, licenseText);
        QWidget::setTabOrder(licenseText, aboutQt);
        QWidget::setTabOrder(aboutQt, closeButton);

        retranslateUi(AboutDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        icon->setText(QString());
        aboutLabel->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p>A custom launcher that makes managing Minecraft easier by allowing you to have multiple instances of Minecraft at once.</p></body></html>", nullptr));
        platformLabel->setText(QCoreApplication::translate("AboutDialog", "Platform:", nullptr));
        buildDateLabel->setText(QCoreApplication::translate("AboutDialog", "Build Date:", nullptr));
        commitLabel->setText(QCoreApplication::translate("AboutDialog", "Commit:", nullptr));
        channelLabel->setText(QCoreApplication::translate("AboutDialog", "Channel:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(aboutTab), QCoreApplication::translate("AboutDialog", "About", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(creditsTab), QCoreApplication::translate("AboutDialog", "Credits", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(licenseTab), QCoreApplication::translate("AboutDialog", "License", nullptr));
        aboutQt->setText(QCoreApplication::translate("AboutDialog", "About Qt", nullptr));
        closeButton->setText(QCoreApplication::translate("AboutDialog", "Close", nullptr));
        (void)AboutDialog;
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
