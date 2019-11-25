#ifndef PARADO_H
#define PARADO_H
#include <iostream>
#include "estado.h"
#include "executormusica.h"

class Parado: public Estado {
public:
    Parado();
    bool tocarMusica(ExecutorMusica *ex) override;

};

#endif // PARADO_H

