#ifndef _BIBLIOTECA_HPP
#define _BIBLIOTECA_HPP

#include "livro.hpp"

class Biblioteca {
    private:
        static Biblioteca *instancia;
        static int numeroInstanias;

        Livro* livros[10];
        int numeroLivros;

        Biblioteca();

    public:
        static Biblioteca *obterInstancia();

        void mostrarNumeroInstancia();

        void adicionarLivro(string titulo);

        int obterNumeroLivros();
};


#endif