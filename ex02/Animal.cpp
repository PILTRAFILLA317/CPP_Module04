#include "Animal.hpp"

Animal::~Animal(){
	std::cout << "Animal " << this->_type << " Default destructor called" << "\n";
}

Animal::Animal(){
	std::cout << "Animal default constructor called" << "\n";
}

Animal::Animal(const Animal& obj){
	std::cout << "Animal copy constructor called" << "\n";
	*this = obj;
}

Animal &Animal::operator=(const Animal& obj){
	std::cout << "Animal assignation operator called" << "\n";
	if (this != &obj){
		this->_type = obj._type;
	}
	return *this;
}

std::string Animal::getType() const{
	return this->_type;
}

void Animal::makeSound() const{
	std::cout << "*silence*" << "\n";
}

WrongAnimal::WrongAnimal(std::string type){
	this->_type = type;
	std::cout << this->_type << " created" << "\n";
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal " << this->_type << " Default destructor called" << "\n";
}

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal default constructor called" << "\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj){
	std::cout << "WrongAnimal copy constructor called" << "\n";
	*this = obj;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& obj){
	std::cout << "WrongAnimal assignation operator called" << "\n";
	if (this != &obj){
		this->_type = obj._type;
	}
	return *this;
}

std::string WrongAnimal::getType() const{
	return this->_type;
}

void WrongAnimal::makeSound() const{
	std::cout << "*silence*" << "\n";
}