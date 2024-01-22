/********************************************************************************
** Form generated from reading UI file 'ExternalToolsPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTERNALTOOLSPAGE_H
#define UI_EXTERNALTOOLSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExternalToolsPage
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *jprofilerPathEdit;
    QPushButton *jprofilerPathBtn;
    QPushButton *jprofilerCheckBtn;
    QLabel *jprofilerLink;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *jvisualvmPathEdit;
    QPushButton *jvisualvmPathBtn;
    QPushButton *jvisualvmCheckBtn;
    QLabel *jvisualvmLink;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *mceditPathEdit;
    QPushButton *mceditPathBtn;
    QPushButton *mceditCheckBtn;
    QLabel *mceditLink;
    QGroupBox *editorsBox;
    QGridLayout *foldersBoxLayout_2;
    QLineEdit *jsonEditorTextBox;
    QLabel *labelJsonEditor;
    QToolButton *jsonEditorBrowseBtn;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ExternalToolsPage)
    {
        if (ExternalToolsPage->objectName().isEmpty())
            ExternalToolsPage->setObjectName("ExternalToolsPage");
        ExternalToolsPage->resize(673, 751);
        verticalLayout = new QVBoxLayout(ExternalToolsPage);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(ExternalToolsPage);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setTitle(QString::fromUtf8("J&Profiler"));
        verticalLayout_10 = new QVBoxLayout(groupBox_2);
        verticalLayout_10->setObjectName("verticalLayout_10");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        jprofilerPathEdit = new QLineEdit(groupBox_2);
        jprofilerPathEdit->setObjectName("jprofilerPathEdit");

        horizontalLayout_4->addWidget(jprofilerPathEdit);

        jprofilerPathBtn = new QPushButton(groupBox_2);
        jprofilerPathBtn->setObjectName("jprofilerPathBtn");
        jprofilerPathBtn->setText(QString::fromUtf8("..."));

        horizontalLayout_4->addWidget(jprofilerPathBtn);


        verticalLayout_10->addLayout(horizontalLayout_4);

        jprofilerCheckBtn = new QPushButton(groupBox_2);
        jprofilerCheckBtn->setObjectName("jprofilerCheckBtn");

        verticalLayout_10->addWidget(jprofilerCheckBtn);

        jprofilerLink = new QLabel(groupBox_2);
        jprofilerLink->setObjectName("jprofilerLink");
        jprofilerLink->setText(QString::fromUtf8("<html><head/><body><p><a href=\"https://www.ej-technologies.com/products/jprofiler/overview.html\">https://www.ej-technologies.com/products/jprofiler/overview.html</a></p></body></html>"));

        verticalLayout_10->addWidget(jprofilerLink);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setTitle(QString::fromUtf8("J&VisualVM"));
        verticalLayout_11 = new QVBoxLayout(groupBox_3);
        verticalLayout_11->setObjectName("verticalLayout_11");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        jvisualvmPathEdit = new QLineEdit(groupBox_3);
        jvisualvmPathEdit->setObjectName("jvisualvmPathEdit");

        horizontalLayout_5->addWidget(jvisualvmPathEdit);

        jvisualvmPathBtn = new QPushButton(groupBox_3);
        jvisualvmPathBtn->setObjectName("jvisualvmPathBtn");
        jvisualvmPathBtn->setText(QString::fromUtf8("..."));

        horizontalLayout_5->addWidget(jvisualvmPathBtn);


        verticalLayout_11->addLayout(horizontalLayout_5);

        jvisualvmCheckBtn = new QPushButton(groupBox_3);
        jvisualvmCheckBtn->setObjectName("jvisualvmCheckBtn");

        verticalLayout_11->addWidget(jvisualvmCheckBtn);

        jvisualvmLink = new QLabel(groupBox_3);
        jvisualvmLink->setObjectName("jvisualvmLink");
        jvisualvmLink->setText(QString::fromUtf8("<html><head/><body><p><a href=\"https://visualvm.github.io/\">https://visualvm.github.io/</a></p></body></html>"));

        verticalLayout_11->addWidget(jvisualvmLink);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setTitle(QString::fromUtf8("&MCEdit"));
        verticalLayout_12 = new QVBoxLayout(groupBox_4);
        verticalLayout_12->setObjectName("verticalLayout_12");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        mceditPathEdit = new QLineEdit(groupBox_4);
        mceditPathEdit->setObjectName("mceditPathEdit");

        horizontalLayout_6->addWidget(mceditPathEdit);

        mceditPathBtn = new QPushButton(groupBox_4);
        mceditPathBtn->setObjectName("mceditPathBtn");
        mceditPathBtn->setText(QString::fromUtf8("..."));

        horizontalLayout_6->addWidget(mceditPathBtn);


        verticalLayout_12->addLayout(horizontalLayout_6);

        mceditCheckBtn = new QPushButton(groupBox_4);
        mceditCheckBtn->setObjectName("mceditCheckBtn");

        verticalLayout_12->addWidget(mceditCheckBtn);

        mceditLink = new QLabel(groupBox_4);
        mceditLink->setObjectName("mceditLink");
        mceditLink->setText(QString::fromUtf8("<html><head/><body><p><a href=\"https://www.mcedit.net/\">https://www.mcedit.net/</a></p></body></html>"));

        verticalLayout_12->addWidget(mceditLink);


        verticalLayout_2->addWidget(groupBox_4);

        editorsBox = new QGroupBox(tab);
        editorsBox->setObjectName("editorsBox");
        foldersBoxLayout_2 = new QGridLayout(editorsBox);
        foldersBoxLayout_2->setObjectName("foldersBoxLayout_2");
        jsonEditorTextBox = new QLineEdit(editorsBox);
        jsonEditorTextBox->setObjectName("jsonEditorTextBox");

        foldersBoxLayout_2->addWidget(jsonEditorTextBox, 0, 1, 1, 1);

        labelJsonEditor = new QLabel(editorsBox);
        labelJsonEditor->setObjectName("labelJsonEditor");

        foldersBoxLayout_2->addWidget(labelJsonEditor, 0, 0, 1, 1);

        jsonEditorBrowseBtn = new QToolButton(editorsBox);
        jsonEditorBrowseBtn->setObjectName("jsonEditorBrowseBtn");
        jsonEditorBrowseBtn->setText(QString::fromUtf8("..."));

        foldersBoxLayout_2->addWidget(jsonEditorBrowseBtn, 0, 2, 1, 1);


        verticalLayout_2->addWidget(editorsBox);

        verticalSpacer = new QSpacerItem(20, 216, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QString::fromUtf8("Tab 1"));

        verticalLayout->addWidget(tabWidget);

#if QT_CONFIG(shortcut)
        labelJsonEditor->setBuddy(jsonEditorTextBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ExternalToolsPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ExternalToolsPage);
    } // setupUi

    void retranslateUi(QWidget *ExternalToolsPage)
    {
        jprofilerCheckBtn->setText(QCoreApplication::translate("ExternalToolsPage", "Check", nullptr));
        jvisualvmCheckBtn->setText(QCoreApplication::translate("ExternalToolsPage", "Check", nullptr));
        mceditCheckBtn->setText(QCoreApplication::translate("ExternalToolsPage", "Check", nullptr));
        editorsBox->setTitle(QCoreApplication::translate("ExternalToolsPage", "External Editors (leave empty for system default)", nullptr));
        labelJsonEditor->setText(QCoreApplication::translate("ExternalToolsPage", "&Text Editor:", nullptr));
        (void)ExternalToolsPage;
    } // retranslateUi

};

namespace Ui {
    class ExternalToolsPage: public Ui_ExternalToolsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTERNALTOOLSPAGE_H
