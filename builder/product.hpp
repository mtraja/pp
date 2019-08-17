/*
 * product.hpp
 *
 *  Created on: Aug 16, 2019
 *      Author: trajano
 */

#ifndef _PRODUCT_HPP_
#define _PRODUCT_HPP_
class Product {
public:
	Product() {
		cout << "criando Product " << endl;
	}

	void addPartA() {
		cout << "------- adding Parte A em Product " << endl;
	}
	void addPartB() {
		cout << "------- adding Parte B em Product " << endl;
	}

};

#endif /* _PRODUCT_HPP_ */
