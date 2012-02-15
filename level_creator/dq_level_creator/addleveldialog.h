#ifndef ADDLEVELDIALOG_H
#define ADDLEVELDIALOG_H

#include <QDialog>

namespace Ui {
    class addleveldialog;
}

class addleveldialog : public QDialog
{
    Q_OBJECT

public:
    addleveldialog(QWidget *parent = 0);
    ~addleveldialog();

private:
    Ui::addleveldialog *ui;
};

#endif // ADDLEVELDIALOG_H
