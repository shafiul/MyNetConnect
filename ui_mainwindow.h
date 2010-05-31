/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Mon May 31 17:15:25 2010
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionChange_MAC_Address;
    QAction *actionDial_up;
    QWidget *centralWidget;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit_4;
    QLabel *label_13;
    QCommandLinkButton *commandLinkButton;
    QMenuBar *menuBar;
    QMenu *menuAdvanced;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(514, 335);
        actionChange_MAC_Address = new QAction(MainWindow);
        actionChange_MAC_Address->setObjectName(QString::fromUtf8("actionChange_MAC_Address"));
        actionDial_up = new QAction(MainWindow);
        actionDial_up->setObjectName(QString::fromUtf8("actionDial_up"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(120, 10, 151, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\\u09ae\\u09bf\\u09a4\\u09cd\\u09b0"));
        font.setPointSize(14);
        comboBox->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 71, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\\u09ae\\u09bf\\u09a4\\u09cd\\u09b0"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 100, 81, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 120, 91, 21));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 140, 111, 21));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 100, 131, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\\u09ae\\u09bf\\u09a4\\u09cd\\u09b0"));
        font2.setPointSize(8);
        lineEdit->setFont(font2);
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 120, 131, 16));
        lineEdit_2->setFont(font2);
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(150, 140, 131, 16));
        lineEdit_3->setFont(font2);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 70, 111, 23));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\\u09ae\\u09bf\\u09a4\\u09cd\\u09b0"));
        font3.setItalic(true);
        label_5->setFont(font3);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(300, 70, 201, 23));
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(300, 100, 201, 21));
        label_7->setFont(font3);
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(300, 120, 201, 21));
        label_8->setFont(font3);
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(300, 140, 201, 21));
        label_9->setFont(font3);
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 180, 231, 21));
        label_10->setFont(font3);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(50, 210, 101, 23));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(50, 230, 111, 23));
        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(190, 240, 251, 16));
        lineEdit_4->setFont(font2);
        lineEdit_4->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(190, 210, 241, 23));
        label_13->setFont(font3);
        label_13->setAlignment(Qt::AlignCenter);
        commandLinkButton = new QCommandLinkButton(centralWidget);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(360, 10, 131, 41));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 514, 31));
        menuAdvanced = new QMenu(menuBar);
        menuAdvanced->setObjectName(QString::fromUtf8("menuAdvanced"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuAdvanced->menuAction());
        menuAdvanced->addAction(actionChange_MAC_Address);
        menuAdvanced->addAction(actionDial_up);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "My Network Connector", 0, QApplication::UnicodeUTF8));
        actionChange_MAC_Address->setText(QApplication::translate("MainWindow", "Change DNS Addresses", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionChange_MAC_Address->setStatusTip(QApplication::translate("MainWindow", "Click here to edit Nameserver addresses", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionDial_up->setText(QApplication::translate("MainWindow", "Dial up...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Device:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "<span style = 'color: #0000FF;'>IP Address:</span>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "<span style = 'color: #0000FF;'>Subnet Mask:</span>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "<span style = 'color: #0000FF;'>Default Gateway:</span>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\\u09ae\\u09bf\\u09a4\\u09cd\\u09b0'; font-size:10pt; font-weight:400; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'u09aeu09bfu09a4u09cdu09b0'; color: #0000FF;\">Enter New Value</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This is the value stored in Ubuntu's built-in NetworkManger</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">You can always ignore this value!</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\\u09ae\\u09bf\\u09a4\\u09cd\\u09b0'; font-size:10pt; font-weight:400; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#0000ff;\">System Says</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "-/-", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "-/-", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "-/-", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Hardware/MAC Address...", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Current Value:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "New Value:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "-/-", 0, QApplication::UnicodeUTF8));
        commandLinkButton->setText(QApplication::translate("MainWindow", "Apply Changes!", 0, QApplication::UnicodeUTF8));
        menuAdvanced->setTitle(QApplication::translate("MainWindow", "Options", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
