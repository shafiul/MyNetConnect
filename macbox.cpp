#include "macbox.h"
#include "ui_macbox.h"
#include <QProcess>

#include <QMessageBox>

macbox::macbox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::macbox)
{
    ui->setupUi(this);
    // Other Init works
    // ***************** //
    // Load DNS entries
    QSettings dnsData;
    QString dns1;
    QString dns2;
    if(dnsData.contains("dns1"))
        dns1 = dnsData.value("dns1").toString();
    if(dnsData.contains("dns2"))
        dns2 = dnsData.value("dns2").toString();
    // GUI Update
    ui->lineEdit->setText(dns1);
    ui->lineEdit_2->setText(dns2);
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
    // save new DNS in Settings
    QSettings dnsData;
    dnsData.setValue("dns1",ui->lineEdit->text());
    dnsData.setValue("dns2",ui->lineEdit_2->text());
    dnsData.sync();
    QMessageBox::information(this,"DNS Entry Saved","New entries saved successfully. \n Settings will not be activated until you click Apply Changes button.");
    // Saved in System.
    //QString newMAC = ui->lineEdit->text();
    //QMessageBox::information(this,"You Enterred",newMAC);
    //QProcess::execute(newMAC);
    this->hide();
}
