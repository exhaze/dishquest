#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sqlhandler.h"
#include "addleveldialog.h"

#include <QtGui/QFileDialog>
#include <QStringList>
#include <QComboBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_sqlhandler(NULL)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{
    delete m_sqlhandler;

    while(ui->cb_tables->count() > 0)
    {
        ui->cb_tables->removeItem(0);
    }

    QString path = QFileDialog::getOpenFileName(this, "Select the Dishquest level database");
    m_sqlhandler = new SqlHandler(path);
    QStringList table_names = m_sqlhandler->getTableNames();
    ui->cb_tables->addItems(table_names);
    ui->labelDBpath->setText(path);
}

void MainWindow::menuOpen()
{
    this->init();
}

void MainWindow::viewTable()
{
    if (!ui->cb_tables->currentText().isEmpty())
    {
        m_sqlhandler->displayTableView(ui->cb_tables->currentText())->show();
    }
}

void MainWindow::launchEditLevelWindow()
{
    addleveldialog dlg(this);
    dlg.exec();
}
