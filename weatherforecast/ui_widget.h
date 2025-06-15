/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEditcity;
    QPushButton *pushButton;
    QLabel *labeldate;
    QWidget *widget02;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelWeathericon;
    QGridLayout *gridLayout_2;
    QLabel *labelt;
    QLabel *labelcity;
    QLabel *labeltype;
    QLabel *labelrange;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widgetganmao;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *widget0301;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelFX;
    QVBoxLayout *verticalLayout;
    QLabel *labelFXtype;
    QLabel *labelFXDATA;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelFX_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelPMtype;
    QLabel *labelPM25Data;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelFX_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelSDtype;
    QLabel *labelSDData;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelFX_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelKQtype;
    QLabel *labelKQData;
    QWidget *Widget3;
    QGridLayout *gridLayout_3;
    QLabel *labelday1;
    QLabel *labelday2;
    QLabel *labelday3;
    QLabel *labelday4;
    QLabel *labelday5;
    QLabel *labelday6;
    QLabel *labeldate1;
    QLabel *labeldate2;
    QLabel *labeldate3;
    QLabel *labeldate4;
    QLabel *labeldate5;
    QLabel *labeldate6;
    QWidget *Widget04;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_3;
    QGridLayout *gridLayout_4;
    QLabel *labeliconData5;
    QLabel *labelicon4;
    QLabel *labeliconData4;
    QLabel *labelicon1;
    QLabel *labeliconData6;
    QLabel *labeliconData3;
    QLabel *labelicon2;
    QLabel *labelicon3;
    QLabel *labeliconData2;
    QLabel *labelicon6;
    QLabel *labeliconData1;
    QLabel *labelicon5;
    QWidget *widget;
    QWidget *widget_2;
    QGridLayout *gridLayout_6;
    QLabel *labelFX1;
    QLabel *labelFX2;
    QLabel *labelFX3;
    QLabel *labelFX4;
    QLabel *labelFX5;
    QLabel *labelFX6;
    QLabel *labelFXData1;
    QLabel *labelFXData2;
    QLabel *labelFXData3;
    QLabel *labelFXData4;
    QLabel *labelFXData5;
    QLabel *labelFXData6;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->setEnabled(true);
        Widget->resize(541, 700);
        Widget->setMinimumSize(QSize(111, 31));
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 34, 34);\n"
"color: rgb(250, 250, 250);"));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 0, 523, 691));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(-1, -1, 0, -1);
        lineEditcity = new QLineEdit(layoutWidget);
        lineEditcity->setObjectName("lineEditcity");
        lineEditcity->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_6->addWidget(lineEditcity);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(35, 35));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:10px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/search.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon);
        pushButton->setCheckable(false);

        horizontalLayout_6->addWidget(pushButton);

        labeldate = new QLabel(layoutWidget);
        labeldate->setObjectName("labeldate");
        labeldate->setMinimumSize(QSize(30, 0));
        QFont font;
        font.setPointSize(11);
        labeldate->setFont(font);

        horizontalLayout_6->addWidget(labeldate);


        verticalLayout_7->addLayout(horizontalLayout_6);

        widget02 = new QWidget(layoutWidget);
        widget02->setObjectName("widget02");
        horizontalLayout_5 = new QHBoxLayout(widget02);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        labelWeathericon = new QLabel(widget02);
        labelWeathericon->setObjectName("labelWeathericon");
        labelWeathericon->setMaximumSize(QSize(90, 90));
        labelWeathericon->setPixmap(QPixmap(QString::fromUtf8(":/res/sun.png")));
        labelWeathericon->setScaledContents(true);

        horizontalLayout_5->addWidget(labelWeathericon);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        labelt = new QLabel(widget02);
        labelt->setObjectName("labelt");
        QFont font1;
        font1.setPointSize(21);
        labelt->setFont(font1);

        gridLayout_2->addWidget(labelt, 0, 0, 1, 1);

        labelcity = new QLabel(widget02);
        labelcity->setObjectName("labelcity");
        labelcity->setMinimumSize(QSize(52, 45));
        QFont font2;
        font2.setPointSize(12);
        labelcity->setFont(font2);

        gridLayout_2->addWidget(labelcity, 0, 2, 1, 1);

        labeltype = new QLabel(widget02);
        labeltype->setObjectName("labeltype");
        labeltype->setFont(font2);

        gridLayout_2->addWidget(labeltype, 1, 0, 1, 1);

        labelrange = new QLabel(widget02);
        labelrange->setObjectName("labelrange");
        labelrange->setMinimumSize(QSize(252, 42));
        labelrange->setFont(font);

        gridLayout_2->addWidget(labelrange, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(250, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);


        horizontalLayout_5->addLayout(gridLayout_2);


        verticalLayout_7->addWidget(widget02);

        widgetganmao = new QWidget(layoutWidget);
        widgetganmao->setObjectName("widgetganmao");
        widgetganmao->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        verticalLayout_2 = new QVBoxLayout(widgetganmao);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(widgetganmao);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        widget0301 = new QWidget(widgetganmao);
        widget0301->setObjectName("widget0301");
        widget0301->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 158, 89);\n"
