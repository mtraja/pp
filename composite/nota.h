#ifndef NOTA_H
#define NOTA_H
#include <list>
#include<string>

using namespace std;

class Nota {

public:
    Nota(string descricao, double valor=0.0);
    virtual ~Nota();
    virtual void add(Nota* n);
    virtual void remove(Nota* n);
    virtual Nota* getNota(int indice);
    virtual double calcular() const;

    string obterDescricao();

protected:
    list<Nota*>* m_notas;

private:
    string m_descricao;
    double m_valor;
};

#endif // NOTA_H
