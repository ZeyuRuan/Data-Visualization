#include "match.h"
#include <QTextStream>
#include <iostream>
#include <QString>

QList<restaurant> match(int n, QString text, const QList<restaurant> &data)
{
   QList<restaurant> result;
   if(n==1)
   {
       Q_FOREACH(restaurant r, data)
       {
           if(r.getname().contains(text,Qt::CaseInsensitive))
               result.push_back(r);
       }
   }
   else if(n==2)
   {
       Q_FOREACH(restaurant r, data)
       {
           if(r.getaddress().contains(text,Qt::CaseInsensitive))
               result.push_back(r);
       }
   }
   return result;
}
