#ifndef CONTENTS_H
#define CONTENTS_H
#include<QDialog>
#include"ui_Contents.h"

class Contents:public QDialog  ,public Ui::Contents
{
public:
    Contents()
    {
        setupUi(this);
        connect(Ok,SIGNAL(clicked()),this,SLOT(accept()));
    }
};

#endif // CONTENTS_H
