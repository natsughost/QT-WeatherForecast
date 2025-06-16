#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setFixedSize(541,700);
    setWindowFlag(Qt::FramelessWindowHint);
    menuQuit = new QMenu(this);
    QAction *openAct =new QAction(QIcon(":/res/close.png"),tr("Quit"),this);
    menuQuit->addAction(openAct);
    connect(menuQuit,&QMenu::triggered,this,[this]{
        this->close();
    });  

    manager =new QNetworkAccessManager(this);
    URL="http://t.weather.itboy.net/api/weather/city/101010100";
    QUrl urlTianqi(URL);
    QNetworkRequest res(urlTianqi);
    reply = manager->get(res);
    connect(manager,&QNetworkAccessManager::finished,this,&Widget::readHttpReply);
    TypeMap.insert("暴雪", ":/res/baoxue.png");
    TypeMap.insert("小雪", ":/res/xiaoxue.png");
    TypeMap.insert("中雪", ":/res/zhongxue.png");
    TypeMap.insert("大雨", ":/res/dayu.png");
    TypeMap.insert("小雨", ":/res/xiaoyu.png");
    TypeMap.insert("阵雪", ":/res/zhenyu.png");
    TypeMap.insert("雨夹雪", ":/res/yujiaxue.png");
    TypeMap.insert("中雨", ":/res/zhongyu.png");
    TypeMap.insert("大雨", ":/res/dayu.png");
    TypeMap.insert("暴雨", ":/res/baoyu.png");
    TypeMap.insert("雾", ":/res/wu.png");
    TypeMap.insert("沙尘暴", ":/res/shachenbao.png");
    TypeMap.insert("雷阵雨", ":/res/leizhenyu.png");
    TypeMap.insert("多云", ":/res/duoyun.png");
    TypeMap.insert("阴", ":/res/yin.png");
    TypeMap.insert("晴", ":/res/sun.png");
    TypeMap.insert("霾", ":/res/mai.png");
    TypeMap.insert("浮尘", ":/res/fuchen.png");
    TypeMap.insert("扬沙", ":/res/yangchen.png");
    TypeMap.insert("冻雨", ":/res/dongyu.png");
    ui->widget->installEventFilter(this);
    ui->widget_2->installEventFilter(this);
    mAirList = {
        ui->labeldate1, ui->labeldate2, ui->labeldate3,
        ui->labeldate4, ui->labeldate5, ui->labeldate6
    };
}

Widget::~Widget()
{
    delete ui;
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::RightButton){
        menuQuit->exec(QCursor::pos());
    }
    if(event->button()==Qt::LeftButton){
        mOffset=event->globalPos()-this->pos();
    }
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    this->move(event->globalPos()-mOffset);
}

bool Widget::eventFilter(QObject *watch, QEvent *event)
{
    if(watch==ui->widget &&event->type()==QEvent::Paint){
        drawTempLineHigh();
        return true;
    }
    if(watch==ui->widget_2 &&event->type()==QEvent::Paint){
        drawTempLineLow();
        return true;
    }
    return QWidget::eventFilter(watch,event);
}

void Widget::drawTempLineHigh()
{
    if (weatherForecast.size() < mAirList.size() || mAirList.isEmpty()) {
        return;
    }

    QPainter painter(ui->widget);
    painter.setRenderHint(QPainter::Antialiasing);

    int sum = 0;
    for (int i = 0; i < mAirList.size(); i++) {
        QString tempStr = weatherForecast[i].high;
        tempStr.replace("℃", "");
        QStringList parts = tempStr.split(" ");
        bool ok = false;
        int temp = parts.last().toInt(&ok);
        if (ok) sum += temp;
    }
    int ave = sum / mAirList.size();

    int middle = ui->widget->height() / 2;
    QVector<QPoint> points;

    painter.setBrush(Qt::yellow);
    painter.setPen(QPen(Qt::yellow, 3));

    for (int i = 0; i < mAirList.size(); i++) {
        QString tempStr = weatherForecast[i].high;
        tempStr.replace("℃", "");
        QStringList parts = tempStr.split(" ");
        bool ok = false;
        int temp = parts.last().toInt(&ok);
        if (!ok) continue;
        QPoint point(
            mAirList[i]->x() + mAirList[i]->width() / 2-10,
            middle - (temp - ave) * 3
            );
        points.append(point);
        painter.drawEllipse(point, 6, 6);
        painter.drawText(point.x() + 10, point.y()-10, QString::number(temp) + "℃");
    }
    if (points.size() > 1) {
        QPen linePen(QColor(255, 165, 0), 2);
        painter.setPen(linePen);
        painter.drawPolyline(points);
    }
}

