#include "Cure.hpp"
#include "AMateria.hpp"

Cure::~Cure(){
	std::cout << "Cure destructor called" << "\n";
}

Cure::Cure(){
	this->_type = "Cure";
	std::cout << "Cure default constructor called" << "\n";
}

Cure::Cure(const Cure& obj){
	std::cout << "Cure copy constructor called" << "\n";
	*this = obj;
}

Cure &Cure::operator=(const Cure& obj){
	std::cout << "Cure assignation operator called" << "\n";
	if (this != &obj){
		this->_type = obj._type;
	}
	return *this;
}

AMateria *Cure::clone() const{
	return new Cure(*this);
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << "\n";
}