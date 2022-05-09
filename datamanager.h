#ifndef DATAMANAGER_H
#define DATAMANAGER_H

// class Qobject for conccat to qml
#include <QObject>
#include <QJsonValue>
#include <QJsonObject>
class DataManager : public QObject
{
    Q_OBJECT
public:
    explicit DataManager(QObject *parent = nullptr);
    //address file display tree
     QString path ="qrc:/data.json";
signals:

public slots:
     /// function slot for address html and  data path
    QString htmlURL();
    QString getdata();
    QJsonValue readjson();

};

#endif // DATAMANAGER_H
