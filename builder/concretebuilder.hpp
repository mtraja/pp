/*
 * concretebuilder.hpp
 *
 *  Created on: Aug 16, 2019
 *      Author: trajano
 */

#ifndef _CONCRETEBUILDER_HPP_
#define _CONCRETEBUILDER_HPP_
#include "product.hpp"

class ConcreteBuilder : Builder {
public:
	virtual void buildPartA() {}
	virtual void buildPartB() {}

	virtual Product* getProduct() { return m_product; }

	virtual ~ConcreteBuilder() {}

	ConcreteBuilder() {
		this->m_product = new Product();
	}

private:
	Product* m_product;

};



#endif /* _CONCRETEBUILDER_HPP_ */
