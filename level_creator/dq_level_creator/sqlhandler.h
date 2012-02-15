#ifndef SQLHANDLER_H
#define SQLHANDLER_H

#include <QString>
#include <QSqlDatabase>
#include <QTableView>
#include <QStringList>

class SqlHandler
{
public:
    SqlHandler(QString db_path);
    ~SqlHandler();

    QTableView* displayTableView(QString table);
    QStringList getTableNames();


private:
    QSqlDatabase m_db;
};

#endif // SQLHANDLER_H
