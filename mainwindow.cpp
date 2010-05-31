#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "macbox.h";



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // other tasks possibly? Init system settings
    QCoreApplication::setOrganizationName("MuktoSource");
    QCoreApplication::setOrganizationDomain("muktosource.com");
    QCoreApplication::setApplicationName("MyNetConnect");
    // Read user-defined IP settings from QSettings
    ipPackReader();
    //Load adapter list here from System
    adapterListMaker();
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
    for (int i = 0; i < this->interfaceList.size(); i++){
        if(this->interfaceList.at(i).name() == changedAdap){
            // Got selected NetworkInterface
            // Get Propertis
            QList<QNetworkAddressEntry> myIPz = this->interfaceList.at(i).addressEntries();
            //QMessageBox::information(this,"Total IP Groups",QString::number(myIPz.length()));
            int selectedGroup = 0;
            QString selectedIP = myIPz.at(selectedGroup).ip().toString();
            QString selectedMask = myIPz.at(selectedGroup).netmask().toString();
            QString selectedGateway = myIPz.at(selectedGroup).broadcast().toString();
            QString selectedMAC = this->interfaceList.at(i).hardwareAddress();
            // put these values in the labels
            ui->label_7->setText(selectedIP);
            ui->label_8->setText(selectedMask);
            ui->label_9->setText(selectedGateway);
            ui->label_13->setText(selectedMAC);
            // save the index
            this->currentAdapterIndex = i;
            // Update lineEdit Fields from user's previous entry.
            adapterUserSettingsUpdater();
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
        QList<QNetworkAddressEntry> myIPz = this->interfaceList.at(this->currentAdapterIndex).addressEntries();
        int selectedGroup = 0; // We forced it to 0. It may be bad...

        // IPZ set successfully. Now start working :P
        // put $current Adapter in the list or update
        int i;
        bool allreadyExist = false;
        for(i=0; i<this->ipList.size(); i++){
            if(this->ipList.at(i).name == this->currentAdapter){
                // Value exists. Update it
                allreadyExist = true;
                this->ipList[i].ip = ui->lineEdit->text();
                this->ipList[i].mask = ui->lineEdit_2->text();
                this->ipList[i].gateway = ui->lineEdit_3->text();
                this->ipList[i].mac = ui->lineEdit_4->text();
                QMessageBox::information(this,this->currentAdapter,"You have updated entries for this device.");
                break;
            }
        }
        if(!allreadyExist){
            // Value doesn't exist. add new
            ippack temp(ui->lineEdit->text(), ui->lineEdit_3->text(), ui->lineEdit_2->text(), ui->lineEdit_4->text(), this->currentAdapter);
            this->ipList.append(temp);
            QMessageBox::information(this,this->currentAdapter,"You have created a new device settings.\nYou have modified total: " + QString::number(this->ipList.size()) + " devices.");
        }
        // Okay, save data
        ipPackWriter();
    }
}

void MainWindow::ipPackReader(){
    // Reads IPs from QSettings & Store in the list.
    QSettings ipWriter;
    int tempSize = ipWriter.beginReadArray("adapters");
    ippack tempPack;
    this->ipList.clear();
    int i;
    for(i = 0; i< tempSize; i++){
        ipWriter.setArrayIndex(i);
        tempPack.ip = ipWriter.value("ip").toString();
        tempPack.name = ipWriter.value("name").toString();
        tempPack.mask = ipWriter.value("mask").toString();
        tempPack.gateway = ipWriter.value("gateway").toString();
        tempPack.mac = ipWriter.value("mac").toString();
        this->ipList.append(tempPack);
    }
    ipWriter.endArray();
    ipWriter.sync();
    //QMessageBox::information(this, "IP Read Status", QString::number(i));
}

void MainWindow::ipPackWriter(){
    // writes all Adapters information in settings permanently
    QSettings ipWriter;
    ipWriter.beginWriteArray("adapters");
    for(int i=0; i< this->ipList.size(); i++){
        ipWriter.setArrayIndex(i);
        ipWriter.setValue("ip", this->ipList.at(i).ip);
        ipWriter.setValue("name", this->ipList.at(i).name);
        ipWriter.setValue("mask", this->ipList.at(i).mask);
        ipWriter.setValue("gateway", this->ipList.at(i).gateway);
        ipWriter.setValue("mac", this->ipList.at(i).mac);
    }
    ipWriter.endArray();
    ipWriter.sync();
    //QMessageBox::information(this,"Success","Settings saved successfully");
}

void MainWindow::adapterListMaker(){
    QNetworkInterface interface;
    this->interfaceList = interface.allInterfaces();
    for (int i = 0; i < this->interfaceList.size(); i++){
        if(this->interfaceList.at(i).name() != "lo" && this->interfaceList.at(i).isValid()){
            if(this->interfaceList.at(i).addressEntries().length() != 0){
                // Entry Validated! Place it in GUI
                this->myAdapterList << this->interfaceList.at(i).name();
            }
        }
     }
    ui->comboBox->addItems(myAdapterList);
}

void MainWindow::adapterUserSettingsUpdater(){
    // Updates GUI lineEdit fields for the selected network Device.
    int i;
    for(i=0; i<this->ipList.size();i++){
        if(this->currentAdapter == this->ipList.at(i).name){
            ui->lineEdit->setText(this->ipList.at(i).ip);
            ui->lineEdit_2->setText(this->ipList.at(i).mask);
            ui->lineEdit_3->setText(this->ipList.at(i).gateway);
            ui->lineEdit_4->setText(this->ipList.at(i).mac);
            break;
        }
    }
}
