#ifndef TOCANDO_H
#define TOCANDO_H
#include "estado.h"
#include "executormusica.h"

class Tocando: public Estado {
public:
    Tocando();
    bool pararMusica(ExecutorMusica *ex) override;
    bool proximaMusica(ExecutorMusica *ex) override;
    bool anteriorMusica(ExecutorMusica *ex) override;
};

#endif // TOCANDO_H
