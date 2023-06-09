#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		std::cout << "---------------------" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	{
		std::cout << "---------------------" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const WrongAnimal* i = new WrongCat();
		const WrongCat *e = new WrongCat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		e->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
		delete e;
	}
return 0;
}