#include "myimgtest.h"
#include <QPainter>
#include <dataprocessing.h>
#include <QPointF>
#include <match.h>
#include <mainwindow.h>
#include "ui_mainwindow.h"
#include <qdebug.h>
#include <qmath.h>

MyImgTest::MyImgTest(QWidget* parent) : QWidget(parent)
{
    setFixedSize(531,661); //固定大小
    //setFixedSize(591,741); //固定大小
    setWindowTitle("List");
    setStyleSheet("image:url(:/map.jpg)");
}
MyImgTest::~MyImgTest()
{

}
void MyImgTest::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    //QPen pen;
    //pen.setStyle(Qt::DashLine);
    //pen.setColor(Qt::red);
    painter.setPen(QPen(Qt::red,5));

    Q_FOREACH(restaurant r, result)
    {
        int x, y;
        double xx = r.getlongitude();
        double yy = r.getlatitude();
        x = int( (xx+71.418730) * 531.6 / (-71.390189+71.418730) );
        y = int( (yy-41.837447) * 661.6 / (41.811000-41.837447) / qCos(41.82375/180) );

        qDebug()<<qCos(41.82375/180)<<endl;
        qDebug()<<xx<<" "<<yy<<endl;
        qDebug()<<x<<" "<<y<<endl;
        painter.drawPoint(x,y);
    }

    /*painter.setPen(QPen(Qt::red,5));

    // 画多个点
    QPointF pointf[10];
    for (int i=0; i<10; ++i)
    {
        pointf[i].setX(2.0+i*10.0);
        pointf[i].setY(130.0);
    }
    painter.drawPoints(pointf, 10);*/

}
