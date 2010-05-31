/********************************************************************************
** Form generated from reading ui file 'macbox.ui'
**
** Created: Mon May 31 15:03:36 2010
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MACBOX_H
#define UI_MACBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_macbox
{
public:
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QCommandLinkButton *commandLinkButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *macbox)
    {
        if (macbox->objectName().isEmpty())
            macbox->setObjectName(QString::fromUtf8("macbox"));
        macbox->resize(404, 185);
        groupBox = new QGroupBox(macbox);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 381, 161));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 40, 161, 21));
        commandLinkButton = new QCommandLinkButton(groupBox);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(260, 120, 111, 41));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 101, 23));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 91, 23));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 70, 161, 21));

        retranslateUi(macbox);

        QMetaObject::connectSlotsByName(macbox);
    } // setupUi

    void retranslateUi(QDialog *macbox)
    {
        macbox->setWindowTitle(QApplication::translate("macbox", "Enter new value", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("macbox", "DNS Address Settings", 0, QApplication::UnicodeUTF8));
        commandLinkButton->setText(QApplication::translate("macbox", "Save", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("macbox", "<span style = 'color: #0000FF;'>Nameserver 1:</span>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("macbox", "<span style = 'color: #0000FF;'>Nameserver 2:</span>", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(macbox);
    } // retranslateUi

};

namespace Ui {
    class macbox: public Ui_macbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACBOX_H
