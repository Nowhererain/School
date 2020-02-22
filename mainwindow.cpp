#include "mainwindow.h"
#include <QMenuBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QMenuBar * bar = menuBar();
    resize(600, 400);
    setMenuBar(bar);
    QMenu * fileMenu = bar->addMenu(tr("File"));
    QMenu * editMenu = bar->addMenu(tr("Edit"));

    QAction * newFile = fileMenu->addAction(tr("New"));
    fileMenu->addSeparator();
    QAction * openFile = fileMenu->addAction(tr("Open"));
}

MainWindow::~MainWindow()
{
}
