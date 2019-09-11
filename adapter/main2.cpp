
#include <iostream>
#include "arquivo.h"
#include "arquivowx.h"

int main(int , char **)
{
    string nomeArq("/home/trajano/temp/Arqwx.txt");
    Arquivo* arq = new ArquivoWx(nomeArq);

    list<string> cursos;
    cursos.push_back("Design Pattern Adapter");
    cursos.push_back("Programacao Orientada a Objetos");
    cursos.push_back("Programacao Funcional");
    cursos.push_back("Padrao de Projetos");
    cursos.push_back("Linguagem Prolog ..");

    arq->salvarLinhas(cursos);

    for (auto linha:arq->lerLinhas())
        std::cout << linha << std::endl;

    delete arq;
}
