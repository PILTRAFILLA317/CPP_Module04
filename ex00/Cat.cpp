#include "Animal.hpp"
#include "Cat.hpp"

Cat::~Cat(){
	std::cout << "Cat destructor called" << "\n";
}

Cat::Cat(){
	this->_type = "Cat";
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
	}
	return *this;
}

void Cat::makeSound() const{
	std::cout << "Meow meow" << "\n";
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << "\n";
}

WrongCat::WrongCat(){
	this->_type = "WrongCat";
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
	}
	return *this;
}

void WrongCat::makeSound() const{
	std::cout << "Miau miau" << "\n";
}