#include "tdialog.h"
#include "ui_tdialog.h"
#include <QPixmap>
#include <QMessageBox>
TDialog::TDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TDialog)
{
    ui->setupUi(this);
    int szerokosc=ui->label->width();
    int wysokosc=ui->label->height();
    QPixmap obraz(":/img/herb.png");
    ui->label->setPixmap(obraz.scaled(szerokosc,wysokosc,Qt::KeepAspectRatio));
 ui->pushButton_2->hide();
ui->pushButton_3->hide();
ui->pushButton_4->hide();
ui->pushButton_5->hide();
ui->pushButton_6->hide();
    int w=ui->label_2->width();
    int h=ui->label_2->height();

    QPixmap obrazek(":/img/zero.jpg");
    ui->label_2->setPixmap(obrazek.scaled(w,h,Qt::KeepAspectRatio));
}

TDialog::~TDialog()
{
    delete ui;
}

int zlicz=0;

void TDialog::on_pushButton_clicked()
{
    ui->pushButton->setText("ELo");
    QMessageBox::StandardButton odp=QMessageBox::question(this,"QUIZ","Czy Lublin byl stolica Polski?",QMessageBox::Yes | QMessageBox::No);
    if(odp==QMessageBox::Yes){
       ++zlicz;
        QApplication::beep();
            QPixmap obrazek(":/img/jeden.jpg");
             int w=ui->label_2->width();
             int h=ui->label_2->height();
            ui->label_2->setPixmap(obrazek.scaled(w,h,Qt::KeepAspectRatio));
        ui->pushButton->hide();

    }
    else{
        QApplication::beep();
        zlicz=0;
        ui->pushButton->hide();
    }
    ui->pushButton_2->show();
    }


void TDialog::on_pushButton_2_clicked()
{
    ui->pushButton_2->setText("Co");
    QMessageBox::StandardButton odp=QMessageBox::question(this,"QUIZ","Czy herbem miasta jest Koziol?",QMessageBox::Yes | QMessageBox::No);
    if(odp==QMessageBox::Yes){
        ++zlicz;
        QApplication::beep();
        ui->pushButton_2->hide();
    }
    else{
        QApplication::beep();
        ui->pushButton_2->hide();
    }
        if(zlicz==2){
            QPixmap obrazek(":/img/dwa.jpg");
             int w=ui->label_2->width();
             int h=ui->label_2->height();
            ui->label_2->setPixmap(obrazek.scaled(w,h,Qt::KeepAspectRatio));
}

    else if(zlicz==1){

        QPixmap obraz(":/img/jeden.jpg");
         int w=ui->label_2->width();
         int h=ui->label_2->height();
        ui->label_2->setPixmap(obraz.scaled(w,h,Qt::KeepAspectRatio));
    }
    ui->pushButton_3->show();
    }


void TDialog::on_pushButton_3_clicked()
{
    ui->pushButton_3->setText("Tam");
    QMessageBox::StandardButton odp=QMessageBox::question(this,"QUIZ","Czy w Lublinie są tramwaje?",QMessageBox::Yes | QMessageBox::No);
    if(odp==QMessageBox::No){
        zlicz++;
        QApplication::beep();
        ui->pushButton_3->hide();
    }
    else{
        QApplication::beep();
        ui->pushButton_3->hide();
    }

        if(zlicz==3){
            QPixmap obrazek(":/img/trzy.jpg");
             int w=ui->label_2->width();
             int h=ui->label_2->height();
            ui->label_2->setPixmap(obrazek.scaled(w,h,Qt::KeepAspectRatio));
        }

    else if(zlicz==2){
            QPixmap obraze(":/img/dwa.jpg");
             int w=ui->label_2->width();
             int h=ui->label_2->height();
            ui->label_2->setPixmap(obraze.scaled(w,h,Qt::KeepAspectRatio));

    }
        else if(zlicz==1){
            QPixmap obraz(":/img/jeden.jpg");
             int w=ui->label_2->width();
             int h=ui->label_2->height();
            ui->label_2->setPixmap(obraz.scaled(w,h,Qt::KeepAspectRatio));
        }
        ui->pushButton_4->show();
    }


