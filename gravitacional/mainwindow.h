#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<movimiento.h>
#include<cuerpo.h>
#include<inventario.h>
#include<inventory.h>
#include<QTimer>
#include<QGraphicsScene>
#include <QLabel>
#include <QWidget>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QLabel *labeludo;
    QString string;
    int contador;

private slots:
    void on_bntSimular_clicked();
    void Mover();
    void on_btnFull_clicked();

private:
    Ui::MainWindow *ui;
    QAction *bntFull;
    QGraphicsScene *Scene;
    QTimer *timer;
    Cuerpo *cuerpo;
    Movimiento *movimiento;
    Inventario miInventario;
    Inventory miInventory;

};
#endif // MAINWINDOW_H
