#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMediaPlayer>
class Connection
{
public:
    Connection();
    bool createconnect();
    QSqlDatabase mydb;
};

#endif // CONNECTION_H
