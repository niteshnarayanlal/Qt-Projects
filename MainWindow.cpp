#include<QtGui>
#include "MainWindow.h"
#include "Contents.h"
#include "About.h"
MainWindow::MainWindow()
{
    textedit=new QTextEdit;
    c=new Contents;
    a=new About;
    setWindowTitle("NotePad");
    setWindowIcon(QIcon(":/images/file.png"));
    setupUi(this);
    MagicNumber=909012123;

    textedit->addAction(actionCopy);
    textedit->addAction(actionPaste);
    textedit->addAction(actionCut);
    textedit->setContextMenuPolicy(Qt::ActionsContextMenu);

    CreateAction();

    connect(actionCopy,SIGNAL(triggered()),this,SLOT(copy()));
    connect(actionPaste,SIGNAL(triggered()),this,SLOT(paste()));
    connect(actionSave,SIGNAL(triggered()),this,SLOT(Save()));
    connect(actionSave_As,SIGNAL(triggered()),this,SLOT(SaveAs()));
    connect(actionDelete,SIGNAL(triggered()),textedit,SLOT(clear()));
    connect(actionOpen,SIGNAL(triggered()),textedit,SLOT(clear()));
    connect(actionOpen_2,SIGNAL(triggered()),this,SLOT(Open()));
    connect(textedit,SIGNAL(textChanged()),this,SLOT(Modified()));
toolBar->addAction(actionOpen);
toolBar->addAction(actionOpen_2);
toolBar->addAction(actionSave);
toolBar_2->addAction(actionCopy);
toolBar_2->addAction(actionPaste);
toolBar_2->addAction(actionCut);
toolBar_2->addAction(actionDelete);


}


void MainWindow::Modified()
{
    setWindowModified(TRUE);
}





void MainWindow::CreateAction()
{

    connect(actionClose,SIGNAL(triggered()),this,SLOT(close()));
    connect(actionAbout,SIGNAL(triggered()),this,SLOT(Abouts()));
    connect(actionContents,SIGNAL(triggered()),this,SLOT(Content()));





}



void MainWindow::Open()
{

        QString FileName=QFileDialog::getOpenFileName(this,tr("open file"),".",tr("notepad  File (*.sp)"));
        if(!FileName.isEmpty())
        LoadFile(FileName);////check here another default function


   }



bool MainWindow::LoadFile(const QString &FileName)
{


    if(!ReadFile(FileName))
    {
        statusBar()->showMessage(tr("Loading canceled"),2000);
        return false;
    }


    SetCurrentFile(FileName);
    statusBar()->showMessage(tr("File Loaded"),2000);

    return true;
}

bool MainWindow::WriteFile(const QString &FileName)
{


    QFile file(FileName);
    if (!file.open(QIODevice::WriteOnly)) {
          QMessageBox::warning(this, tr("notepad"),
                               tr("Cannot write file %1:/n%2.")
                               .arg(file.fileName())
                               .arg(file.errorString()));
          return false;
      }
      QDataStream out(&file);
      out.setVersion(QDataStream::Qt_4_3);
      out << quint32(MagicNumber);
      QApplication::setOverrideCursor(Qt::WaitCursor);

                  out <<textedit->toPlainText();


         QApplication::restoreOverrideCursor();
         return true;


}



bool MainWindow::ReadFile(const QString &fileName)
{
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, tr("Notepad"),
                             tr("Cannot read file %1:/n%2.")
                             .arg(file.fileName())
                             .arg(file.errorString()));
        return false;
    }
    QDataStream in(&file);
    in.setVersion(QDataStream::Qt_4_3);
    quint32 magic;
    in >> magic;
    if (magic != MagicNumber) {
        QMessageBox::warning(this, tr("Notepad"),
                             tr("The file is not a Notepad file."));
        return false;
    }
    textedit->clear();
    QString str;
    QApplication::setOverrideCursor(Qt::WaitCursor);

    in >> str;
    textedit->setPlainText(str);
    QApplication::restoreOverrideCursor();
    return true;
}




bool MainWindow::Save()
{
    if(curfile.isEmpty())
        return SaveAs();
    else
        return SaveFile(curfile);

}






bool MainWindow::SaveFile(const QString &FileName)
{

    if(!WriteFile(FileName))
        statusBar()->showMessage(tr("Saving canceled"),2000);
        return false;



    SetCurrentFile(FileName);
    statusBar()->showMessage(tr("File Saved"),2000);

    return true;
}



bool MainWindow::SaveAs()
{

    QString FileName=QFileDialog::getSaveFileName(this,tr("save file"),".",tr("notepad(*.sp)"));

    if(FileName.isEmpty())
        return false;
    return SaveFile(FileName);
 }





void MainWindow::Abouts()
{
    a->show();
}
void MainWindow::Content()
{
    c->show();
}

void MainWindow::SetCurrentFile(const QString &FileName)
{
    curfile=FileName;
    setWindowModified(false);
    QString shownname=tr("Untitiled");
     setWindowTitle(tr("%1[*] - %2").arg(shownname)////////////////////////////use of this function
                                      .arg(tr("Notepad")));
   }




void MainWindow::WriteSettings()
{

    QSettings settings("Software Inc.","notepad");
    settings.setValue("geometry",saveGeometry());
}


void MainWindow::ReadSettings()
{

    QSettings settings("Software Inc.","notepad");
    restoreGeometry(settings.value("Geometry").toByteArray());

}


void MainWindow::copy()
{
    textedit->copy();
}



void MainWindow::paste()
{
    textedit->paste();
}


void MainWindow::Delete()
{
    textedit->clear();

}

void MainWindow::New()
{


    if(isWindowModified())
    {
        int s=QMessageBox::warning(this,tr("::NotePad::"),tr("::Document has been modified::""\nDo you wanna save your changes?"),
                                   QMessageBox::Cancel|QMessageBox::No|QMessageBox::Cancel);

        if(s==QMessageBox::Yes)
             MainWindow::Save();
        else if(QMessageBox::No)
          textedit->clear();

    }


}
