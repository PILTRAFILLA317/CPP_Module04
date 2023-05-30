#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cmath>

class Animal
{
protected:
	std::string _type;

public:
	Animal();
	Animal(const Animal &obj);
	virtual ~Animal();
	Animal &operator=(const Animal &obj);
	std::string getType() const;
	virtual void makeSound() const;
};

class WrongAnimal
{
protected:
	std::string _type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &obj);
	WrongAnimal(std::string name);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &obj);
	std::string getType() const;
	void makeSound() const;
};

#endif