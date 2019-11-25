#ifndef ESTADO_H
#define ESTADO_H

class ExecutorMusica;

class Estado  {
public:
    Estado();
    virtual ~Estado();
    virtual bool tocarMusica(ExecutorMusica *ex);
    virtual bool pararMusica(ExecutorMusica *ex);
    virtual bool proximaMusica(ExecutorMusica *ex);
    virtual bool anteriorMusica(ExecutorMusica *ex);
};

#endif // ESTADO_H

