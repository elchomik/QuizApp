#include "secdialog.h"
#include "ui_secdialog.h"
#include <QAction>
#include <QPixmap>
#include <QMessageBox>
SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);

}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_pushButton_clicked()
{
    QApplication::quit();
}

void SecDialog::on_pushButton_2_clicked()
{
    ui->pushButton_2->isFlat();
    hide();
    trzy= new TDialog(this);
    trzy->show();
}

void SecDialog::on_pushButton_3_clicked()
{
        ui->textEdit->hide();
        ui->pushButton_2->hide();
         ui->pushButton_3->hide();
          ui->pushButton_4->hide();
           ui->pushButton_5->hide();
            ui->pushButton_6->hide();
             ui->pushButton_7->hide();
              ui->pushButton_8->hide();
               ui->pushButton_9->hide();
                ui->pushButton_10->hide();
                 ui->pushButton_11->hide();
                  ui->pushButton_12->hide();
                    ui->pushButton_13->hide();
                     ui->pushButton_14->hide();
                      ui->pushButton_15->hide();
}


void SecDialog::on_pushButton_5_clicked()
{
  QMessageBox::StandardButton odp=  QMessageBox::information(this,"Gdansk","Miasto Portowe");
  ui->pushButton_5->close();

}

void SecDialog::on_pushButton_4_clicked()
{
    QMessageBox::StandardButton odp= QMessageBox::information(this,"Warszawa","Stolica Polski");
    if(odp==QMessageBox::Ok)
        ui->pushButton_4->move(0,450);

}

void SecDialog::on_pushButton_14_clicked()
{
    QMessageBox::StandardButton odp= QMessageBox::information(this,"Olsztyn","Miasto znajdujace sie w krainie jezior");
    if(odp==QMessageBox::Ok)
        ui->pushButton_14->setText("Hejo");
}

void SecDialog::on_pushButton_13_clicked()
{
    QMessageBox::StandardButton odp= QMessageBox::information(this,"Bialystok","Stolica Podlasia");
    if(odp==QMessageBox::Ok){
        ui->pushButton_13->hide();
    ui->pushButton_11->show();
    }
}

void SecDialog::on_pushButton_11_clicked()
{
    QMessageBox::StandardButton odp= QMessageBox::information(this,"Rzeszow","Stolica Podkarpacia");
    if(odp==QMessageBox::Ok)
    ui->pushButton_11->hide();
}

void SecDialog::on_pushButton_6_clicked()
{
    QMessageBox::StandardButton odp=QMessageBox::information(this,"Krakow","Miasto Krolow");
    if(odp==QMessageBox::Ok)
        ui->pushButton_6->setVisible(false);
}

void SecDialog::on_pushButton_10_clicked()
{
     QMessageBox::StandardButton odp=QMessageBox::information(this,"Kielce","Miasto Pilki recznej");
     if(odp==QMessageBox::Ok)
         ui->pushButton_10->hide();
}

void SecDialog::on_pushButton_9_clicked()
{
     QMessageBox::StandardButton odp=QMessageBox::information(this,"Lodz","Miasto Artystow");
     if(odp==QMessageBox::Ok)
         ui->pushButton_9->showFullScreen();
}

void SecDialog::on_pushButton_7_clicked()
{
     QMessageBox::StandardButton odp=QMessageBox::information(this,"Wroclaw","Stolica Kultury 2016");
     if(odp==QMessageBox::Ok)
         ui->pushButton_7->hide();
}

void SecDialog::on_pushButton_8_clicked()
{
     QMessageBox::StandardButton odp=QMessageBox::information(this,"Poznan","Powstanie Wielkopolskie");
     if(odp==QMessageBox::Ok)
         ui->pushButton_8->setVisible(false);
}

void SecDialog::on_pushButton_15_clicked()
{
     QMessageBox::StandardButton odp=QMessageBox::information(this,"Bydgoszcz","Jedna z dwoch stolic wojewodztwa kujawsko-pomorskiego");
     if(odp==QMessageBox::Ok)
         ui->pushButton_15->setVisible(false);
}

void SecDialog::on_pushButton_12_clicked()
{
     QMessageBox::StandardButton odp=QMessageBox::information(this,"Szczecin","Miasto bez dostepu do morza");
     if(odp==QMessageBox::Ok)
         ui->pushButton_12->setVisible(false);
}

void SecDialog::on_pushButton_16_clicked()
{
    ui->textEdit->show();
    ui->pushButton_2->show();
     ui->pushButton_3->show();
      ui->pushButton_4->show();
       ui->pushButton_5->show();
        ui->pushButton_6->show();
         ui->pushButton_7->show();
          ui->pushButton_8->show();
           ui->pushButton_9->show();
            ui->pushButton_10->show();
             ui->pushButton_11->show();
              ui->pushButton_12->show();
                ui->pushButton_13->show();
                 ui->pushButton_14->show();
                  ui->pushButton_15->show();
}
