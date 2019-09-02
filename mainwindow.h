#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include <restaurant.h>

namespace Ui {
class MainWindow;
}

extern QList<class restaurant> result;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void set_method(int m){method=m;}

    int get_method(){return method;}

private:
    Ui::MainWindow *ui;
    void enableSearchButton(const QString &); //slot enableSearchButton
    int method=1;//the flag for deciding the method of searching,m=1 Name searching, m=2 Address searching,m=3 Food Type searching
    void show_results(QString searchs);

private slots:
    void on_SearchButton_clicked();                            //slot search
    void on_NameButton_clicked();
    void on_AddressButton_clicked();
    //void on_TypeButton_clicked();
};

#endif // MAINWINDOW_H