void Widget::drawTempLineLow()
{
    if (weatherForecast.size() < mAirList.size() || mAirList.isEmpty()) {
        return;
    }

    QPainter painter(ui->widget_2);
    painter.setRenderHint(QPainter::Antialiasing);

    int sum = 0;
    for (int i = 0; i < mAirList.size(); i++) {
        QString tempStr = weatherForecast[i].low;
        tempStr.replace("℃", "");
        QStringList parts = tempStr.split(" ");
        bool ok = false;
        int temp = parts.last().toInt(&ok);
        if (ok) sum += temp;
    }
    int ave = sum / mAirList.size();

    int middle = ui->widget_2->height() / 2;
    QVector<QPoint> points;

    painter.setBrush(Qt::blue);
    painter.setPen(QPen(Qt::blue, 3));

    for (int i = 0; i < mAirList.size(); i++) {
        QString tempStr = weatherForecast[i].low;
        tempStr.replace("℃", "");
        QStringList parts = tempStr.split(" ");
        bool ok = false;
        int temp = parts.last().toInt(&ok);
        if (!ok) continue;

        QPoint point(
            mAirList[i]->x() + mAirList[i]->width() / 2-10,
            middle - (temp - ave) * 3+8
            );
        points.append(point);
        painter.drawEllipse(point, 6, 6);
        painter.drawText(point.x() + 10, point.y()-10, QString::number(temp) + "℃");
    }

    if (points.size() > 1) {
        QPen linePen(QColor(255, 165, 0), 2);
        painter.setPen(linePen);
        painter.drawPolyline(points);
    }
}

