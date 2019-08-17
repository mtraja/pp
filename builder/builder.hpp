/*
 * builder.hpp
 *
 *  Created on: Aug 16, 2019
 *      Author: trajano
 */

#ifndef _BUILDER_HPP_
#define _BUILDER_HPP_

#include "product.hpp"

class Builder {
public:
	virtual void buildPartA() {}
	virtual void buildPartB() {}

	virtual Product* getProduct() = 0;

	virtual ~Builder() {}

protected:
	Builder(){}

};

#endif /* _BUILDER_HPP_ */
