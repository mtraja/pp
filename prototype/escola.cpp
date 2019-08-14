#include <iostream>
#include <string>
#include <list>

using namespace std;

class Pessoa
{
public:
    virtual Pessoa* clone() = 0;

    Pessoa(const string& sNome, int id):m_sNome(sNome),m_ID(id) { }

    Pessoa(const Pessoa& pes) { 
        this->m_sNome = pes.m_sNome;
        this->m_ID = pes.m_ID;
    }

    void definirNome(const string& sNome) {
         m_sNome = sNome; 
    }

    void definirID(int ID) { 
        m_ID = ID;       
    }

private:
    string m_sNome;
    int m_ID;
};
 
class Estudante: public Pessoa
{
private:
   double m_Media; 
public:
    Estudante(const string& sNome, int id):Pessoa(sNome, id)
    {
        this->m_Media = 0.0;
    }
    
    Estudante(const Estudante& estudante):Pessoa(estudante)
    {
        this->m_Media = estudante.m_Media;
    }

    void definirMedia(double media) {
        this->m_Media = media;
    }

    double obterMedia() {
        return m_Media;
    }
 
    Pessoa* clone()
    {
        return new Estudante(*this);
    }
};

class Professor: public Pessoa
{
private:
    double m_Salario;
public:
    Professor(const string& sName, int id):Pessoa(sName, id)
    {
        this->m_Salario = 2500.0;
    }
 
    Professor(const Professor& professor):Pessoa(professor)
    {
        this->m_Salario = professor.m_Salario;
    }

    void definirSalario(double salario) {
        this->m_Salario = salario;
    }

    double obterSalario() {
        return m_Salario;
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
    void adicionarMembro(Pessoa* pessoa) { 
        m_Membros.push_back(pessoa); 
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
