#ifndef WIDGET_H
#define WIDGET_H
#include "citycodeutils.h"
#include <QWidget>
#include<QMouseEvent>
#include <QMenu>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QMessageBox>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
#include <QPainter>
#include <QPoint>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    bool eventFilter(QObject *watch,QEvent *event);
    void drawTempLineHigh();
    void drawTempLineLow();

public slots:
    void readHttpReply(QNetworkReply *reply);
private slots:
    void on_pushButton_clicked();

private:
    struct WeatherData {
        QString date;
        QString ymd;
        QString week;
        QString type;
        QString notice;
        QString high;
        QString low;
        QString sunrise;
        QString sunset;
        int aqi = 0;
        QString fx;
        QString fl;
    };
    Ui::Widget *ui;
    QMenu *menuQuit;
    QPoint mOffset;
    QNetworkReply *reply;
    QByteArray rawData;
    QList<WeatherData> weatherForecast;
    WeatherData today;
    QString URL;
    QNetworkAccessManager *manager;
    cityCodeUtils CityCodeUtils;
    QMap<QString,QString> TypeMap;
    QList<QLabel *>mAirList;
    void extracted(QJsonObject &objRoot);
    void parseWeatherJsonData(QByteArray rawData);
};

#endif // WIDGET_H
