#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "macbox.h";

#include <QHostAddress>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // other tasks possibly?
    // QStringList! Load adapter list here
    QNetworkInterface interface;
    QStringList myAdapterList;
    this->IpList = interface.allInterfaces();
    for (int i = 0; i < IpList.size(); i++){
        if(IpList.at(i).name() != "lo" && IpList.at(i).isValid()){
            if(IpList.at(i).addressEntries().length() != 0)
                myAdapterList << IpList.at(i).name();
        }
     }
    ui->comboBox->addItems(myAdapterList);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}



void MainWindow::on_actionChange_MAC_Address_triggered()
{
    // display mac address changed button
    macbox myMB(this);
    myMB.show();
    myMB.exec();
    //QMessageBox::information(this,"lol", "dgm");
}


void MainWindow::on_comboBox_currentIndexChanged(QString changedAdap)
{
    // Combobox selected item got changed. work here
    this->currentAdapter = changedAdap;
    for (int i = 0; i < this->IpList.size(); i++){
        if(this->IpList.at(i).name() == changedAdap){
            // Got selected NetworkInterface
            // Get Propertis
            QList<QNetworkAddressEntry> myIPz = this->IpList.at(i).addressEntries();
            //QMessageBox::information(this,"Total IP Groups",QString::number(myIPz.length()));
            int selectedGroup = 0;
            QString selectedIP = myIPz.at(selectedGroup).ip().toString();
            QString selectedMask = myIPz.at(selectedGroup).netmask().toString();
            QString selectedGateway = myIPz.at(selectedGroup).broadcast().toString();
            QString selectedMAC = this->IpList.at(i).hardwareAddress();
            // put these values in the labels
            ui->label_7->setText(selectedIP);
            ui->label_8->setText(selectedMask);
            ui->label_9->setText(selectedGateway);
            ui->label_13->setText(selectedMAC);
            // save the index
            this->currentAdapterIndex = i;
            // do some fun
            this->setWindowOpacity(.95);
            break;
            //QMessageBox::information(this,"lol", changedAdap);
        }
     }
}

void MainWindow::on_commandLinkButton_clicked()
{
    // SAVE User Input ..  save IPs first
    if(this->currentAdapterIndex != -1){
        QList<QNetworkAddressEntry> myIPz = this->IpList.at(this->currentAdapterIndex).addressEntries();
        int selectedGroup = 0; // We forced it to 0. It may be bad...
        //QHostAddress *var1 = new QHostAddress("127.0.0.1");
        QHostAddress var2(192.168.124.1);
        myIPz.at(selectedGroup).setIp(var2);
        /*
        myIPz.at(selectedGroup).setNetmask(ui->label_8->text());
        myIPz.at(selectedGroup).setBroadcast(ui->label_9->text());
        */
        // IPZ set successfully.
    }
}
