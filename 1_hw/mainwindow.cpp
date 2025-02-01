    #include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    color_index = 2;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_bold_clicked()
{
    QString text = ui->textEdit->toPlainText();

    isBold = !isBold;

    QFont font = ui->textEdit->font();
    font.setBold(isBold);

    ui->textEdit->setFont(font);
    ui->textEdit->setPlainText(text);
}


void MainWindow::on_pushButton_del_clicked()
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


void MainWindow::on_pushButton_clicked()
{
    color_index = (color_index + 1) % 3;
    //qDebug() << color_index;
    //qDebug() << colors[color_index];
    QString style = "QTextEdit { border: 2px solid black; background-color: white; color: " + colors[color_index] + "; }";
    //qDebug() << style;
    ui->textEdit->setStyleSheet(style);
}

