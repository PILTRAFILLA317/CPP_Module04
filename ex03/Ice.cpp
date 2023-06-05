#include "Ice.hpp"
#include "AMateria.hpp"

Ice::~Ice(){
}

Ice::Ice(){
	this->_type = "ice";
}

Ice::Ice(const Ice& obj){
	*this = obj;
}

Ice &Ice::operator=(const Ice& obj){
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