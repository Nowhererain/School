#include "mainwindow.h"
#include <QMenuBar>
#include <QToolBar>
#include <QPushButton>
#include <QStatusBar>
#include <QLabel>

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

    QToolBar * toolBar = new QToolBar(this);
    addToolBar(Qt::LeftToolBarArea, toolBar);
    toolBar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);
    toolBar->setFloatable(false);

    toolBar->addAction(newFile);
    toolBar->addSeparator();
    toolBar->addAction(openFile);

    QPushButton * btn = new QPushButton("btn", this);
    toolBar->addWidget(btn);

    QStatusBar *  stBar = statusBar();
    setStatusBar(stBar);

    QLabel * lb1 = new QLabel(tr("info"), this);
    stBar->addWidget(lb1);
    QLabel * lb2 = new QLabel(tr("rightInfo"), this);
    stBar->addPermanentWidget(lb2);
}

MainWindow::~MainWindow()
{
}
