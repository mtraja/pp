#include <iostream>
#include "estado.h"

Estado::Estado() { }

Estado::~Estado() { }


bool Estado::tocarMusica(ExecutorMusica * ex) {
    std::cout << "Tentando tocar Musica\n";
    return false;
}

bool Estado::pararMusica(ExecutorMusica * ex) {
    std::cout << "Tentando parar Musica, ja esta parada\n";
    return false;
}

bool Estado::proximaMusica(ExecutorMusica * ex) {
    std::cout << "Tentando proxima Musica, nao podera ser tocada\n";
    return false;
}

bool Estado::anteriorMusica(ExecutorMusica * ex) {
    std::cout << "Tentando Musica anterior, nao podera ser tocada\n";
    return false;
}




