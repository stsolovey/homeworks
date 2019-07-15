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

void MainWindow::on_AddFixedString_clicked()
{
    QString str = ui->lineEdit->text();
    ui->plainTextEdit->insertPlainText(str);
}

void MainWindow::on_ReplaceByText_clicked()
{
    QString str = ui->lineEdit->text();
    ui->plainTextEdit->setPlainText(str);
}

void MainWindow::on_pushButton_clicked()
{
    QString str = ui->textEdit->toPlainText();

    QString html1 = "<span style='font-size:8.25pt; color:#ff0000;'>";
    QString html2 = "</span>";

    QString sumofstirngs = html1 + str  +  html2;

    ui->textEdit->setHtml(sumofstirngs);

}
