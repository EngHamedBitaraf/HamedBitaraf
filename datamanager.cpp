#include "datamanager.h"
#include <QFile>
#include <QtCore>
#include <QDebug>
DataManager::DataManager(QObject *parent):QObject(parent)
{
}

QString DataManager::getBackgrand() const
{
    return backgrand;
}

QString DataManager::getBackdigram() const
{
    return backdigram;
}

int DataManager::getfont() const
{
    return  font;
}



void DataManager::getparent( const QString str)
{
    qDebug()<<str;
}

void DataManager::getChildren(const QList<QString> &data)
{
    qDebug() << "Tester::bla():" << data;
}



void DataManager::setBackgrand(const QString back)
{
    backgrand=back;
}

void DataManager::setBackdigram( const QString back)
{
    backdigram= back;
}

void DataManager::setJosnArray(const QJsonArray arr)
{

     QJsonObject obj;
     obj [ "nodeDataArray" ] = arr;
     valuejson = obj.value(QString("nodeDataArray"));
}

void DataManager::setfont(const int font)
{
    this->font=font;
}

QString DataManager::htmlURL () const
{
    QString mes="qrc:/orgChartEditor.html";
    return mes;

}


QJsonValue DataManager::getjson() const
{

     return valuejson;
}
