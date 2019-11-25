#include "executormusica.h"

ExecutorMusica::ExecutorMusica()
{
    m_estado = new Parado();
}

bool ExecutorMusica::tocar() {
    bool estado = false;
    if (m_estado != nullptr)
        estado = m_estado->tocarMusica(this);
    return estado;
}

bool ExecutorMusica::parar() {
    if (m_estado)
        return m_estado->pararMusica(this);
    return false;
}

bool ExecutorMusica::proxima() {
    if (m_estado)
        return m_estado->proximaMusica(this);
    return false;
}

bool ExecutorMusica::anterior() {
    if (m_estado)
        return m_estado->anteriorMusica(this);
    return false;
}

void ExecutorMusica::definirEstado(Estado * estado) {
    if (m_estado) {
        delete m_estado;
        m_estado = nullptr;
    }
    m_estado = estado;
}
