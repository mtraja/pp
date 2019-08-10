#include <iostream>
#include "biblioteca.hpp"
#include "livro.hpp"

Biblioteca* Biblioteca::instancia = 0;
int Biblioteca::numeroInstancias = 0;

Biblioteca* Biblioteca::getInstance()
{
    if (instancia == 0)
    {
        instancia = new Biblioteca();
    }

    return instancia;
}

void Biblioteca::mostrarNumeroInstancia() {
    cout << "Numero de Instancias : " << numeroInstancia <<endl;
}

Biblioteca::Biblioteca() {
    numeroLivros = 0;
    numeroInstancia++;
    cout << "Biblioteca criada ..." << endl;
}

void Biblioteca::adicionarLivro(string titulo) {
    Livro *livro = new Livro(titulo);
    livros[++numeroLivros] = livro;;
}

int Biblioteca::obterNumeroLivros() {
    return numeroLivros;
}