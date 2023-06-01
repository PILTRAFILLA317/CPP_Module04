#include "Ice.hpp"
#include "AMateria.hpp"

Ice::~Ice(){
	std::cout << "Ice destructor called" << "\n";
}

Ice::Ice(){
	this->_type = "Ice";
	std::cout << "Ice default constructor called" << "\n";
}

Ice::Ice(const Ice& obj){
	std::cout << "Ice copy constructor called" << "\n";
	*this = obj;
}

Ice &Ice::operator=(const Ice& obj){
	std::cout << "Ice assignation operator called" << "\n";
	if (this != &obj){
		this->_type = obj._type;
	}
	return *this;
}

AMateria *Ice::clone() const{
	return new Ice(*this);
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << "\n";
}