#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QNetworkInterface>
#include <QList>
#include <QNetworkInterface>
#include <QNetworkAddressEntry>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    // my Data vars
    QString currentAdapter;
    int currentAdapterIndex;
    QList<QNetworkInterface> IpList;
    // predefined funcs
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

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
