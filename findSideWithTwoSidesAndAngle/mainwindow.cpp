#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    qint32 s1 = ui->side1->text().toInt(); // side one
    qint32 s2 = ui->side2->text().toInt(); // side two
    double a = ui->angle->text().toDouble(); // angle

    if(ui->Rad->isChecked()) {
        a *= 0.0174533;
    }

    double result;
    result = qSqrt(qPow(s1, 2) + qPow(s2, 2) - 2 * s1 * s2 * qCos(a));
    QString str = QString::number(result);
    ui->answer->setText(str);
}
