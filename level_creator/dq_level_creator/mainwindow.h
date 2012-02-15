#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sqlhandler.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void menuOpen();
    void viewTable();
    void launchEditLevelWindow();

protected:
    void init();

private:
    Ui::MainWindow* ui;
    SqlHandler* m_sqlhandler;
};

#endif // MAINWINDOW_H
