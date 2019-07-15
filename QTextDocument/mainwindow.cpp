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
    QTextDocument *doc = new QTextDocument();
    doc = ui->textEdit->document();
    QString str = doc->toRawText();
    QString str2 = doc->toHtml();
    ui->textEdit->setText(str);
    ui->textEdit_2->setText(str2);
}
