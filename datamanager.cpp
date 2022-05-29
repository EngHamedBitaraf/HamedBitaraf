#include "datamanager.h"
#include <QFile>
#include <QtCore>
DataManager::DataManager(QObject *parent) : QObject(parent)
{

}

QString DataManager::htmlURL ()
{
    QString mes="qrc:/orgChartEditor.html";
    return mes;

}

QString DataManager::getdata()
{
    return path;
}

QJsonValue DataManager::readjson()
{
    QString val;

          QFile file;
          file.setFileName(":/data.json");
          file.open(QIODevice::ReadOnly | QIODevice::Text);
          val = file.readAll();
          file.close();
          //qWarning() << val;
          QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());
          QJsonObject sett2 = d.object();
          QJsonValue value = sett2.value(QString("nodeDataArray"));
          QJsonObject item = value.toObject();
          return value;



//          QJsonObject item = value.toObject();
//          qWarning() << tr("QJsonObject of description: ") << item;

//          /* in case of string value get value and convert into string*/
//          //qWarning() << tr("QJsonObject[appName] of description: ") << item["description"];
//          QJsonValue subobj = item["description"];
//         //qWarning() << subobj.toString();

//          /* in case of array get array and convert into string*/
//          qWarning() << tr("QJsonObject[appName] of value: ") << item["imp"];
//          QJsonArray test = item["imp"].toArray();
//          //qWarning() << test[1].toString();
}
