import QtQuick 2.15
import com.example 1.0
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 640
    height: 480

    DatabaseManager {
        id: dbManager
    }

    Component.onCompleted: {
        if (dbManager.openDatabase("path/to/your/database.db")) {
            var result = dbManager.executeQuery("SELECT * FROM employees");
            console.log(result);
            dbManager.closeDatabase();
        }
    }
}
