#include "ddialog.h"
#include "ui_ddialog.h"
#include <QAction>
#include <QMessageBox>
Ddialog::Ddialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ddialog)
{
    ui->setupUi(this);
}

Ddialog::~Ddialog()
{
    delete ui;
}

void Ddialog::on_pushButton_clicked()
{
    ui->pushButton->hide();
    ui->pushButton_24->hide();
       ui->pushButton_28->hide();
}

void Ddialog::on_pushButton_2_clicked()
{
    ui->pushButton_2->hide();
    ui->pushButton_5->hide();
}

void Ddialog::on_pushButton_3_clicked()
{
    ui->pushButton_3->hide();
}


void Ddialog::on_pushButton_4_clicked()
{
    ui->pushButton_4->hide();
}

void Ddialog::on_pushButton_5_clicked()
{
    ui->pushButton_5->hide();
}

void Ddialog::on_pushButton_6_clicked()
{
    ui->pushButton_6->hide();
}

void Ddialog::on_pushButton_7_clicked()
{
    ui->pushButton_7->hide();
}

void Ddialog::on_pushButton_8_clicked()
{
    ui->pushButton_8->hide();
    ui->pushButton_11->hide();
    ui->pushButton_9->hide();
}

void Ddialog::on_pushButton_9_clicked()
{
    ui->pushButton_9->hide();
}

void Ddialog::on_pushButton_10_clicked()
{
    ui->pushButton_10->hide();
    ui->pushButton_14->hide();
       ui->pushButton_3->hide();
       ui->pushButton_6->hide();
          ui->pushButton_27->hide();
}

void Ddialog::on_pushButton_11_clicked()
{
    ui->pushButton_11->hide();
}

void Ddialog::on_pushButton_12_clicked()
{

    ui->pushButton_12->hide();
        QMessageBox::information(this,"Saper","Lose");
        if(QMessageBox::Ok){
            QApplication::quit();
        }




}

void Ddialog::on_pushButton_13_clicked()
{
    ui->pushButton_13->hide();
}

void Ddialog::on_pushButton_14_clicked()
{
    ui->pushButton_14->hide();
}

void Ddialog::on_pushButton_15_clicked()
{
    ui->pushButton_15->hide();
}

void Ddialog::on_pushButton_16_clicked()
{
    ui->pushButton_16->hide();
}

void Ddialog::on_pushButton_17_clicked()
{
    ui->pushButton_17->hide();
}

void Ddialog::on_pushButton_18_clicked()
{
    ui->pushButton_18->hide();
}


void Ddialog::on_pushButton_19_clicked()
{
    ui->pushButton_19->hide();
}

void Ddialog::on_pushButton_20_clicked()
{
    ui->pushButton_20->hide();
}


void Ddialog::on_pushButton_21_clicked()
{
    ui->pushButton_21->hide();
}

void Ddialog::on_pushButton_22_clicked()
{
    ui->pushButton_22->hide();
}

void Ddialog::on_pushButton_23_clicked()
{
    ui->pushButton_23->hide();
}

void Ddialog::on_pushButton_24_clicked()
{
    ui->pushButton_24->hide();
}

void Ddialog::on_pushButton_25_clicked()
{
    ui->pushButton_25->hide();
}

void Ddialog::on_pushButton_26_clicked()
{
    ui->pushButton_26->hide();
}

void Ddialog::on_pushButton_27_clicked()
{
    ui->pushButton_27->hide();
}

void Ddialog::on_pushButton_28_clicked()
{
    ui->pushButton_28->hide();
}
