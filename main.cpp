#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <databasemanager.h>
#include <QObject>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    // Register the DatabaseManager class with QML
    qmlRegisterType<DatabaseManager>("com.example", 1, 0, "DatabaseManager");

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
