#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>
#include "tdialog.h"
namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = nullptr);
    ~SecDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();





    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_16_clicked();

private:
    Ui::SecDialog *ui;
    TDialog *trzy;
};

#endif // SECDIALOG_H
