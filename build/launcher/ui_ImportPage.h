/********************************************************************************
** Form generated from reading UI file 'ImportPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTPAGE_H
#define UI_IMPORTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImportPage
{
public:
    QGridLayout *gridLayout;
    QLineEdit *modpackEdit;
    QPushButton *modpackBtn;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QLabel *modpackLabel;

    void setupUi(QWidget *ImportPage)
    {
        if (ImportPage->objectName().isEmpty())
            ImportPage->setObjectName("ImportPage");
        ImportPage->resize(546, 405);
        gridLayout = new QGridLayout(ImportPage);
        gridLayout->setObjectName("gridLayout");
        modpackEdit = new QLineEdit(ImportPage);
        modpackEdit->setObjectName("modpackEdit");
        modpackEdit->setPlaceholderText(QString::fromUtf8("http://"));

        gridLayout->addWidget(modpackEdit, 2, 0, 1, 1);

        modpackBtn = new QPushButton(ImportPage);
        modpackBtn->setObjectName("modpackBtn");

        gridLayout->addWidget(modpackBtn, 2, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ImportPage);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_5 = new QLabel(ImportPage);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        label_3 = new QLabel(ImportPage);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(ImportPage);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label_4 = new QLabel(ImportPage);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);


        gridLayout->addLayout(verticalLayout, 3, 0, 2, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 2);

        modpackLabel = new QLabel(ImportPage);
        modpackLabel->setObjectName("modpackLabel");

        gridLayout->addWidget(modpackLabel, 0, 0, 1, 2);


        retranslateUi(ImportPage);

        QMetaObject::connectSlotsByName(ImportPage);
    } // setupUi

    void retranslateUi(QWidget *ImportPage)
    {
        modpackBtn->setText(QCoreApplication::translate("ImportPage", "Browse", nullptr));
        label->setText(QCoreApplication::translate("ImportPage", "The following file types are implemented (both for local files and URLs):", nullptr));
        label_5->setText(QCoreApplication::translate("ImportPage", "- CurseForge modpacks (ZIP)", nullptr));
        label_3->setText(QCoreApplication::translate("ImportPage", "- Modrinth modpacks (ZIP and mrpack)", nullptr));
        label_2->setText(QCoreApplication::translate("ImportPage", "- Prism Launcher, PolyMC or MultiMC exported instances (ZIP)", nullptr));
        label_4->setText(QCoreApplication::translate("ImportPage", "- Technic modpacks (ZIP)", nullptr));
        modpackLabel->setText(QCoreApplication::translate("ImportPage", "Local file or link to a direct download:", nullptr));
        (void)ImportPage;
    } // retranslateUi

};

namespace Ui {
    class ImportPage: public Ui_ImportPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTPAGE_H
