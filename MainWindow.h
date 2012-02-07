#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QMainWindow>
#include "ui_NotePad.h"
#include "About.h"
#include "Contents.h"


class MainWindow:public QMainWindow,public Ui::NotePad
{
    Q_OBJECT
public:
    MainWindow();
private slots:
    void Modified();

  bool Save();
  bool SaveAs();
  void New();
  void Open();
  void Abouts();
  void Content();
  void copy();
  void paste();
  void Delete();
  bool WriteFile(const QString &FileName);
  bool ReadFile(const QString &FileName);
private:
    quint32 MagicNumber;
    QString curfile;
    void ReadSettings();
    void WriteSettings();
    void SetCurrentFile(const QString &FileName);
    bool LoadFile(const QString & FileName);
    bool SaveFile(const QString & FileName);
    Contents *c;
    About *a;


   public:
    void CreateAction();
    void CreateContextMenu();


};



#endif // MAINWINDOW_H
