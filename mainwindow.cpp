#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QPixmap>
#include <QDateTime>
#include <QAction>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int w=ui->label_3->width();
    int h=ui->label_3->height();
    QPixmap picture(":/img/zero.jpg");
    ui->label_3->setPixmap(picture.scaled(w,h,Qt::KeepAspectRatio));
    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(myfunction()));
    timer->start(1000);
}
int licz=0;
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString username=ui->lineEdit->text();
    QString password=ui->lineEdit_2->text();
    if(username=="test" && password=="test"){
        QMessageBox::information(this,"Gra","Udalo sie uzyskac login do gry");
        hide();
        secdialog= new SecDialog(this);
        secdialog->show();

        licz++;
        qDebug()<<"Dostep udalo sie otrzymac za proba"<<licz;
    }
    else if((username!="test" || password!="test")&&licz>4){
        licz++;
        qDebug()<<"Nie udalo sie uzyskac dostepu w 3 probach";
         QApplication::quit();
    }
    else{
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        int w=ui->label_3->width();
        int h=ui->label_3->height();
        QPixmap object(":/img/jeden.jpg");
        QPixmap object2(":/img/dwa.jpg");
        QPixmap object3(":/img/trzy.jpg");
        QPixmap object4(":/img/indeks.png");
        if(licz==1){
        ui->label_3->setPixmap(object.scaled(w,h,Qt::KeepAspectRatio));
        ui->statusbar->showMessage("Proba nie powiodla sie",1000);
        }
        else if(licz==2){
        ui->label_3->setPixmap(object2.scaled(w,h,Qt::KeepAspectRatio));
        ui->statusbar->showMessage("Proba nr 2 sie nie powiodla",1000);
        }
        else if(licz==3){
            ui->label_3->setPixmap(object3.scaled(w,h,Qt::KeepAspectRatio));
            ui->statusbar->showMessage("Proba numer 3 sie nie powiodla koncze gre",1000);
            ui->label_4->hide();
        }
        if(licz==4){
            ui->label_3->setPixmap(object4.scaled(w,h,Qt::KeepAspectRatio));
            ui->statusbar->showMessage("Koniec gry",1500);
        }

       // QMessageBox::warning(this,"Bank","Zla nazwa uzytkownika lub haslo");
        ++licz;
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton odp=QMessageBox::question(this,"Okno","Czy jestes pewny",QMessageBox::Yes | QMessageBox::No);
        if(odp==QMessageBox::Yes){
            QApplication::closeAllWindows();
        }


    //QApplication::quit();
}
void MainWindow::myfunction()
{
    QTime time=QTime::currentTime();
    QString time_text=time.toString("hh : mm : ss");
    ui->label_4->setText(time_text);
}

