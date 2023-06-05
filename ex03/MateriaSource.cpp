#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& obj){
	*this = obj;
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++){
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource& obj){
	if (this != &obj){
		for (int i = 0; i < 4; i++){
			if (this->_inventory[i] != NULL)
				delete this->_inventory[i];
			this->_inventory[i] = obj._inventory[i]->clone();
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m){
	for (int i = 0; i < 4; i++){
		if (this->_inventory[i] == NULL){
			this->_inventory[i] = m;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	if (type != "ice" && type != "cure")
		return NULL;
	for (int i = 0; i < 4; i++){
		if (this->_inventory[i] != NULL && this->_inventory[i]->getType() == type){
			return (this->_inventory[i]->clone());
		}
	}
	return NULL;
}

void MateriaSource::printInventory(){
	for (int i = 0; i < 4; i++){
		if (this->_inventory[i] != NULL)
			std::cout << this->_inventory[i]->getType() << std::endl;
		else
			std::cout << "null" << std::endl;
	}
}