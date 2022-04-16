#ifndef DATAMANAGER_H
#define DATAMANAGER_H

// class Qobject for conccat to qml
#include <QObject>

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

};

#endif // DATAMANAGER_H
