/*
 * director.hpp
 *
 *  Created on: Aug 16, 2019
 *      Author: trajano
 */

#ifndef _DIRECTOR_HPP_
#define _DIRECTOR_HPP_

#include "builder.hpp"

class Director {
	private:
		Builder* m_builder;

	public:
		Director(Builder* builder) {
			this->m_builder = builder;
		}



		~Director() {}

		void construct() {
			m_builder->buildPartA();
			m_builder->buildPartB();
		}
};




#endif /* _DIRECTOR_HPP_ */
