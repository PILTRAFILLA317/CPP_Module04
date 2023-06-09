#include "Character.hpp"
#include "AMateria.hpp"

Character::~Character(){
	for (int i = 0; i < 4; i++){
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
}

Character::Character(){
	this->_name = "Character";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name){
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character& obj){
	*this = obj;
}

Character &Character::operator=(const Character& obj){
	if (this != &obj){
		this->_name = obj._name;
		for (int i = 0; i < 4; i++){
			if (this->_inventory[i] != NULL)
				delete this->_inventory[i];
			this->_inventory[i] = obj._inventory[i]->clone();
		}
	}
	return *this;
}

std::string const & Character::getName() const{
	return this->_name;
}

void Character::equip(AMateria* m){
	for (int i = 0; i < 4; i++){
		if (this->_inventory[i] == NULL){
			this->_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx){
	if (idx < 0 || idx > 3)
		return;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
	if (idx < 0 || idx > 3)
		return;
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}

void Character::printInventory(){
	for (int i = 0; i < 4; i++){
		if (this->_inventory[i] != NULL)
			std::cout << "Inventory slot " << i << ": " << this->_inventory[i]->getType() << std::endl;
		else
			std::cout << "Inventory slot " << i << ": empty" << std::endl;
	}
}
