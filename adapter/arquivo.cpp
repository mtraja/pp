#include "arquivo.h"

Arquivo::Arquivo(string nome) {
    m_nome = nome;
}

Arquivo::~Arquivo() {

}

void Arquivo::abrir() {}
void Arquivo::fechar() {}

string Arquivo::getNomeArquivo() {
    return m_nome;
}


