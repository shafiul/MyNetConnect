#include "ippack.h"

ippack::ippack()
{
}

ippack::ippack(QString ip, QString gateway, QString mask, QString mac, QString name){
    this->ip = ip;
    this->gateway = gateway;
    this ->mask = mask;
    this->mac = mac;
    this->name = name;
}
