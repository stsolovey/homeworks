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
    qint32 a = ui->lineEditA->text().toInt();
    qint32 b = ui->lineEditB->text().toInt();
    qint32 c = ui->lineEditC->text().toInt();
    qint32 d;
    double x1, x2;
    QString str;
        if (a == 0 && b == 0){
            str = "Equation has no roots";
            ui->label->setText(str);
            return;
        } else if ( b == 0 and c == 0 ){
            x1 = x2 = 0;
        } else if ( b == 0 && a != 0){
            if ( ( -c / a ) >= 0){
                x1 = -qSqrt( - c / a );
                x2 = qSqrt( - c / a );
            }else{
                str = "Equation has no roots";
                ui->label->setText(str);
                return;
            }
        } else if ( a == 0 && b != 0) {
            x1 = x2 = - c / b;
        } else if ( c == 0 ) {
            x1 = - b / a;
            x2 = 0;
        } else {
        d = b * b - 4 * a * c;
            if(d < 0){
                str = "Equation has no roots";
                ui->label->setText(str);
                return;
            }else if (d == 0){
                x1 = x2 = -b/ 2 * a;
            }else{
                x1 = ( -b - sqrt( d )) / 2 * a;
                x2 = ( -b + sqrt( d )) / 2 * a;
            }
        }
       if ( x1 == x2 ){
           str = "Equation has one root: ";
           QString strx1 = QString::number(x1);
           ui->label->setText(str);
           ui->labelx1->setText(strx1);
       } else {
           str = "Roots of square equation: ";
           QString strx1 = QString::number(x1);
           QString strx2 = QString::number(x2);
           ui->label->setText(str);
           ui->labelx1->setText(strx1);
           ui->labelx2->setText(strx2);
    }

}