void TDialog::on_pushButton_4_clicked()
{
    ui->pushButton_4->setText("Slychac");
    QMessageBox::StandardButton odp=QMessageBox::question(this,"QUIZ","Czy obchodzimy Noc Kultury?",QMessageBox::Yes | QMessageBox::No);
    if(odp==QMessageBox::Yes){
        zlicz++;
        QApplication::beep();
        ui->pushButton_4->hide();
    }
    else{
        QApplication::beep();
        ui->pushButton_4->hide();

    }

        if(zlicz==4){
        QPixmap obrazek(":/img/cztery.jpg");
             int w=ui->label_2->width();
             int h=ui->label_2->height();
            ui->label_2->setPixmap(obrazek.scaled(w,h,Qt::KeepAspectRatio));
}

    else if(zlicz==3){
            QPixmap obraz1(":/img/trzy.jpg");
                 int w=ui->label_2->width();
                 int h=ui->label_2->height();
                ui->label_2->setPixmap(obraz1.scaled(w,h,Qt::KeepAspectRatio));
}
        else if(zlicz==2){
            QPixmap obraz2(":/img/dwa.jpg");
                 int w=ui->label_2->width();
                 int h=ui->label_2->height();
                ui->label_2->setPixmap(obraz2.scaled(w,h,Qt::KeepAspectRatio));
        }
else if(zlicz==1){
            QPixmap obraz3(":/img/jeden.jpg");
                 int w=ui->label_2->width();
                 int h=ui->label_2->height();
                ui->label_2->setPixmap(obraz3.scaled(w,h,Qt::KeepAspectRatio));
        }
    ui->pushButton_5->show();

    }



void TDialog::on_pushButton_5_clicked()
{
    ui->pushButton_5->setText("Mordo");
    QMessageBox::StandardButton odp=QMessageBox::question(this,"QUIZ","Czy Lublin jest najlepszym miastem?",QMessageBox::Yes | QMessageBox::No);
    if(odp==QMessageBox::Yes){
        zlicz++;
        QApplication::beep();
        ui->pushButton_5->hide();
    }
    else{
        QApplication::beep();
        ui->pushButton_5->hide();
    }

        if(zlicz==5){
              QPixmap obrazek(":/img/piec.jpg");
             int w=ui->label_2->width();
             int h=ui->label_2->height();
            ui->label_2->setPixmap(obrazek.scaled(w,h,Qt::KeepAspectRatio));
    }

    else if(zlicz==4){
            QPixmap obraz2(":/img/cztery.jpg");
           int w=ui->label_2->width();
           int h=ui->label_2->height();
          ui->label_2->setPixmap(obraz2.scaled(w,h,Qt::KeepAspectRatio));
    }
        else if(zlicz==3){
            QPixmap obraz3(":/img/trzy.jpg");
           int w=ui->label_2->width();
           int h=ui->label_2->height();
          ui->label_2->setPixmap(obraz3.scaled(w,h,Qt::KeepAspectRatio));
        }
        else if(zlicz==2){
            QPixmap obraz4(":/img/dwa.jpg");
           int w=ui->label_2->width();
           int h=ui->label_2->height();
          ui->label_2->setPixmap(obraz4.scaled(w,h,Qt::KeepAspectRatio));
        }
        else if(zlicz==1){
            QPixmap obraz5(":/img/jeden.jpg");
           int w=ui->label_2->width();
           int h=ui->label_2->height();
          ui->label_2->setPixmap(obraz5.scaled(w,h,Qt::KeepAspectRatio));
        }
        ui->pushButton_6->show();
    }


void TDialog::on_pushButton_6_clicked()
{
    zlicz=0;
    QPixmap obrazek(":/img/zero.jpg");
   int w=ui->label_2->width();
   int h=ui->label_2->height();

    ui->label_2->setPixmap(obrazek.scaled(w,h,Qt::KeepAspectRatio));
    ui->pushButton->show();
    ui->pushButton_2->show();
    ui->pushButton_3->show();
    ui->pushButton_4->show();
    ui->pushButton_5->show();

}

void TDialog::on_pushButton_7_clicked()
{
    hide();
    dd=new Ddialog(this);
    dd->show();
}

void TDialog::on_pushButton_8_clicked()
{
    QApplication::quit();
}
