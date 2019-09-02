#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <QTextStream>

class restaurant
{
public:
    restaurant();
    restaurant(QString _name, double _latitude, double _longitude, double _stars, int _review_count, QString _address);
    QString getname();
    double getlatitude();
    double getlongitude();
    double getstars();
    int getreview_count();
    QString getaddress();

    void setname(QString _name);
    void setlatitude(double _latitude);
    void setlongitude(double _longitude);
    void setstars(double _stars);
    void setreview_count(int _review_count);
    void setaddress(QString _address);

private:
    QString name;
    double latitude;
    double longitude;
    double stars;                   // avg stars
    int review_count;               // the num of reviews
    QString address;
    //double rank;
    //QList<QString> review;
};

#endif // RESTAURANT_H
