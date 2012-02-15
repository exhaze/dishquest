#include "sqlhandler.h"
#include <QSqlDatabase>
#include <QSqlTableModel>

SqlHandler::SqlHandler(QString db_path)
{
   m_db = QSqlDatabase::addDatabase("QSQLITE");
   m_db.setDatabaseName(db_path);

   m_db.open();
}

QTableView* SqlHandler::displayTableView(QString table)
{
    QSqlTableModel *model = new QSqlTableModel(NULL, m_db);
    model->setTable(table);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    QTableView *view = new QTableView();
    view->setModel(model);
    return view;
}

SqlHandler::~SqlHandler()
{
    m_db.close();
}

QStringList SqlHandler::getTableNames()
{
    return m_db.tables();
}
