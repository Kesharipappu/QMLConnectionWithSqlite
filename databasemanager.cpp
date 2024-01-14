#include "databasemanager.h"
#include "qvariant.h"


DatabaseManager::DatabaseManager(QObject *parent)
    : QObject(parent)
{}

bool DatabaseManager::openDatabase(const QString &dbName)
{
    m_database = QSqlDatabase::addDatabase("QSQLITE");
    m_database.setDatabaseName(dbName);
    return m_database.open();
}

void DatabaseManager::closeDatabase()
{
    m_database.close();
}

QVariantList DatabaseManager::executeQuery(const QString &query)
{
    QVariantList result;

    QSqlQuery q(query);
    if (q.exec())
    {
        while (q.next())
        {
            // Assuming you are executing a query that returns a single column
            result.append(q.value(0));
        }
    }

    return result;
}
