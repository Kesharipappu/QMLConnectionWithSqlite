#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>

class DatabaseManager : public QObject
{
    Q_OBJECT

public:
    explicit DatabaseManager(QObject *parent = nullptr);

public slots:
    bool openDatabase(const QString &dbName);
    void closeDatabase();
    QVariantList executeQuery(const QString &query);

private:
    QSqlDatabase m_database;
};
