#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <cmath>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria *_inventory[4];
	public:
		Character();
		Character(std::string name);
		Character(const Character &obj);
		~Character();
		Character &operator=(const Character &obj);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void printInventory();
};

#endif