#include "dialog.h"
#include "formdialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_btnOpenForm_clicked()
{
    FormDialog dialog(this);

    dialog.exec();
}
