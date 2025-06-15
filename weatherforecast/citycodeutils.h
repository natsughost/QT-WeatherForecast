#ifndef CITYCODEUTILS_H
#define CITYCODEUTILS_H
#include<QString>
#include<QMap>
class cityCodeUtils
{
public:
    cityCodeUtils();
    QMap<QString,QString> cityMap;
    QString getCityCode(QString cityName);
    void initCityMap();
};

#endif // CITYCODEUTILS_H
