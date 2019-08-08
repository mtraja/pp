#include "livro.hpp"

Livro::Livro(string titulo) {
    this(titulo,"99999");
}

Livro::Livro(string titulo, string isbn) {
    this->titulo = titulo;
    this->isbn = isbn;
    this->autoria = "Autor Desconhecido";
}