/********************************************************************************
** Form generated from reading UI file 'NotePad.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotePad
{
public:
    QAction *actionAbout;
    QAction *actionContents;
    QAction *actionFind;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionOpen;
    QAction *actionOpen_2;
    QAction *actionSave_As;
    QAction *actionSave;
    QAction *actionClose;
    QAction *actionQuit;
    QAction *actionRecent_Files;
    QAction *actionDelete;
    QWidget *centralwidget;
    QTextEdit *textedit;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;
    QToolBar *toolBar_4;
    QToolBar *toolBar_5;
    QToolBar *toolBar_6;
    QToolBar *toolBar_7;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;

    void setupUi(QMainWindow *NotePad)
    {
        if (NotePad->objectName().isEmpty())
            NotePad->setObjectName(QString::fromUtf8("NotePad"));
        NotePad->resize(683, 591);
        actionAbout = new QAction(NotePad);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionContents = new QAction(NotePad);
        actionContents->setObjectName(QString::fromUtf8("actionContents"));
        actionFind = new QAction(NotePad);
        actionFind->setObjectName(QString::fromUtf8("actionFind"));
        actionCopy = new QAction(NotePad);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionCopy->setIcon(QIcon(":/images/copy.png"));


        actionPaste = new QAction(NotePad);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionPaste->setIcon(QIcon(":/images/paste.png"));


        actionCut = new QAction(NotePad);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCut->setIcon(QIcon(":/images/cut.png"));


        actionOpen = new QAction(NotePad);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionOpen->setIcon(QIcon(":/images/new.png"));


        actionOpen_2 = new QAction(NotePad);
        actionOpen_2->setObjectName(QString::fromUtf8("actionOpen_2"));
        actionOpen_2->setIcon(QIcon(":/images/open.png"));


        actionSave_As = new QAction(NotePad);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionSave = new QAction(NotePad);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave->setIcon(QIcon(":/images/save.png"));

        actionClose = new QAction(NotePad);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionQuit = new QAction(NotePad);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionRecent_Files = new QAction(NotePad);
        actionRecent_Files->setObjectName(QString::fromUtf8("actionRecent_Files"));
        actionDelete = new QAction(NotePad);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionDelete->setIcon(QIcon(":/images/delete.png"));

        centralwidget = new QWidget(NotePad);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textedit = new QTextEdit(centralwidget);
        textedit->setObjectName(QString::fromUtf8("textedit"));
        textedit->setGeometry(QRect(0, 0, 811, 571));
        NotePad->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(NotePad);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        NotePad->setStatusBar(statusbar);
        toolBar = new QToolBar(NotePad);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        NotePad->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(NotePad);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        NotePad->addToolBar(Qt::TopToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(NotePad);
        toolBar_3->setObjectName(QString::fromUtf8("toolBar_3"));
        NotePad->addToolBar(Qt::TopToolBarArea, toolBar_3);
        toolBar_4 = new QToolBar(NotePad);
        toolBar_4->setObjectName(QString::fromUtf8("toolBar_4"));
        NotePad->addToolBar(Qt::TopToolBarArea, toolBar_4);
        toolBar_5 = new QToolBar(NotePad);
        toolBar_5->setObjectName(QString::fromUtf8("toolBar_5"));
        NotePad->addToolBar(Qt::TopToolBarArea, toolBar_5);
        toolBar_6 = new QToolBar(NotePad);
        toolBar_6->setObjectName(QString::fromUtf8("toolBar_6"));
        NotePad->addToolBar(Qt::TopToolBarArea, toolBar_6);
        toolBar_7 = new QToolBar(NotePad);
        toolBar_7->setObjectName(QString::fromUtf8("toolBar_7"));
        NotePad->addToolBar(Qt::TopToolBarArea, toolBar_7);
        menubar = new QMenuBar(NotePad);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 683, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        NotePad->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionOpen_2);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionClose);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionDelete);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionContents);

        retranslateUi(NotePad);

        QMetaObject::connectSlotsByName(NotePad);
    } // setupUi

    void retranslateUi(QMainWindow *NotePad)
    {
        NotePad->setWindowTitle(QApplication::translate("NotePad", "::NotePad::", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("NotePad", "About", 0, QApplication::UnicodeUTF8));
        actionContents->setText(QApplication::translate("NotePad", "Contents", 0, QApplication::UnicodeUTF8));
        actionFind->setText(QApplication::translate("NotePad", "&Find", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("NotePad", "&copy", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("NotePad", "&Paste", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("NotePad", "&Cut", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("NotePad", "&New", 0, QApplication::UnicodeUTF8));
        actionOpen_2->setText(QApplication::translate("NotePad", "&Open", 0, QApplication::UnicodeUTF8));
        actionSave_As->setText(QApplication::translate("NotePad", "Save As", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("NotePad", "&Save", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("NotePad", "close", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("NotePad", "&Quit", 0, QApplication::UnicodeUTF8));
        actionRecent_Files->setText(QApplication::translate("NotePad", "Recent Files", 0, QApplication::UnicodeUTF8));
        actionDelete->setText(QApplication::translate("NotePad", "&Delete", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("NotePad", "toolBar", 0, QApplication::UnicodeUTF8));
        toolBar_2->setWindowTitle(QApplication::translate("NotePad", "toolBar_2", 0, QApplication::UnicodeUTF8));
        toolBar_3->setWindowTitle(QApplication::translate("NotePad", "toolBar_3", 0, QApplication::UnicodeUTF8));
        toolBar_4->setWindowTitle(QApplication::translate("NotePad", "toolBar_4", 0, QApplication::UnicodeUTF8));
        toolBar_5->setWindowTitle(QApplication::translate("NotePad", "toolBar_5", 0, QApplication::UnicodeUTF8));
        toolBar_6->setWindowTitle(QApplication::translate("NotePad", "toolBar_6", 0, QApplication::UnicodeUTF8));
        toolBar_7->setWindowTitle(QApplication::translate("NotePad", "toolBar_7", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("NotePad", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("NotePad", "Edit", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("NotePad", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NotePad: public Ui_NotePad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
