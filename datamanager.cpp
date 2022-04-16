#include "datamanager.h"

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
