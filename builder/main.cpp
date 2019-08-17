/*
 * main.cpp
 *
 *  Created on: Aug 16, 2019
 *      Author: trajano
 */

using namespace std;

#include <iostream>
#include <string>
#include "director.hpp"
#include "concretebuilder.hpp"
#include "product.hpp"



int main() {
	ConcreteBuilder* builder = new ConcreteBuilder();
	Director* director = new Director(builder);
	director->construct();
	Product* prod = builder->getProduct();
	return 0;
}