"border-radius:20px"));
        gridLayout = new QGridLayout(widget0301);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelFX = new QLabel(widget0301);
        labelFX->setObjectName("labelFX");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(45);
        sizePolicy.setVerticalStretch(45);
        sizePolicy.setHeightForWidth(labelFX->sizePolicy().hasHeightForWidth());
        labelFX->setSizePolicy(sizePolicy);
        labelFX->setMinimumSize(QSize(45, 45));
        labelFX->setMaximumSize(QSize(45, 45));
        labelFX->setPixmap(QPixmap(QString::fromUtf8(":/res/1.png")));
        labelFX->setScaledContents(true);

        horizontalLayout->addWidget(labelFX);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        labelFXtype = new QLabel(widget0301);
        labelFXtype->setObjectName("labelFXtype");
        labelFXtype->setFont(font);
        labelFXtype->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(labelFXtype);

        labelFXDATA = new QLabel(widget0301);
        labelFXDATA->setObjectName("labelFXDATA");
        labelFXDATA->setFont(font);
        labelFXDATA->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(labelFXDATA);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelFX_2 = new QLabel(widget0301);
        labelFX_2->setObjectName("labelFX_2");
        sizePolicy.setHeightForWidth(labelFX_2->sizePolicy().hasHeightForWidth());
        labelFX_2->setSizePolicy(sizePolicy);
        labelFX_2->setMinimumSize(QSize(45, 45));
        labelFX_2->setMaximumSize(QSize(45, 45));
        labelFX_2->setPixmap(QPixmap(QString::fromUtf8(":/res/3.png")));
        labelFX_2->setScaledContents(true);

        horizontalLayout_2->addWidget(labelFX_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        labelPMtype = new QLabel(widget0301);
        labelPMtype->setObjectName("labelPMtype");
        labelPMtype->setFont(font);
        labelPMtype->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(labelPMtype);

        labelPM25Data = new QLabel(widget0301);
        labelPM25Data->setObjectName("labelPM25Data");
        labelPM25Data->setMinimumSize(QSize(156, 21));
        labelPM25Data->setFont(font);
        labelPM25Data->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(labelPM25Data);


        horizontalLayout_2->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelFX_3 = new QLabel(widget0301);
        labelFX_3->setObjectName("labelFX_3");
        sizePolicy.setHeightForWidth(labelFX_3->sizePolicy().hasHeightForWidth());
        labelFX_3->setSizePolicy(sizePolicy);
        labelFX_3->setMinimumSize(QSize(45, 45));
        labelFX_3->setMaximumSize(QSize(45, 45));
        labelFX_3->setPixmap(QPixmap(QString::fromUtf8(":/res/4.png")));
        labelFX_3->setScaledContents(true);

        horizontalLayout_3->addWidget(labelFX_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        labelSDtype = new QLabel(widget0301);
        labelSDtype->setObjectName("labelSDtype");
        labelSDtype->setFont(font);
        labelSDtype->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(labelSDtype);

        labelSDData = new QLabel(widget0301);
        labelSDData->setObjectName("labelSDData");
        labelSDData->setFont(font);
        labelSDData->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(labelSDData);


        horizontalLayout_3->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        labelFX_4 = new QLabel(widget0301);
        labelFX_4->setObjectName("labelFX_4");
        sizePolicy.setHeightForWidth(labelFX_4->sizePolicy().hasHeightForWidth());
        labelFX_4->setSizePolicy(sizePolicy);
        labelFX_4->setMinimumSize(QSize(45, 45));
        labelFX_4->setMaximumSize(QSize(45, 45));
        labelFX_4->setPixmap(QPixmap(QString::fromUtf8(":/res/1.png")));
        labelFX_4->setScaledContents(true);

        horizontalLayout_4->addWidget(labelFX_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        labelKQtype = new QLabel(widget0301);
        labelKQtype->setObjectName("labelKQtype");
        labelKQtype->setFont(font);
        labelKQtype->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(labelKQtype);

        labelKQData = new QLabel(widget0301);
        labelKQData->setObjectName("labelKQData");
        labelKQData->setFont(font);
        labelKQData->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(labelKQData);


        horizontalLayout_4->addLayout(verticalLayout_5);


        gridLayout->addLayout(horizontalLayout_4, 1, 1, 1, 1);


        verticalLayout_2->addWidget(widget0301);


        verticalLayout_7->addWidget(widgetganmao);

        Widget3 = new QWidget(layoutWidget);
        Widget3->setObjectName("Widget3");
        Widget3->setMinimumSize(QSize(0, 50));
        gridLayout_3 = new QGridLayout(Widget3);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName("gridLayout_3");
        labelday1 = new QLabel(Widget3);
        labelday1->setObjectName("labelday1");
        labelday1->setFont(font);
        labelday1->setStyleSheet(QString::fromUtf8("background-color: rgb(67, 200, 200);\n"
"border-radius:7px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        labelday1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labelday1, 0, 0, 1, 1);

        labelday2 = new QLabel(Widget3);
        labelday2->setObjectName("labelday2");
        labelday2->setFont(font);
        labelday2->setStyleSheet(QString::fromUtf8("background-color: rgb(67, 200, 200);\n"
"border-radius:7px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        labelday2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labelday2, 0, 1, 1, 1);

        labelday3 = new QLabel(Widget3);
        labelday3->setObjectName("labelday3");
        labelday3->setFont(font);
        labelday3->setStyleSheet(QString::fromUtf8("background-color: rgb(67, 200, 200);\n"
"border-radius:7px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        labelday3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labelday3, 0, 2, 1, 1);

        labelday4 = new QLabel(Widget3);
        labelday4->setObjectName("labelday4");
        labelday4->setFont(font);
        labelday4->setStyleSheet(QString::fromUtf8("background-color: rgb(67, 200, 200);\n"
"border-radius:7px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        labelday4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labelday4, 0, 3, 1, 1);

        labelday5 = new QLabel(Widget3);
        labelday5->setObjectName("labelday5");
        labelday5->setFont(font);
        labelday5->setStyleSheet(QString::fromUtf8("background-color: rgb(67, 200, 200);\n"
"border-radius:7px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        labelday5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labelday5, 0, 4, 1, 1);

        labelday6 = new QLabel(Widget3);
        labelday6->setObjectName("labelday6");
        labelday6->setFont(font);
        labelday6->setStyleSheet(QString::fromUtf8("background-color: rgb(67, 200, 200);\n"
"border-radius:7px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        labelday6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labelday6, 0, 5, 1, 1);

        labeldate1 = new QLabel(Widget3);
        labeldate1->setObjectName("labeldate1");
        labeldate1->setMinimumSize(QSize(74, 20));
        labeldate1->setFont(font);
        labeldate1->setStyleSheet(QString::fromUtf8("background-color: rgb(67, 200, 200);\n"
"border-radius:7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        labeldate1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labeldate1, 1, 0, 1, 1);

        labeldate2 = new QLabel(Widget3);
        labeldate2->setObjectName("labeldate2");
        labeldate2->setFont(font);
        labeldate2->setStyleSheet(QString::fromUtf8("background-color: rgb(67, 200, 200);\n"
"border-radius:7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        labeldate2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labeldate2, 1, 1, 1, 1);

        labeldate3 = new QLabel(Widget3);
        labeldate3->setObjectName("labeldate3");
        labeldate3->setFont(font);
        labeldate3->setStyleSheet(QString::fromUtf8("background-color: rgb(67, 200, 200);\n"
"border-radius:7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        labeldate3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labeldate3, 1, 2, 1, 1);

        labeldate4 = new QLabel(Widget3);
        labeldate4->setObjectName("labeldate4");
        labeldate4->setFont(font);
        labeldate4->setStyleSheet(QString::fromUtf8("background-color: rgb(67, 200, 200);\n"
"border-radius:7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        labeldate4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labeldate4, 1, 3, 1, 1);

        labeldate5 = new QLabel(Widget3);
        labeldate5->setObjectName("labeldate5");
        labeldate5->setFont(font);
        labeldate5->setStyleSheet(QString::fromUtf8("background-color: rgb(67, 200, 200);\n"
"border-radius:7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        labeldate5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labeldate5, 1, 4, 1, 1);

        labeldate6 = new QLabel(Widget3);
        labeldate6->setObjectName("labeldate6");
        labeldate6->setFont(font);
        labeldate6->setStyleSheet(QString::fromUtf8("background-color: rgb(67, 200, 200);\n"
"border-radius:7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        labeldate6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labeldate6, 1, 5, 1, 1);


        verticalLayout_7->addWidget(Widget3);

        Widget04 = new QWidget(layoutWidget);
        Widget04->setObjectName("Widget04");
        verticalLayout_6 = new QVBoxLayout(Widget04);
        verticalLayout_6->setObjectName("verticalLayout_6");
        widget_3 = new QWidget(Widget04);
        widget_3->setObjectName("widget_3");
        gridLayout_4 = new QGridLayout(widget_3);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName("gridLayout_4");
        labeliconData5 = new QLabel(widget_3);
        labeliconData5->setObjectName("labeliconData5");
        labeliconData5->setMinimumSize(QSize(46, 20));
        labeliconData5->setFont(font);
        labeliconData5->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 83, 83);\n"
"border-radius:7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        labeliconData5->setScaledContents(false);
        labeliconData5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(labeliconData5, 1, 4, 1, 1);

        labelicon4 = new QLabel(widget_3);
        labelicon4->setObjectName("labelicon4");
        labelicon4->setMinimumSize(QSize(55, 40));
        labelicon4->setMaximumSize(QSize(41, 31));
        labelicon4->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 83, 83);\n"
"border-radius:7px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        labelicon4->setPixmap(QPixmap(QString::fromUtf8(":/res/duoyun.png")));
        labelicon4->setScaledContents(true);

        gridLayout_4->addWidget(labelicon4, 0, 3, 1, 1);

        labeliconData4 = new QLabel(widget_3);
        labeliconData4->setObjectName("labeliconData4");
        labeliconData4->setMinimumSize(QSize(46, 20));
        labeliconData4->setFont(font);
        labeliconData4->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 83, 83);\n"
"border-radius:7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        labeliconData4->setScaledContents(false);
        labeliconData4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(labeliconData4, 1, 3, 1, 1);

        labelicon1 = new QLabel(widget_3);
        labelicon1->setObjectName("labelicon1");
        labelicon1->setMinimumSize(QSize(55, 40));
        labelicon1->setMaximumSize(QSize(41, 31));
        labelicon1->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 83, 83);\n"
"border-radius:7px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        labelicon1->setPixmap(QPixmap(QString::fromUtf8(":/res/duoyun.png")));
        labelicon1->setScaledContents(true);

        gridLayout_4->addWidget(labelicon1, 0, 0, 1, 1);

        labeliconData6 = new QLabel(widget_3);
        labeliconData6->setObjectName("labeliconData6");
        labeliconData6->setMinimumSize(QSize(46, 20));
        labeliconData6->setFont(font);
        labeliconData6->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 83, 83);\n"
"border-radius:7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        labeliconData6->setScaledContents(false);
        labeliconData6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(labeliconData6, 1, 5, 1, 1);

        labeliconData3 = new QLabel(widget_3);
        labeliconData3->setObjectName("labeliconData3");
        labeliconData3->setMinimumSize(QSize(46, 20));
        labeliconData3->setFont(font);
        labeliconData3->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 83, 83);\n"
"border-radius:7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        labeliconData3->setScaledContents(false);
        labeliconData3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(labeliconData3, 1, 2, 1, 1);

        labelicon2 = new QLabel(widget_3);
        labelicon2->setObjectName("labelicon2");
        labelicon2->setMinimumSize(QSize(55, 40));
        labelicon2->setMaximumSize(QSize(41, 31));
        labelicon2->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 83, 83);\n"
"border-radius:7px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        labelicon2->setPixmap(QPixmap(QString::fromUtf8(":/res/duoyun.png")));
        labelicon2->setScaledContents(true);

        gridLayout_4->addWidget(labelicon2, 0, 1, 1, 1);

        labelicon3 = new QLabel(widget_3);
        labelicon3->setObjectName("labelicon3");
        labelicon3->setMinimumSize(QSize(55, 40));
        labelicon3->setMaximumSize(QSize(41, 31));
        labelicon3->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 83, 83);\n"
"border-radius:7px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        labelicon3->setPixmap(QPixmap(QString::fromUtf8(":/res/duoyun.png")));
        labelicon3->setScaledContents(true);

        gridLayout_4->addWidget(labelicon3, 0, 2, 1, 1);

        labeliconData2 = new QLabel(widget_3);
        labeliconData2->setObjectName("labeliconData2");
        labeliconData2->setMinimumSize(QSize(46, 20));
        labeliconData2->setFont(font);
        labeliconData2->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 83, 83);\n"
"border-radius:7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        labeliconData2->setScaledContents(false);
        labeliconData2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(labeliconData2, 1, 1, 1, 1);

        labelicon6 = new QLabel(widget_3);
        labelicon6->setObjectName("labelicon6");
        labelicon6->setMinimumSize(QSize(55, 40));
        labelicon6->setMaximumSize(QSize(41, 31));
        labelicon6->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 83, 83);\n"
"border-radius:7px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        labelicon6->setPixmap(QPixmap(QString::fromUtf8(":/res/duoyun.png")));
        labelicon6->setScaledContents(true);

        gridLayout_4->addWidget(labelicon6, 0, 5, 1, 1);

        labeliconData1 = new QLabel(widget_3);
        labeliconData1->setObjectName("labeliconData1");
        labeliconData1->setMinimumSize(QSize(46, 20));
        labeliconData1->setFont(font);
        labeliconData1->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 83, 83);\n"
"border-radius:7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        labeliconData1->setScaledContents(false);
        labeliconData1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(labeliconData1, 1, 0, 1, 1);

        labelicon5 = new QLabel(widget_3);
        labelicon5->setObjectName("labelicon5");
        labelicon5->setMinimumSize(QSize(55, 40));
        labelicon5->setMaximumSize(QSize(41, 31));
        labelicon5->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 83, 83);\n"
"border-radius:7px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        labelicon5->setPixmap(QPixmap(QString::fromUtf8(":/res/duoyun.png")));
        labelicon5->setScaledContents(true);

        gridLayout_4->addWidget(labelicon5, 0, 4, 1, 1);


        verticalLayout_6->addWidget(widget_3);

        widget = new QWidget(Widget04);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 70));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(152, 152, 152);\n"
"border-radius:10px;"));

        verticalLayout_6->addWidget(widget);

        widget_2 = new QWidget(Widget04);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(0, 70));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(152, 152, 152);\n"
"border-radius:10px;"));

        verticalLayout_6->addWidget(widget_2);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setVerticalSpacing(0);
        labelFX1 = new QLabel(Widget04);
        labelFX1->setObjectName("labelFX1");
        labelFX1->setFont(font);
        labelFX1->setStyleSheet(QString::fromUtf8("background-color: rgb(135, 135, 135);\n"
"border-radius:7px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        labelFX1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_6->addWidget(labelFX1, 0, 0, 1, 1);

        labelFX2 = new QLabel(Widget04);
        labelFX2->setObjectName("labelFX2");
        labelFX2->setFont(font);
        labelFX2->setStyleSheet(QString::fromUtf8("background-color: rgb(135, 135, 135);\n"
"border-radius:7px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        labelFX2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_6->addWidget(labelFX2, 0, 1, 1, 1);

        labelFX3 = new QLabel(Widget04);
        labelFX3->setObjectName("labelFX3");
        labelFX3->setFont(font);
        labelFX3->setStyleSheet(QString::fromUtf8("background-color: rgb(135, 135, 135);\n"
"border-radius:7px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        labelFX3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_6->addWidget(labelFX3, 0, 2, 1, 1);

        labelFX4 = new QLabel(Widget04);
        labelFX4->setObjectName("labelFX4");
        labelFX4->setFont(font);
        labelFX4->setStyleSheet(QString::fromUtf8("background-color: rgb(135, 135, 135);\n"
"border-radius:7px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        labelFX4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_6->addWidget(labelFX4, 0, 3, 1, 1);

        labelFX5 = new QLabel(Widget04);
        labelFX5->setObjectName("labelFX5");
        labelFX5->setFont(font);
        labelFX5->setStyleSheet(QString::fromUtf8("background-color: rgb(135, 135, 135);\n"
"border-radius:7px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        labelFX5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_6->addWidget(labelFX5, 0, 4, 1, 1);

        labelFX6 = new QLabel(Widget04);
        labelFX6->setObjectName("labelFX6");
        labelFX6->setFont(font);
        labelFX6->setStyleSheet(QString::fromUtf8("background-color: rgb(135, 135, 135);\n"
"border-radius:7px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        labelFX6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_6->addWidget(labelFX6, 0, 5, 1, 1);

        labelFXData1 = new QLabel(Widget04);
        labelFXData1->setObjectName("labelFXData1");
        labelFXData1->setFont(font);
        labelFXData1->setStyleSheet(QString::fromUtf8("background-color: rgb(135, 135, 135);\n"
"border-radius:7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        labelFXData1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_6->addWidget(labelFXData1, 1, 0, 1, 1);

        labelFXData2 = new QLabel(Widget04);
        labelFXData2->setObjectName("labelFXData2");
        labelFXData2->setFont(font);
        labelFXData2->setStyleSheet(QString::fromUtf8("background-color: rgb(135, 135, 135);\n"
"border-radius:7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        labelFXData2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_6->addWidget(labelFXData2, 1, 1, 1, 1);

        labelFXData3 = new QLabel(Widget04);
        labelFXData3->setObjectName("labelFXData3");
        labelFXData3->setFont(font);
        labelFXData3->setStyleSheet(QString::fromUtf8("background-color: rgb(135, 135, 135);\n"
"border-radius:7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        labelFXData3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_6->addWidget(labelFXData3, 1, 2, 1, 1);

        labelFXData4 = new QLabel(Widget04);
        labelFXData4->setObjectName("labelFXData4");
        labelFXData4->setFont(font);
        labelFXData4->setStyleSheet(QString::fromUtf8("background-color: rgb(135, 135, 135);\n"
"border-radius:7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        labelFXData4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_6->addWidget(labelFXData4, 1, 3, 1, 1);

        labelFXData5 = new QLabel(Widget04);
        labelFXData5->setObjectName("labelFXData5");
        labelFXData5->setFont(font);
        labelFXData5->setStyleSheet(QString::fromUtf8("background-color: rgb(135, 135, 135);\n"
"border-radius:7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        labelFXData5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_6->addWidget(labelFXData5, 1, 4, 1, 1);

        labelFXData6 = new QLabel(Widget04);
        labelFXData6->setObjectName("labelFXData6");
        labelFXData6->setFont(font);
        labelFXData6->setStyleSheet(QString::fromUtf8("background-color: rgb(135, 135, 135);\n"
"border-radius:7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        labelFXData6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_6->addWidget(labelFXData6, 1, 5, 1, 1);


        verticalLayout_6->addLayout(gridLayout_6);


        verticalLayout_7->addWidget(Widget04);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 2);
        verticalLayout_7->setStretch(2, 3);
        verticalLayout_7->setStretch(4, 10);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        lineEditcity->setText(QString());
        pushButton->setText(QString());
        labeldate->setText(QCoreApplication::translate("Widget", "2023/12/10 \346\230\237\346\234\237\346\227\245", nullptr));
        labelWeathericon->setText(QString());
        labelt->setText(QCoreApplication::translate("Widget", "23", nullptr));
        labelcity->setText(QCoreApplication::translate("Widget", "\346\267\261\345\234\263\345\270\202", nullptr));
        labeltype->setText(QCoreApplication::translate("Widget", "\346\231\264\345\244\251", nullptr));
        labelrange->setText(QCoreApplication::translate("Widget", "20~26\342\204\203", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\345\220\204\347\261\273\344\272\272\347\276\244\345\217\257\350\207\252\347\224\261\346\264\273\345\212\250", nullptr));
        labelFX->setText(QString());
        labelFXtype->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFXDATA->setText(QCoreApplication::translate("Widget", "\344\272\214\347\272\247\345\210\253", nullptr));
        labelFX_2->setText(QString());
        labelPMtype->setText(QCoreApplication::translate("Widget", "PM2.5", nullptr));
        labelPM25Data->setText(QCoreApplication::translate("Widget", "24", nullptr));
        labelFX_3->setText(QString());
        labelSDtype->setText(QCoreApplication::translate("Widget", "\346\271\277\345\272\246", nullptr));
        labelSDData->setText(QCoreApplication::translate("Widget", "85%", nullptr));
        labelFX_4->setText(QString());
        labelKQtype->setText(QCoreApplication::translate("Widget", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        labelKQData->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelday1->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        labelday2->setText(QCoreApplication::translate("Widget", "\344\273\212\345\244\251", nullptr));
        labelday3->setText(QCoreApplication::translate("Widget", "\346\230\216\345\244\251", nullptr));
        labelday4->setText(QCoreApplication::translate("Widget", "\346\230\237\346\234\237\344\272\214", nullptr));
        labelday5->setText(QCoreApplication::translate("Widget", "\346\230\237\346\234\237\344\270\211", nullptr));
        labelday6->setText(QCoreApplication::translate("Widget", "\346\230\237\346\234\237\345\233\233", nullptr));
        labeldate1->setText(QCoreApplication::translate("Widget", "12/9", nullptr));
        labeldate2->setText(QCoreApplication::translate("Widget", "12/9", nullptr));
        labeldate3->setText(QCoreApplication::translate("Widget", "12/9", nullptr));
        labeldate4->setText(QCoreApplication::translate("Widget", "12/9", nullptr));
        labeldate5->setText(QCoreApplication::translate("Widget", "12/9", nullptr));
        labeldate6->setText(QCoreApplication::translate("Widget", "12/9", nullptr));
        labeliconData5->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelicon4->setText(QString());
        labeliconData4->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelicon1->setText(QString());
        labeliconData6->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labeliconData3->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelicon2->setText(QString());
        labelicon3->setText(QString());
        labeliconData2->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelicon6->setText(QString());
        labeliconData1->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelicon5->setText(QString());
        labelFX1->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFX2->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFX3->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFX4->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFX5->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFX6->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFXData1->setText(QCoreApplication::translate("Widget", "\344\272\214\347\272\247", nullptr));
        labelFXData2->setText(QCoreApplication::translate("Widget", "\344\272\214\347\272\247", nullptr));
        labelFXData3->setText(QCoreApplication::translate("Widget", "\344\272\214\347\272\247", nullptr));
        labelFXData4->setText(QCoreApplication::translate("Widget", "\344\272\214\347\272\247", nullptr));
        labelFXData5->setText(QCoreApplication::translate("Widget", "\344\272\214\347\272\247", nullptr));
        labelFXData6->setText(QCoreApplication::translate("Widget", "\344\272\214\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
