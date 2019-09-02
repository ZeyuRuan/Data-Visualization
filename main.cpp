#include "mainwindow.h"
#include <QApplication>
#include <restaurant.h>
#include <dataprocessing.h>
extern QString s;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}
