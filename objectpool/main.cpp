#include <iostream>
#include "livro.hpp"
#include "biblioteca.hpp"

using namespace std;

int main()
{
    
    Biblioteca* pool = Biblioteca::obterInstancia();
    Livro* l1;
    Livro* l2;
    
    /* Biblioteca sera criado. */
    l1 = pool->obterLivro();
    l1->setTitulo("Programando C++");
    l1->setEditora("Brasil do Futuro");
    l1->setAutor("Maciel Souza");
    cout << "L1 = " << l1->getTitulo() << " "  << " [" << l1 << "]" << std::endl;
    cout << l1->getCodigo() << endl;
    cout << l1->getAutor() << endl;
    cout << l1->getEditora() << endl;
    cout << "-------------------------------------------" << endl;

    
    l2 = pool->obterLivro();
    l2->setTitulo("Design Patterns");
    std::cout << "L2 = " << l2->getTitulo() << " [" << l2 << "]" << std::endl;
    cout << l2->getCodigo() << endl;
    cout << l2->getAutor() << endl;
    cout << l2->getEditora() << endl;
    cout << "-------------------------------------------" << endl; 

    pool->retornarLivro(l1);
    pool->retornarLivro(l2);

    // Livros serao reutilizados.
     
    l1 = pool->obterLivro();
    std::cout << "L1 = " << l1->getTitulo() << " " << " [" << l1 << "]" << std::endl;
    cout << l1->getCodigo() << endl;
    cout << l1->getAutor() << endl;
    cout << l1->getEditora() << endl;
    cout << "-------------------------------------------" << endl;

    l2 = pool->obterLivro();
    std::cout << "L2 = " << l2->getTitulo() << " " << " [" << l2 << "]" << std::endl;
    cout << l2->getCodigo() << endl;
    cout << l2->getAutor() << endl;
    cout << l2->getEditora() << endl;
    cout << "-------------------------------------------" << endl; 
    cout << *l2 << endl;
    delete pool;
    return 0;
}