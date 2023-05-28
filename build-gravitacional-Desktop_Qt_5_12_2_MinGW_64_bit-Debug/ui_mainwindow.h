/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QLabel *label_5;
    QLabel *label;
    QLineEdit *le_posx;
    QLabel *label_2;
    QLineEdit *le_posy;
    QLabel *label_3;
    QLineEdit *le_m;
    QLabel *label_4;
    QLineEdit *le_r;
    QLabel *label_6;
    QLineEdit *le_vx;
    QLabel *label_7;
    QLineEdit *le_vy;
    QPushButton *bntSimular;
    QLabel *label_8;
    QPushButton *btnFull;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1247, 1033);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 801, 741));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(910, 20, 201, 21));
        QFont font;
        font.setPointSize(16);
        label_5->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(830, 60, 201, 21));
        label->setFont(font);
        le_posx = new QLineEdit(centralwidget);
        le_posx->setObjectName(QString::fromUtf8("le_posx"));
        le_posx->setGeometry(QRect(1060, 50, 111, 31));
        le_posx->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(830, 90, 201, 31));
        label_2->setFont(font);
        le_posy = new QLineEdit(centralwidget);
        le_posy->setObjectName(QString::fromUtf8("le_posy"));
        le_posy->setGeometry(QRect(1060, 90, 111, 31));
        le_posy->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(910, 130, 71, 21));
        label_3->setFont(font);
        le_m = new QLineEdit(centralwidget);
        le_m->setObjectName(QString::fromUtf8("le_m"));
        le_m->setGeometry(QRect(1060, 130, 81, 31));
        le_m->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(910, 170, 71, 21));
        label_4->setFont(font);
        le_r = new QLineEdit(centralwidget);
        le_r->setObjectName(QString::fromUtf8("le_r"));
        le_r->setGeometry(QRect(1060, 170, 81, 31));
        le_r->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(820, 220, 221, 21));
        label_6->setFont(font);
        le_vx = new QLineEdit(centralwidget);
        le_vx->setObjectName(QString::fromUtf8("le_vx"));
        le_vx->setGeometry(QRect(1060, 220, 91, 31));
        le_vx->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(820, 260, 221, 21));
        label_7->setFont(font);
        le_vy = new QLineEdit(centralwidget);
        le_vy->setObjectName(QString::fromUtf8("le_vy"));
        le_vy->setGeometry(QRect(1060, 260, 91, 31));
        le_vy->setFont(font);
        bntSimular = new QPushButton(centralwidget);
        bntSimular->setObjectName(QString::fromUtf8("bntSimular"));
        bntSimular->setGeometry(QRect(910, 320, 211, 51));
        bntSimular->setFont(font);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(890, 400, 211, 51));
        label_8->setFont(font);
        btnFull = new QPushButton(centralwidget);
        btnFull->setObjectName(QString::fromUtf8("btnFull"));
        btnFull->setGeometry(QRect(840, 450, 361, 301));
        btnFull->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1247, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Condiciones iniciales", nullptr));
        label->setText(QApplication::translate("MainWindow", "Posicion Inicial X", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Posicion Inicial Y", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Masa", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Radio", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Velocidad Inicial X", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Velocidad Inicial Y", nullptr));
        bntSimular->setText(QApplication::translate("MainWindow", "Crear Cuerpo", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Cuerpos creados:", nullptr));
        btnFull->setText(QApplication::translate("MainWindow", "Iniciar simulaci\303\263n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
