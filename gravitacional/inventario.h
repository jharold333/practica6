#ifndef INVENTARIO_H
#define INVENTARIO_H


#include <movimiento.h>
#include <vector>
#include <fstream>

class Inventario
{
    std::vector<Movimiento*>Cuerpos;

public:
    Inventario();
    bool AgregarCuerpo(Movimiento *Cuerpo);
    int CargarInventario();
    int ContarCuerpos();
    std::vector<Movimiento*>getCuerpos();

};

#endif // Inventario_H
