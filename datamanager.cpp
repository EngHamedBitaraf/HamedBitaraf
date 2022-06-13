#include "datamanager.h"
#include <QFile>
#include <QtCore>
DataManager::DataManager(QObject *parent) : QObject(parent)
{
}

QString DataManager::getBackgrand()
{
    return backgrand;
}

QString DataManager::getBackdigram()
{
    return backdigram;
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

QString DataManager::htmlURL ()
{
    QString mes="qrc:/orgChartEditor.html";
    return mes;

}


QJsonValue DataManager::getjson()
{

     return valuejson;
}
