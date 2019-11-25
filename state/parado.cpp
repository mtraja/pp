#include "parado.h"


Parado::Parado()
{

}

bool Parado::tocarMusica(ExecutorMusica * ex) {
    ex->definirEstado(new Tocando());
    std::cout << " Musica Iniciada\n";
    return true;
}
