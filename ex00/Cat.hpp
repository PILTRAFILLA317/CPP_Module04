#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <cmath>
#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &obj);
	~Cat();
	Cat &operator=(const Cat &obj);
	void makeSound() const;
	using Animal::getType;
};

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat &obj);
	~WrongCat();
	WrongCat &operator=(const WrongCat &obj);
	void makeSound() const;
	using WrongAnimal::getType;
};

#endif