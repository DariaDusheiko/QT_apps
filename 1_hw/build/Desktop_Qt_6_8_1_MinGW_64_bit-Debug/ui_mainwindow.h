/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *app;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *text_output;
    QLabel *label_2;
    QTextEdit *textEdit;
    QWidget *buttons;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_bold;
    QPushButton *pushButton_del;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(608, 552);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        app = new QWidget(centralwidget);
        app->setObjectName("app");
        app->setGeometry(QRect(110, 122, 361, 298));
        app->setStyleSheet(QString::fromUtf8("background-color: #b3b3b3;\n"
"border: 2px solid black;"));
        verticalLayout_2 = new QVBoxLayout(app);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(app);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font-size: 25px;\n"
"border: none;"));

        verticalLayout_2->addWidget(label_3);

        lineEdit = new QLineEdit(app);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(0, 30));
        lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"background-color: white;"));

        verticalLayout_2->addWidget(lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        text_output = new QVBoxLayout();
        text_output->setObjectName("text_output");
        label_2 = new QLabel(app);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font-size: 25px;\n"
"border: none;"));

        text_output->addWidget(label_2);

        textEdit = new QTextEdit(app);
        textEdit->setObjectName("textEdit");
        textEdit->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"background-color: white;"));

        text_output->addWidget(textEdit);


        horizontalLayout->addLayout(text_output);

        buttons = new QWidget(app);
        buttons->setObjectName("buttons");
        buttons->setEnabled(true);
        buttons->setMaximumSize(QSize(150, 16777215));
        buttons->setStyleSheet(QString::fromUtf8("font-size: 30px;\n"
"font-weight: bold;\n"
"border: none;"));
        verticalLayout = new QVBoxLayout(buttons);
        verticalLayout->setObjectName("verticalLayout");
        pushButton_bold = new QPushButton(buttons);
        pushButton_bold->setObjectName("pushButton_bold");
        pushButton_bold->setMinimumSize(QSize(0, 0));
        pushButton_bold->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"background-color: blue;"));

        verticalLayout->addWidget(pushButton_bold);

        pushButton_del = new QPushButton(buttons);
        pushButton_del->setObjectName("pushButton_del");
        pushButton_del->setMinimumSize(QSize(70, 0));
        pushButton_del->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"background-color: red;"));

        verticalLayout->addWidget(pushButton_del);


        horizontalLayout->addWidget(buttons);


        verticalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 608, 26));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\202\320\265\320\272\321\201\321\202:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\260\321\210 \321\202\320\265\320\272\321\201\321\202:", nullptr));
        pushButton_bold->setText(QCoreApplication::translate("MainWindow", "\320\226", nullptr));
        pushButton_del->setText(QCoreApplication::translate("MainWindow", "DEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
