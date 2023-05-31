#include "Character.hpp"
#include "AMateria.hpp"

Character::~Character(){
	std::cout << "Character destructor called" << "\n";
}

Character::Character(){
	this->_name = "Character";
	std::cout << "Character default constructor called" << "\n";
}

Character::Character(std::string name){
	this->_name = name;
	std::cout << "Character parameter constructor called" << "\n";
}

Character::Character(const Character& obj){
	std::cout << "Character copy constructor called" << "\n";
	*this = obj;
}

Character &Character::operator=(const Character& obj){
	std::cout << "Character assignation operator called" << "\n";
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
