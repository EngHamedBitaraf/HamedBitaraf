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
     void  setfont(const int font);

private:
     QString backgrand ="blue";
     QString backdigram= "red";
     QJsonValue valuejson;
     int font =8;
public slots:
     /// function slot for address html and  data path
     QString htmlURL() const;
     QJsonValue getjson() const;
     QString getBackgrand() const;
     QString getBackdigram() const;
     int getfont() const;
     Q_INVOKABLE void getparent(const QString str);
    Q_INVOKABLE void getChildren(const QList<QString> &data);




};

#endif // DATAMANAGER_H
