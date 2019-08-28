#include <random>
#include <string>
#include <iostream>
#include "livro.hpp"

using namespace std;

ostream& operator<<(ostream& os, const Livro& livro) {
    os << livro.m_codigo << " " << livro.m_titulo << " ";
    os << livro.m_autor << " " << livro.m_editora << " ";
    return os;
}


int Livro::gerador_codigo(int seed) {
    std::mt19937 cod(seed);
    std::uniform_int_distribution<int> linear_i(1000, 9000);
    return linear_i(cod);
}

Livro::Livro(int codigo){
    m_codigo = gerador_codigo(codigo);
    m_titulo = "Livro Novo";
    m_autor = "Marcos Aurelio";
    m_editora = "Fabrica de Livro";
    m_nrEmprestimo = 0;
}

Livro::~Livro() {

}

void Livro::reset() {

}

void Livro::increment() {
    ++m_nrEmprestimo;
}

int Livro::getCodigo(){
    return m_codigo;
}

void Livro::setCodigo(int codigo) {
    m_codigo=codigo;
}

string Livro::getTitulo() {
    return m_titulo;
}

void Livro::setTitulo(string titulo) {
    m_titulo=titulo;
}

string Livro::getAutor() {
    return m_autor;
}

void Livro::setAutor(string autor) {
    m_autor=autor;
}
string Livro::getEditora() {
    return m_editora;
}
void Livro::setEditora(string editora) {
    m_editora=editora;
}