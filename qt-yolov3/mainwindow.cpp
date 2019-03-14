#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDesktopServices>
#include <QUrl>
#include <QProcess>
#include <QApplication>
#include <QString>
#include <iostream>
#include <QTime>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_exit_clicked()
{
    exit(0);
}

void MainWindow::on_pushButton_start_clicked()
{
    QProcess process;
    process.execute("source /home/mechrevo/tensorflow-gpu/bin/activate");
    process.execute("python /home/mechrevo/Documents/qt-yolov3/yolo.py");
    QTime t;
    t.start();
    while(t.elapsed()<1000)
        QCoreApplication::processEvents();
    ui->textBrowser->append("************************************");
    ui->textBrowser->append("detect finished");
}

void MainWindow::on_pushButton_output_clicked()
{
    QDesktopServices::openUrl(QUrl("file:////home/mechrevo/Documents/qt-yolov3/output", QUrl::TolerantMode));
}

void MainWindow::on_pushButton_activate_clicked()
{
    QString source = "source /home/mechrevo/tensorflow-gpu/bin/activate";
    QString yolo = "python /home/mechrevo/Documents/qt-yolov3/yolo.py";
    //QProcess ::execute("source /home/mechrevo/tensorflow-gpu/bin/activate");
//    system("#!/bin/dash");
//    system(". /home/mechrevo/tensorflow-gpu/bin/activate");


//    QProcess process;
//    process.execute("source /home/mechrevo/tensorflow-gpu/bin/activate");
//    process.waitForFinished();
//    QByteArray output = process.readAllStandardOutput();

//    QString str_output = output;
    ui->textBrowser->append("...");
    ui->textBrowser->append("TensorFlow  activate  successfully !");


}

void MainWindow::on_pushButton_input_clicked()
{
    QDesktopServices::openUrl(QUrl("file:////home/mechrevo/Documents/qt-yolov3/images", QUrl::TolerantMode));
}
