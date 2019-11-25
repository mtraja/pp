#ifndef EXECUTORMUSICA_H
#define EXECUTORMUSICA_H
#include "estado.h"
#include "tocando.h"
#include "parado.h"

class ExecutorMusica
{
public:
    ExecutorMusica();

    bool tocar();
    bool parar();
    bool proxima();
    bool anterior();
    void definirEstado(Estado * s);

private:
    Estado *m_estado;
};

#endif // EXECUTORMUSICA_H

