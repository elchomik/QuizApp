#ifndef TDIALOG_H
#define TDIALOG_H

#include <QDialog>
#include "ddialog.h"
namespace Ui {
class TDialog;
}

class TDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TDialog(QWidget *parent = nullptr);
    ~TDialog();

private slots:
    void on_label_linkActivated(const QString &link);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::TDialog *ui;
    Ddialog *dd;
};

#endif // TDIALOG_H
