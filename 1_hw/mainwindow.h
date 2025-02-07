#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_bold_clicked();

    void on_pushButton_del_clicked();

    void on_lineEdit_editingFinished();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    QString colors[3] = { "green", "yellow", "black" };
    int color_index;
    bool isBold;
};
#endif // MAINWINDOW_H
