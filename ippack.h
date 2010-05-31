#ifndef IPPACK_H
#define IPPACK_H

#include <QString>

class ippack
{
public:
    QString name;
    QString ip;
    QString gateway;
    QString mask;
    QString mac;
    // constructos
    ippack();
    ippack(QString ip, QString gateway, QString mask, QString mac, QString name);
};

#endif // IPPACK_H
