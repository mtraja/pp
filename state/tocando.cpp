#include "tocando.h"
#include "parado.h"

Tocando::Tocando()
{

}

bool Tocando::pararMusica(ExecutorMusica *ex) {
   ex->definirEstado(new Parado());
   std::cout << "Parada a execucao da Musica\n";
   return true;
}

bool Tocando::proximaMusica(ExecutorMusica * ex) {
   std::cout << "Executando a proxima Musica\n";
   return true;
}

bool Tocando::anteriorMusica(ExecutorMusica * ex) {
    std::cout << "Executando a Musica anterior\n";
    return true;
}
