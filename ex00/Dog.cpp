#include "Animal.hpp"
#include "Dog.hpp"

Dog::~Dog(){
	std::cout << "Dog destructor called" << "\n";
}

Dog::Dog(){
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << "\n";
}

Dog::Dog(const Dog& obj){
	std::cout << "Dog copy constructor called" << "\n";
	*this = obj;
}

Dog &Dog::operator=(const Dog& obj){
	std::cout << "Dog assignation operator called" << "\n";
	if (this != &obj){
		this->_type = obj._type;
	}
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Woof woof" << "\n";
}