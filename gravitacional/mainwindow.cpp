#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>
#include <movimiento.h>
#include <inventario.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

int acelerax (int m2, int x1, int x2, int y1, int y2)
{
    double rd = sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
    double dy = y2-y1;
    double dx = x2-x1;
    double te = atan2(dy,dx);
    double rad=(te*3.141598)/180;
    double k = 0.0000000000667384;
    int ax = ((k*m2)/(pow(rd,2)))*cos(rad);
    return ax;
}
int aceleray (int m2, int x1, int x2, int y1, int y2)
{
    double rd = sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
    double dy = y2-y1;
    double dx = x2-x1;
    double te = atan2(dy,dx);
    double rad=(te*3.141598)/180;
    double k = 0.0000000000667384;
    int ay = ((k*m2)/(pow(rd,2)))*sin(rad);
    return ay;
}
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    int contador = 0;
    ui->setupUi(this);
    timer=  new QTimer;
    Scene = new QGraphicsScene;
    ui->graphicsView->setScene(Scene);
    Scene->setSceneRect(-400,-450,800,810);
    connect(timer,SIGNAL(timeout()),this,SLOT(on_btnFull_clicked()));
    string = QString::number(contador);
    labeludo = new QLabel(string,this);
    labeludo->setGeometry(1150,430,300,70);
    labeludo->setFont(QFont("Comic Sans MS", 20));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_bntSimular_clicked()
{
    if(contador == 0)
    {
        contador++;
        labeludo->setText(QString::number(contador));
    }
    double posx,posy,m,r,vx,vy;
    posx=ui->le_posx->text().toDouble();
    posy=ui->le_posy->text().toDouble();
    m=ui->le_m->text().toDouble();
    r=ui->le_r->text().toDouble();
    vx=ui->le_vx->text().toDouble();
    vy=ui->le_vy->text().toDouble();
    cuerpo= new Cuerpo;
    r=r/20;
    cuerpo->setR(r);
    cuerpo->Mover(posx/20,posy/20);
    movimiento= new Movimiento(posx/20,posy/20,m,r,vx,vy);
    if(miInventario.AgregarCuerpo(movimiento))
    {

    }
    if(miInventory.AgregarCorpu(cuerpo))
    {

    }
    contador++;
    labeludo->setText(QString::number(contador));
    int tot = miInventario.ContarCuerpos();
    for (int i = 0; i<tot; i++)
    {
      Scene->addItem(miInventory.getCorpus()[i]);
    }

}


void MainWindow::Mover()
{

}

void MainWindow::on_btnFull_clicked()
{
    timer->start(10);
    int tot = miInventario.ContarCuerpos();
    for (int i = 0; i<3;i++)
    {
        for (int p = 0; p<tot;p++)
          {
              int acex = 0;
              int acey = 0;
              for (int k = 0; k<tot;k++)
              {
                if (p == k)
                {

                }
                else
                {
                   int xr = acelerax(miInventario.getCuerpos()[k]->getMasa(),miInventario.getCuerpos()[p]->getPosx(),miInventario.getCuerpos()[k]->getPosx(),miInventario.getCuerpos()[p]->getPosy(),miInventario.getCuerpos()[k]->getPosy());
                   int xy = aceleray(miInventario.getCuerpos()[k]->getMasa(),miInventario.getCuerpos()[p]->getPosx(),miInventario.getCuerpos()[k]->getPosx(),miInventario.getCuerpos()[p]->getPosy(),miInventario.getCuerpos()[k]->getPosy());
                   acex += xr;
                   acey += xy;
                }
              }
              miInventario.getCuerpos()[p]->SetAceleracionx(acex);
              miInventario.getCuerpos()[p]->SetAceleraciony(acey);
          }
        for(int plopi = 0;plopi<tot;plopi++)
        {
            miInventario.getCuerpos()[plopi]->CalcularVelocidad();
            miInventario.getCuerpos()[plopi]->CalcularPosicion();
            miInventory.getCorpus()[plopi]->Mover(miInventario.getCuerpos()[plopi]->getPosx(),miInventario.getCuerpos()[plopi]->getPosy());

        }
    }

}
