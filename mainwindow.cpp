#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "datamanager.h"
#include <QtCore>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{ 
    ui->setupUi(this);
    showMaximized();
    QJsonObject o1
     {
         { "key", 1 },
         { "colorborder", "#234324" },
        {"colorlink","green"},
         { "color", "red" },
        {"type","1"},
        {"name","سبزوار"},
        {"title","CEO"},
     };
    QJsonObject o6
     {
         { "key", 2 },
         { "colorborder", "#234324" },
        {"colorlink","green"},
         { "color", "red" },
        {"type","1"},
        {"name","مشهد"},
        {"title","CEO"},
        {"parent",1},
     };
    QJsonObject o2
     {
         { "key", 3 },
         { "colorborder", "#234324" },
         { "color", "red" },
        {"colorlink","green"},
        {"type","1"},
        {"name","نیشابور"},
        {"title","CEO"},
        {"parent",1},
     };
    QJsonObject o3
     {
         { "key", 4 },
         { "colorborder", "#234324" },
         { "color", "red" },
        {"colorlink","green"},
        {"type","1"},
        {"name","شاهرود"},
        {"title","CEO"},
        {"parent",1},
     };
    QJsonObject o4
     {
         { "key", 5 },
         { "colorborder", "#234324" },
         { "color", "red" },
        {"colorlink","green"},
        {"type","1"},
        {"name","سمنان"},
        {"title","CEO"},
        {"parent",1},
     };
    QJsonObject o5
     {
         { "key", 6 },
         { "colorborder", "#234324" },
         { "color", "red" },
        {"colorlink","green"},
        {"type","1"},
        {"name","تهران"},
        {"title","CEO"},
        {"parent",1},
     };
     QJsonArray arr;
     arr.append ( o1 );
     arr.append ( o2 );
     arr.append(o3);
     arr.append ( o4 );
     arr.append ( o5 );
     arr.append(o6);
    ///dispaly qml
    DataManager *d=new DataManager;
    d->setJosnArray(arr);
    d->setBackdigram("#383b4d");
    d->setBackgrand("#2e355f");
    /// get file main.qml
    //Context->setContextProperty("datamanager",d);
    view= new QQuickView(QUrl(QLatin1String("qrc:/main.qml")));
    /// set data class datamanager to main qml
    view->engine()->rootContext()->setContextProperty("datamanager",d);
    ///set qml to widget
    qmlwidget=QWidget::createWindowContainer(view);
    /// horizontalLayout creat in ui
    ui->horizontalLayout->addWidget(qmlwidget);

}

MainWindow::~MainWindow()
{
    delete ui;
}

