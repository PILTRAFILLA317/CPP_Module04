#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <cmath>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(const Cat &obj);
		~Cat();
		Cat &operator=(const Cat &obj);
		void makeSound() const;
		using Animal::getType;
		Brain *getBrain() const;
};

class WrongCat : public WrongAnimal
{
	private:
		Brain *_brain;
	public:
		WrongCat();
		WrongCat(const WrongCat &obj);
		~WrongCat();
		WrongCat &operator=(const WrongCat &obj);
		void makeSound() const;
		using WrongAnimal::getType;
		Brain *getBrain() const;
};

#endif