#include <iostream>
using namespace std;


class Operador {
	protected:
		Operador * m_proximo;
	public:
		
		Operador() { m_proximo = nullptr; }

		
		virtual void calculo(int valor) = 0;

		
		void adicionarOperador(Operador *proximo) {
			m_proximo = proximo;
		}
};



class Quadrado : public Operador {
	private:
		int m_limite;
		int m_ID;
	public:
		Quadrado(int limite, int id) {
				m_limite = limite; 
				m_ID = id;
		}
		
		void calculo(int valor) {
            
			if (valor < m_limite) {
               int cal = valor * valor;
               cout << "Operador " << m_ID << " Realiza a operação Quadrado de um Valor: " << cal << endl;
               m_proximo->calculo(valor);
			}
			else if (m_proximo != nullptr) {
				// passar para o próximo elo
				m_proximo->calculo(valor);
			}
			else { 
				// Last in chain, so let the user know it was unhandled.
				cout << "descupa, sou o último Operador (" << m_ID << "), não é possível a operação." << endl; 
			}
            
		}
};


class Cubo : public Operador {
	private:
		int m_limite;
		int m_ID;
	public:
		Cubo(int limite, int id) {
				m_limite = limite; 
				m_ID = id;
		}
		
		void calculo(int valor) {
            
			if (valor > m_limite && valor < 100) {
               int cal = valor * valor* valor;
               cout << "Operador " << m_ID << " Realiza a operação Cubo de um Número: " << cal << endl;

			}
			else if (m_proximo != nullptr) {
				// passar para o próximo elo
				m_proximo->calculo(valor);
			}
			else { 
				// Last in chain, so let the user know it was unhandled.
				cout << "descupa, sou o último Operador (" << m_ID << "), não é possível a operação." << endl; 
			}
           
		}
};


int main ()
{

	
	Operador *h1 = new Quadrado(10, 19);
	Operador *h2 = new Cubo(20, 56);
	Operador *h3 = new Cubo(30, 4);

	
	h1->adicionarOperador(h2);
	h2->adicionarOperador(h3);

	
	h1->calculo(18);

	
	h1->calculo(40);

	delete h1;
	delete h2;
	delete h3;
	
	return 0;
}