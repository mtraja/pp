#include <iostream>
#include <string>

#include "biblioteca.hpp"

using namespace std;

int main(int argc, char* argv[]) {
   Biblioteca* b1 = Biblioteca.obterInstancia();

    b1->adicionarLivro("Introducao a Programacao");
    
    b1->adicionarLivro("Politica e Sociedade");


   Biblioteca* b2 = Biblioteca.obterInstancia();

   b2->mostrarNumeroInstancia();

   cout << "Numero de livros criados: " << b2->obterNumeroLivros() << endl;

}