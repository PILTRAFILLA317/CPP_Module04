#include "AMateria.hpp"

AMateria::AMateria(){
	std::cout << "AMateria default constructor called" << "\n";
}

AMateria::~AMateria(){
	std::cout << "AMateria destructor called" << "\n";
}

AMateria::AMateria(const AMateria& obj){
	std::cout << "AMateria copy constructor called" << "\n";
	*this = obj;
}

AMateria &AMateria::operator=(const AMateria& obj){
	std::cout << "AMateria assignation operator called" << "\n";
	if (this != &obj){
		this->_type = obj._type;
	}
	return *this;
}

AMateria::AMateria(std::string const & type){
	std::cout << "AMateria parameter constructor called" << "\n";
	this->_type = type;
}

std::string const & AMateria::getType() const{
	return this->_type;
}
