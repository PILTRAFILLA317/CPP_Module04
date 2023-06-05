#include "Cure.hpp"
#include "AMateria.hpp"

Cure::~Cure(){
}

Cure::Cure(){
	this->_type = "cure";
}

Cure::Cure(const Cure& obj){
	*this = obj;
}

Cure &Cure::operator=(const Cure& obj){
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