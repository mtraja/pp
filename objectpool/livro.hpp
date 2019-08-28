#ifndef LIVROS_H
#define LIVROS_H

#include <string>
#include <list>

using namespace std;
class Livro
{
    int m_codigo;
    string m_titulo;
    string m_autor;
    string m_editora;
    int m_nrEmprestimo; // numero de emprestimo

    public:
        Livro(int codigo);
        ~Livro();

        static int gerador_codigo(int seed);
        friend std::ostream& operator<<(std::ostream& os, const Livro& livro);

        void reset();
        void increment();
        int getCodigo();
        void setCodigo(int codigo);
        string getTitulo();
        void setTitulo(string titulo);
        string getAutor();
        void setAutor(string autor);
        string getEditora();
        void setEditora(string editora);
        
};

#endif