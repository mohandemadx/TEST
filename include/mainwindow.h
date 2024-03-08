#ifndef LOADUIFILE_H
#define LOADUIFILE_H

#include <QWidget>

class LoadUiFile
{
public:
    static QWidget *load(QWidget *parent = nullptr);
    void LoadUiFile::connectButton(QWidget *widget);
};

#endif // LOADUIFILE_H