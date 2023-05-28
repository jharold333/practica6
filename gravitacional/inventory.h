#ifndef INVENTORY_H
#define INVENTORY_H

#include <cuerpo.h>
#include <vector>
#include <fstream>

class Inventory
{
    std::vector<Cuerpo*>Corpus;

public:
    Inventory();
    bool AgregarCorpu(Cuerpo *Corpu);
    int CargarInventory();
    int ContarCorpus();
    std::vector<Cuerpo*>getCorpus();

};

#endif // INVENTORY_H
