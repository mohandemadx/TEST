#include <QApplication> // Include the QApplication header
#include <QFile>
#include <QUiLoader>
#include <QWidget>
#include <QDebug>
#include <QDir>


// Define the loadUiFile function
static QWidget *loadUiFile(QWidget *parent)
{
    // Open the UI file from resources
    QFile file("mainwindow.ui");
    qDebug() << "Attempting to open file:" << file.fileName();
    file.open(QIODevice::ReadOnly);

    // Create a QUiLoader object
    QUiLoader loader;

    // Load the UI file and create the widget hierarchy
    return loader.load(&file, parent);
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // Create a QApplication object
    QDir::setCurrent("C:/Users/memaa/Documents/Computer Vision/TEST/");
    
    // Load the UI file and create the widget hierarchy
    QWidget *widget = loadUiFile(nullptr);

    // Show the widget
    widget->show();

    return a.exec();
}
