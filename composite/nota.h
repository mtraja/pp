#ifndef NOTA_H
#define NOTA_H
#include <list>
#include<string>

using namespace std;

class Nota {

public:
    Nota(string descricao, double valor=0.0);
    virtual ~Nota();
    void add(Nota* n);
    void remove(Nota* n);
    Nota* getNota(int indice);
    virtual double calcular() const;

    string obterDescricao();

protected:
    list<Nota*>* m_notas;
    //typedef std::unique_ptr<Type> Type_ptr;
    //std::vector<Type_ptr> container;


private:
    string m_descricao;
    double m_valor;
};

#endif // NOTA_H
