#include "biblioteca.hpp"
        
Biblioteca* Biblioteca::m_instancia = 0;

int Biblioteca::m_seed = 1000;

Biblioteca::Biblioteca() {

}

Biblioteca::~Biblioteca() {
  limparLivros();
}

Biblioteca* Biblioteca::obterInstancia() {
    if (m_instancia == 0) {
        m_instancia = new Biblioteca;
    }
    return m_instancia;
}

Livro* Biblioteca::obterLivro() {
    if (m_livros.empty()) {
        std::cout << "Criando novo livro." << std::endl;
        m_seed += 77;
        return new Livro(m_seed);
    } else {
        std::cout << "Reusando livro existente." << std::endl;
        Livro* livro = m_livros.front();
        m_livros.pop_front();
        livro->increment();
        return livro;
    }
}


void Biblioteca::retornarLivro(Livro* livro) {
    livro->reset();
    m_livros.push_front(livro);
}

void Biblioteca::limparLivros() {

  cout << "Limpando os Livros .." << endl;
    while(m_livros.size()) {
        Livro *livro = m_livros.front();
        m_livros.pop_front();
        delete livro;
    }
}


