#include <QTextStream>
#include "restaurant.h"

    restaurant::restaurant(QString _name, double _latitude, double _longitude, double _stars, int _review_count, QString _address)
    {
        name = _name;
        latitude = _latitude;
        longitude = _longitude;
        stars = _stars;
        review_count = _review_count;
        address = _address;
        //rank = setrank();
    }
    QString restaurant::getname()
    {
        return name;
    }
    double restaurant::getlatitude()
    {
        return latitude;
    }
    double restaurant::getlongitude()
    {
        return longitude;
    }
    double restaurant::getstars()
    {
        return stars;
    }
    int restaurant::getreview_count()
    {
        return review_count;
    }
    QString restaurant::getaddress()
    {
        return address;
    }
    void restaurant::setname(QString _name)
    {
        name = _name;
    }
    void restaurant::setlatitude(double _latitude)
    {
        latitude = _latitude;
    }
    void restaurant::setlongitude(double _longitude)
    {
        longitude = _longitude;
    }
    void restaurant::setstars(double _stars)
    {
        stars = _stars;
    }
    void restaurant::setreview_count(int n)
    {
        review_count = n;
    }
    void restaurant::setaddress(QString _address)
    {
        address = _address;
    }
