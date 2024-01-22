/********************************************************************************
** Form generated from reading UI file 'InfoFrame.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOFRAME_H
#define UI_INFOFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_InfoFrame
{
public:
    QGridLayout *gridLayout;
    QLabel *nameLabel;
    QLabel *descriptionLabel;
    QLabel *iconLabel;

    void setupUi(QFrame *InfoFrame)
    {
        if (InfoFrame->objectName().isEmpty())
            InfoFrame->setObjectName("InfoFrame");
        InfoFrame->resize(527, 113);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InfoFrame->sizePolicy().hasHeightForWidth());
        InfoFrame->setSizePolicy(sizePolicy);
        InfoFrame->setMaximumSize(QSize(16777215, 120));
        gridLayout = new QGridLayout(InfoFrame);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(InfoFrame);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setText(QString::fromUtf8(""));
        nameLabel->setTextFormat(Qt::RichText);
        nameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        nameLabel->setWordWrap(true);
        nameLabel->setOpenExternalLinks(true);
        nameLabel->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(nameLabel, 0, 1, 1, 1);

        descriptionLabel = new QLabel(InfoFrame);
        descriptionLabel->setObjectName("descriptionLabel");
#if QT_CONFIG(tooltip)
        descriptionLabel->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        descriptionLabel->setText(QString::fromUtf8(""));
        descriptionLabel->setTextFormat(Qt::RichText);
        descriptionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        descriptionLabel->setWordWrap(true);
        descriptionLabel->setOpenExternalLinks(true);
        descriptionLabel->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(descriptionLabel, 1, 1, 1, 1);

        iconLabel = new QLabel(InfoFrame);
        iconLabel->setObjectName("iconLabel");
        iconLabel->setMinimumSize(QSize(0, 0));
        iconLabel->setMaximumSize(QSize(64, 64));
        iconLabel->setText(QString::fromUtf8(""));
        iconLabel->setScaledContents(false);
        iconLabel->setMargin(0);

        gridLayout->addWidget(iconLabel, 0, 0, 2, 1);


        retranslateUi(InfoFrame);

        QMetaObject::connectSlotsByName(InfoFrame);
    } // setupUi

    void retranslateUi(QFrame *InfoFrame)
    {
        (void)InfoFrame;
    } // retranslateUi

};

namespace Ui {
    class InfoFrame: public Ui_InfoFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOFRAME_H
