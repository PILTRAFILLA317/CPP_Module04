#include "Animal.hpp"
#include "Dog.hpp"

Dog::~Dog(){
	delete this->_brain;
	std::cout << "Dog destructor called" << "\n";
}

Dog::Dog(){
	this->_type = "Dog";
	this->_brain = new Brain();
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
		this->_brain = new Brain(*obj._brain);
	}
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Woof woof" << "\n";
}

Brain *Dog::getBrain() const{
	return this->_brain;
}