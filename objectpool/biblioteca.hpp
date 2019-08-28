#include <string>
#include <iostream>
#include <list>
#include "livro.hpp"


class Biblioteca
{
    private:
        std::list<Livro*> m_livros;
        
        static Biblioteca* m_instancia;
        Biblioteca();
        

    public:
        ~Biblioteca();
        static int m_seed;
        static Biblioteca* obterInstancia();
        Livro* obterLivro();
        void retornarLivro(Livro* livro);
        void limparLivros();
};