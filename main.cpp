#include "mainwindow.h"
#include <QTranslator>
#include <QDebug>
#include <QDir>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //abcd
    QTranslator translator;
    translator.load("zh_second.qm");
    a.installTranslator(&translator);

    MainWindow w;
    w.show();
    return a.exec();
}
