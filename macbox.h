#ifndef MACBOX_H
#define MACBOX_H

#include <QDialog>

namespace Ui {
    class macbox;
}

class macbox : public QDialog {
    Q_OBJECT
public:
    macbox(QWidget *parent = 0);
    ~macbox();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::macbox *ui;

private slots:
    void on_commandLinkButton_clicked();
};

#endif // MACBOX_H
