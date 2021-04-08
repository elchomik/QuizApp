#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "secdialog.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
 void myfunction();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_progressBar_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    SecDialog *secdialog;
    QTimer *timer;
};
#endif // MAINWINDOW_H
