#include "AMateria.hpp"

AMateria::AMateria(){
}

AMateria::~AMateria(){
}

AMateria::AMateria(const AMateria& obj){
	*this = obj;
}

AMateria &AMateria::operator=(const AMateria& obj){
	if (this != &obj){
		this->_type = obj._type;
	}
	return *this;
}

AMateria::AMateria(std::string const & type){
	this->_type = type;
}

std::string const & AMateria::getType() const{
	return this->_type;
}

void	AMateria::use(ICharacter &target){
	std::cout << "AMateria: " << "\"*AMaterias an AMateria at " << target.getName() << "*\"" << std::endl;
}
