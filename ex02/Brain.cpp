#include "Animal.hpp"
#include "Brain.hpp"

Brain::~Brain(){
	std::cout << "Brain destructor called" << "\n";
}

Brain::Brain(){
	std::cout << "Brain default constructor called" << "\n";
}

Brain::Brain(const Brain& obj){
	std::cout << "Brain copy constructor called" << "\n";
	*this = obj;
}

Brain &Brain::operator=(const Brain& obj){
	std::cout << "Brain assignation operator called" << "\n";
	if (this != &obj){
		for (size_t i = 0; i <= 100; i++){
			this->_ideas[i] = obj._ideas[i];
		}
	}
	return *this;
}
