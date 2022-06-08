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
     QString backgrand ="blue";
     QString backdigram= "red";

     void setBackgrand(QString back);
     void setBackdigram(QString back);

signals:

public slots:
     /// function slot for address html and  data path
     QString htmlURL();
     QString getdata();
     QJsonValue readjson();
     QString getBackgrand();
     QString getBackdigram();


};

#endif // DATAMANAGER_H
