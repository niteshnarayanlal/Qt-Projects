#ifndef ABOUT_H
#define ABOUT_H
#include<QDialog>
#include "ui_About.h"
class About:public QDialog,public Ui::About
{
public:
    About()
    {
        setupUi(this);
        connect(ok,SIGNAL(clicked()),this,SLOT(accept()));
    }


};

#endif // ABOUT_H
