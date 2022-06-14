#include "mainwindow.h"
#include <QtWebEngine>
#include <QApplication>
#include <datamanager.h>
int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_ShareOpenGLContexts);
    QApplication a(argc, argv);

    QtWebEngine::initialize();
    MainWindow w;
    w.show();
    return a.exec();
}
