#include "citycodeutils.h"

#include <QJsonDocument>
#include <QFile>
#include <QJsonArray>
cityCodeUtils::cityCodeUtils() {

}
QString cityCodeUtils::getCityCode(QString cityName){
    if(cityMap.isEmpty()){
        initCityMap();
    }
    QMap<QString,QString>::Iterator it =cityMap.find(cityName);
    if(it==cityMap.end()){
        it = cityMap.find(cityName+"市");
    if(it==cityMap.end())
        it = cityMap.find(cityName+"县");
    if(it==cityMap.end())
        it = cityMap.find(cityName+"区");
    if(it==cityMap.end())
        return "";
    }

    return it.value();
}

void cityCodeUtils::initCityMap()
{
    QFile file(":/res/data.json");
    file.open(QIODevice::ReadOnly);
    QByteArray rawData =file.readAll();
    file.close();
    QJsonDocument jsonDoc =QJsonDocument::fromJson(rawData);
    if(jsonDoc.isArray()){
        QJsonArray citys =jsonDoc.array();
        for (QJsonValue value:citys) {
            if(value.isObject()){
                QString cityName =value["city_name"].toString();
                QString cityCode =value["city_code"].toString();
                cityMap.insert(cityName,cityCode);
            }
        }
    }
}
