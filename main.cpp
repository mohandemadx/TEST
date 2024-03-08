#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // Create a QApplication object

    // Load the UI file and create the widget hierarchy
    QWidget *widget = LoadUiFile::load(nullptr);

    if (widget) {
        // Show the widget
        widget->show();

        // Execute the application event loop
        return a.exec();
    } else {
        return -1;
    }
}
