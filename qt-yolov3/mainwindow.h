#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_exit_clicked();

    void on_pushButton_start_clicked();

    void on_pushButton_output_clicked();

    void on_pushButton_activate_clicked();

    void on_pushButton_input_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
