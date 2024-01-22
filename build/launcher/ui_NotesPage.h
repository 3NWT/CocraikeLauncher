/********************************************************************************
** Form generated from reading UI file 'NotesPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTESPAGE_H
#define UI_NOTESPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotesPage
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *noteEditor;

    void setupUi(QWidget *NotesPage)
    {
        if (NotesPage->objectName().isEmpty())
            NotesPage->setObjectName("NotesPage");
        NotesPage->resize(731, 538);
        verticalLayout = new QVBoxLayout(NotesPage);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, -1, 0);
        noteEditor = new QTextEdit(NotesPage);
        noteEditor->setObjectName("noteEditor");
        noteEditor->setTabChangesFocus(true);
        noteEditor->setAcceptRichText(false);
        noteEditor->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(noteEditor);


        retranslateUi(NotesPage);

        QMetaObject::connectSlotsByName(NotesPage);
    } // setupUi

    void retranslateUi(QWidget *NotesPage)
    {
        (void)NotesPage;
    } // retranslateUi

};

namespace Ui {
    class NotesPage: public Ui_NotesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTESPAGE_H
