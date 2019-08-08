#ifndef _BIBLIOTECA_HPP
#define _BIBLIOTECA_HPP

#include "livro.hpp"

class Bibioteca {
    private:
        static Bibioteca *instancia;
        static int numeroInstanias;

        Livro* livros[10];
        int numeroLivros;

        Biblioteca();

    public:
        static Bibioteca *obterInstancia();

        void mostrarNumeroInstancia();

        void adicionarLivro(string titulo);

        int obterNumeroLivros();
};


#endif