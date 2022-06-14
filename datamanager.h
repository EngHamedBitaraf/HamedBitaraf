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
    explicit DataManager(QObject *parent=nullptr);
     void setBackgrand(const QString back);
     void setBackdigram(const QString back);
     void setJosnArray(const QJsonArray arr);

private:
     QString backgrand ="blue";
     QString backdigram= "red";
     QJsonValue valuejson;
public slots:
     /// function slot for address html and  data path
     QString htmlURL();
     QJsonValue getjson();
     QString getBackgrand();
     QString getBackdigram();


};

#endif // DATAMANAGER_H
