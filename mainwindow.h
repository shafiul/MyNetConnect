#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QNetworkInterface>
#include <QList>
#include <QNetworkInterface>
#include <QNetworkAddressEntry>
#include <QSettings>
#include <QCoreApplication>
#include "ippack.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    // my Data vars
    QString currentAdapter;
    int currentAdapterIndex;
    QList<QNetworkInterface> interfaceList;
    QStringList myAdapterList;
    QList<ippack> ipList;
    // predefined funcs
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void ipPackReader();
    void ipPackWriter();
    void adapterListMaker();
    void adapterUserSettingsUpdater();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;

private slots:
    void on_commandLinkButton_clicked();
    void on_comboBox_currentIndexChanged(QString );
    void on_actionChange_MAC_Address_triggered();
};

#endif // MAINWINDOW_H
