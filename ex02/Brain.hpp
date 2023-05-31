#ifndef BRIN_HPP
#define BRIN_HPP

#include <iostream>
#include <cmath>
#include "Animal.hpp"

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain &obj);
		Brain &operator=(const Brain &obj);
};

#endif