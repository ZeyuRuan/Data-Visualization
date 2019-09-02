#ifndef MYIMGTEST_H
#define MYIMGTEST_H

#include <QWidget>
class MyImgTest : public QWidget
{
    //Q_OBJECT
public:
    MyImgTest(QWidget* parent = 0);
    ~MyImgTest();
    void paintEvent(QPaintEvent *);
};
#endif
