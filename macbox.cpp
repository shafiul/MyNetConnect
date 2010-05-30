#include "macbox.h"
#include "ui_macbox.h"
#include <QProcess>

#include <QMessageBox>

macbox::macbox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::macbox)
{
    ui->setupUi(this);
}

macbox::~macbox()
{
    delete ui;
}

void macbox::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void macbox::on_commandLinkButton_clicked()
{
    // save the mac! System work lol
    QString newMAC = ui->lineEdit->text();
    //QMessageBox::information(this,"You Enterred",newMAC);
    QProcess::execute(newMAC);
    //this->hide();
}
