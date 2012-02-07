/********************************************************************************
** Form generated from reading UI file 'Contents.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTENTS_H
#define UI_CONTENTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Contents
{
public:
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *Ok;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Contents)
    {
        if (Contents->objectName().isEmpty())
            Contents->setObjectName(QString::fromUtf8("Contents"));
        Contents->resize(688, 524);
        label_5 = new QLabel(Contents);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 70, 192, 17));
        label_6 = new QLabel(Contents);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 110, 157, 17));
        Ok = new QPushButton(Contents);
        Ok->setObjectName(QString::fromUtf8("Ok"));
        Ok->setGeometry(QRect(330, 460, 85, 27));
        textBrowser = new QTextBrowser(Contents);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(-10, 0, 711, 451));

        retranslateUi(Contents);

        QMetaObject::connectSlotsByName(Contents);
    } // setupUi

    void retranslateUi(QDialog *Contents)
    {
        Contents->setWindowTitle(QApplication::translate("Contents", "::Contents::", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
        label_6->setText(QString());
        Ok->setText(QApplication::translate("Contents", "OK", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("Contents", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">ctrl+c---------------------------copy </p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">ctrl+v----------------------------past</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">ctrl+x-----------------------------cut</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">"
                        "         ctrl+a-----------------------------select all</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                                  <img src=\"images/contents.png\" /></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Contents: public Ui_Contents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTENTS_H
