#include "Animal.hpp"
#include "Cat.hpp"

Cat::~Cat(){
	delete this->_brain;
	std::cout << "Cat destructor called" << "\n";
}

Cat::Cat(){
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat default constructor called" << "\n";
}

Cat::Cat(const Cat& obj){
	std::cout << "Cat copy constructor called" << "\n";
	*this = obj;
}

Cat &Cat::operator=(const Cat& obj){
	std::cout << "Cat assignation operator called" << "\n";
	if (this != &obj){
		this->_type = obj._type;
		this->_brain = obj._brain;
	}
	return *this;
}

void Cat::makeSound() const{
	std::cout << "Meow meow" << "\n";
}

Brain *Cat::getBrain() const{
	return this->_brain;
}

WrongCat::~WrongCat(){
	delete this->_brain;
	std::cout << "WrongCat destructor called" << "\n";
}

WrongCat::WrongCat(){
	this->_type = "WrongCat";
	this->_brain = new Brain();
	std::cout << "WrongCat default constructor called" << "\n";
}

WrongCat::WrongCat(const WrongCat& obj){
	std::cout << "WrongCat copy constructor called" << "\n";
	*this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat& obj){
	std::cout << "WrongCat assignation operator called" << "\n";
	if (this != &obj){
		this->_type = obj._type;
		this->_brain = obj._brain;
	}
	return *this;
}

void WrongCat::makeSound() const{
	std::cout << "Miau miau" << "\n";
}

Brain *WrongCat::getBrain() const{
	return this->_brain;
}