/********************************************************************************
** Form generated from reading ui file 'macbox.ui'
**
** Created: Thu May 27 15:36:21 2010
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
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_macbox
{
public:
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *macbox)
    {
        if (macbox->objectName().isEmpty())
            macbox->setObjectName(QString::fromUtf8("macbox"));
        macbox->resize(379, 168);
        groupBox = new QGroupBox(macbox);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 331, 131));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 40, 301, 21));
        commandLinkButton = new QCommandLinkButton(groupBox);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(200, 80, 111, 41));

        retranslateUi(macbox);

        QMetaObject::connectSlotsByName(macbox);
    } // setupUi

    void retranslateUi(QDialog *macbox)
    {
        macbox->setWindowTitle(QApplication::translate("macbox", "Enter MAC", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("macbox", "Enter New MAC Address", 0, QApplication::UnicodeUTF8));
        commandLinkButton->setText(QApplication::translate("macbox", "Change MAC", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(macbox);
    } // retranslateUi

};

namespace Ui {
    class macbox: public Ui_macbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACBOX_H