void Widget::parseWeatherJsonData(QByteArray rawData){
    QJsonDocument jsonObj =QJsonDocument::fromJson(rawData);  //转化为json对象
    if(!jsonObj.isNull()&& jsonObj.isObject()){
        QJsonObject objRoot =jsonObj.object();
        QString time =objRoot["time"].toString();
        QString date =objRoot["date"].toString();
        ui->labeldate->setText(time);
        QJsonObject cityInfo = jsonObj["cityInfo"].toObject();
        QString city =cityInfo["city"].toString();
        ui->labelcity->setText(city);
        QJsonObject data =objRoot["data"].toObject();
        QString wendu =data["wendu"].toString();
        ui->labelt->setText(wendu+"℃");
        QJsonArray forecastArray = data["forecast"].toArray();
        for (const QJsonValue &dayValue : forecastArray) {
            QJsonObject dayObj = dayValue.toObject();
            WeatherData dayData;
            dayData.date = dayObj["date"].toString();
            dayData.high = dayObj["high"].toString();
            dayData.low = dayObj["low"].toString();
            dayData.ymd = dayObj["ymd"].toString();
            dayData.week = dayObj["week"].toString();
            dayData.sunrise = dayObj["sunrise"].toString();
            dayData.sunset = dayObj["sunset"].toString();
            dayData.aqi = dayObj["aqi"].toInt();
            dayData.fx = dayObj["fx"].toString();
            dayData.fl = dayObj["fl"].toString();
            dayData.type = dayObj["type"].toString();
            dayData.notice = dayObj["notice"].toString();
            weatherForecast.append(dayData);
        }
        ui->labelrange->setText(weatherForecast[0].low+" "+weatherForecast[0].high);
        QString ganmao=data["ganmao"].toString();
        ui->label->setText("感冒指数："+ganmao);
        ui->labelFXtype->setText(weatherForecast[0].fx);
        ui->labelFXDATA->setText(weatherForecast[0].fl);
        QString shidu =data["shidu"].toString();
        ui->labelSDData->setText(shidu);
        int pm25Value = data["pm25"].toInt();
        QString pm25 = QString::number(pm25Value);
        ui->labelPM25Data->setText(pm25);
        QString KQ =data["quality"].toString();
        ui->labelKQData->setText(KQ);
        ui->labeltype->setText(weatherForecast[0].type);
        ui->labelWeathericon->setPixmap(TypeMap[weatherForecast[0].type]);
        //今天
        ui->labelFX2->setText(weatherForecast[0].fx);
        ui->labelFXData2->setText(weatherForecast[0].fl);
        ui->labeldate2->setText(weatherForecast[0].ymd.mid(5));
        ui->labelicon2->setPixmap(TypeMap[weatherForecast[0].type]);
        ui->labeliconData2->setText(weatherForecast[0].type);
        //昨天
        QJsonObject dataObj = objRoot["data"].toObject();
        QJsonObject yesterday = dataObj["yesterday"].toObject();
        QString ytype = yesterday["type"].toString();
        QString ymd = yesterday["ymd"].toString();
        QString fx = yesterday["fx"].toString();
        QString fl = yesterday["fl"].toString();
        ui->labelFX1->setText(fx);
        ui->labelFXData1->setText(fl);
        ui->labeldate1->setText(ymd.mid(5));
        ui->labelicon1->setPixmap(TypeMap[ytype]);
        ui->labeliconData1->setText(ytype);
        //明天labeldate3
        ui->labelFX3->setText(weatherForecast[1].fx);
        ui->labelFXData3->setText(weatherForecast[1].fl);
        ui->labeldate3->setText(weatherForecast[1].ymd.mid(5));
        ui->labelicon3->setPixmap(TypeMap[weatherForecast[1].type]);
        ui->labeliconData3->setText(weatherForecast[1].type);
        // 后天
        ui->labelFX4->setText(weatherForecast[2].fx);
        ui->labelFXData4->setText(weatherForecast[2].fl);
        ui->labeldate4->setText(weatherForecast[2].ymd.mid(5));
        ui->labelicon4->setPixmap(TypeMap[weatherForecast[2].type]);
        ui->labeliconData4->setText(weatherForecast[2].type);
        // 大后天
        ui->labelFX5->setText(weatherForecast[3].fx);
        ui->labelFXData5->setText(weatherForecast[3].fl);
        ui->labeldate5->setText(weatherForecast[3].ymd.mid(5));
        ui->labelicon5->setPixmap(TypeMap[weatherForecast[3].type]);
        ui->labeliconData5->setText(weatherForecast[3].type);
        // 大大后天
        ui->labelFX6->setText(weatherForecast[4].fx);
        ui->labelFXData6->setText(weatherForecast[4].fl);
        ui->labeldate6->setText(weatherForecast[4].ymd.mid(5));
        ui->labelicon6->setPixmap(TypeMap[weatherForecast[4].type]);
        ui->labeliconData6->setText(weatherForecast[4].type);
        ui->widget->update();
        ui->widget_2->update();

    }

}
void Widget::readHttpReply(QNetworkReply *reply)
{
    int resCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    if(reply->error()==QNetworkReply::NoError&& resCode==200){
        QByteArray data=reply->readAll();
        parseWeatherJsonData(data);
    }else{
        QMessageBox::warning(this,"错误","网络请求失败",QMessageBox::Ok);
    }
}
void Widget::on_pushButton_clicked()
{
    weatherForecast.clear();
    QString cityname =ui->lineEditcity->text();
    QString citycode =CityCodeUtils.getCityCode(cityname);
    if(!citycode.isEmpty()){
    URL = QString("http://t.weather.itboy.net/api/weather/city/%1")
        .arg(citycode);
        manager->get(QNetworkRequest(QUrl(URL)));
    }else{
        QMessageBox::warning(this,"错误","请输入正确的城市名称",QMessageBox::Ok);
    }
}

