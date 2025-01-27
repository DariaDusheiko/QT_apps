#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString text = ui->textEdit->toPlainText();

    isBold = !isBold;

    QFont font = ui->textEdit->font();
    font.setBold(isBold);

    ui->textEdit->setFont(font);
    ui->textEdit->setPlainText(text);
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->textEdit->clear();
}


void MainWindow::on_lineEdit_editingFinished()
{
    QString text_1 = ui->textEdit->toPlainText();
    QString text_2 = ui->lineEdit->text();

    if (!text_1.isEmpty()) {
        ui->textEdit->setText(text_1 + '\n' + text_2);
    } else {
        ui->textEdit->setText(text_2);
    }

    ui->lineEdit->clear();
}

