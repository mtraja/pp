#include <iostream>
#include <string>
#include <list>

using namespace std;

class Pessoa
{
public:
    virtual Pessoa* clone() = 0;

    Pessoa(const string& sNome, int id):m_sNome(sNome),m_ID(id) { }

    Pessoa(const Pessoa& pessoa) { 
        this->m_sNome = pessoa.m_sNome;
        this->m_ID = person.m_ID;
    }

    void SetNome(const string& sNome) {
         m_sNome = sNome; 
    }

    void SetID(int ID) { 
        m_ID = ID;       
    }

private:
    string m_sNome;
    int m_ID;
};
 
class Estudante: public Pessoa
{
public:
    Estudante(const string& sNome, int id):Pessoa(sNome, id)
    {
 
    }
    Estudante(const Estudante& estudante):Pessoa(estudante)
    {
 
    }
 
    Pessoa* clone()
    {
        return new Estudante(*this);
    }
};

class Professor: public Pessoa
{
public:
    Professor(const string& sName, int id):Pessoa(sName, id)
    {
 
    }
 
    Professor(const Professor& professor):Pessoa(professor)
    {
 
    }
 
    Pessoa* clone()
    {
        return new Professor(*this);
    }
};
 
class Escola
{
public:
 
    Escola(const string& sNome):m_sNome(sNome)
    {
 
    }
    Escola(const Escola& escola):m_sNome(escola.m_sNome){
        for (auto it = escola.m_Membros.begin(); it != escola.m_Membros.end(); it++)
            m_Membros.push_back((*it)->clone());
    }
    void adicionarMembro(Pessoa* ptr) { 
        m_Membros.push_back(ptr); 
    }

private:
    list<Pessoa*> m_Membros;
    string m_sNome;
};
 
 
void main(int argc, char* argv[]) 
{
    Escola* escola1 = new Escola("Instuto Federal de Educacao");
    Pessoa* p1 = new Estudante("Marcos Aurelio",1);
    Pessoa* p2 = new Estudante("Geoge dos Santos",2);
    Pessoa* p3 = new Professor("Jonas Cabral",3);
    escola1->adicionarMembro(p1);
    escola1->adicionarMembro(p2);
    escola1->adicionarMembro(p3);

   // chama o construtor cópia da classe Escola, que chama o método clone() da Classe Pessoa.
    Escola* escola2 = new Escola(*escola1);
 
}
