#include "mainwindow.h"
#include <QFile>
#include <QUiLoader>
#include <QWidget>
#include <QPushButton>
#include <QDebug>

QWidget *LoadUiFile::load(QWidget *parent)
{
    QFile file("C:/Users/memaa/Documents/Computer Vision/TEST/mainwindow.ui");
    qDebug() << "Attempting to open file:" << file.fileName();
    file.open(QIODevice::ReadOnly);

    QUiLoader loader;
    QWidget *widget = loader.load(&file, parent);

    if (widget) {
        LoadUiFile uiFile;
        uiFile.connectButton(widget);
        
    } else {
        qDebug() << "Failed to load UI file!";
    }

    return widget;
}

void LoadUiFile::connectButton(QWidget *widget)
{
    QPushButton *button = widget->findChild<QPushButton*>("pushButton");
    if (button) {
        QObject::connect(button, &QPushButton::clicked, [=]() {
            qDebug() << "Button clicked!";
            // Add your slot function logic here
        });
    } else {
        qDebug() << "Button not found!";
    }
}
