/*
 * concretebuilder.hpp
 *
 *  Created on: Aug 16, 2019
 *      Author: trajano
 */

#ifndef _CONCRETEBUILDER_HPP_
#define _CONCRETEBUILDER_HPP_
#include "builder.hpp"
#include "product.hpp"

class ConcreteBuilder : public Builder {
public:
	virtual void buildPartA() {
		cout << "---- building Parte A " << endl;
		m_product->addPartA();
	}
	virtual void buildPartB() {
		cout << "---- building Parte B" << endl;
		m_product->addPartB();
	}

	virtual Product* getProduct() {
		cout << "obtendo produto" << endl;
		return m_product;
	}

	virtual ~ConcreteBuilder() {}

	ConcreteBuilder() {
		cout << "criando ConcreteBuilder" << endl;
		this->m_product = new Product();
	}

private:
	Product* m_product;

};



#endif /* _CONCRETEBUILDER_HPP_ */
