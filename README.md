# QT-WeatherForecast
Create a WeatherForecast using qt
<<<<<<< HEAD

\1. 项目概述

***\*1.1 项目结构\****

weatherforecast/

├── build/          # 构建目录

├── res/           # 资源文件目录

│  └── *.png        # 天气图标资源

├── widget.h        # 主窗口头文件

├── widget.cpp       # 主窗口实现

├── widget.ui        # UI设计文件

├── citycodeutils.h     # 城市编码工具头文件

├── citycodeutils.cpp    # 城市编码工具实现

├── main.cpp        # 程序入口

├── res.qrc        # 资源文件配置

└── weatherforecast.pro   # 项目配置文件

***\*1.2 项目背景\****

本项目是一个基于Qt框架开发的现代化天气预报软件，旨在提供直观、美观且功能丰富的天气信息服务。项目采用C++11标准，基于Qt 6.9开发，实现了实时天气数据展示、多日天气预报、无边框UI等核心功能。

***\*1.3开发环境\****

· 操作系统：Windows 10

· 开发框架：Qt 6.9

· 编程语言：C++ 11

· 编译器：MSVC 2022

· 版本控制：Github

***\*1.4项目目标\****

\1. 实现实时天气数据的获取与展示

\2. 设计美观且用户友好的界面

\3. 提供多日天气预报功能

\4. 实现无边框可拖动UI

\5. 优化网络数据加载性能

\2. 技术架构

***\*2.1 系统架构\****

![img](file:///C:\Users\ASUS\AppData\Local\Temp\ksohtml23980\wps1.jpg) 

***\*2.2 核心类设计\****

| ***\*类名\****        | ***\*职责\****                 | ***\*关键方法/属性\****                                      |
| --------------------- | ------------------------------ | ------------------------------------------------------------ |
| Widget                | 主窗口类，负责UI管理和事件处理 | mousePressEvent, mouseMoveEvent, readHttpReply               |
| WeatherData           | 天气数据结构体                 | date, ymd, week, type, notice, high, low, sunrise, sunset, aqi, fx, fl |
| cityCodeUtils         | 城市编码工具类                 | 城市编码查询和转换                                           |
| QNetworkAccessManager | 网络请求管理                   | 处理HTTP请求和响应                                           |

最终效果图：

![a4710487a41c5049b72cc51010945f6b](weatherforecast\a4710487a41c5049b72cc51010945f6b.png)