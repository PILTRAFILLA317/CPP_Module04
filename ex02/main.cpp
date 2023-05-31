#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal	*animals[10];
	Dog		dog;
	Dog		dog2(dog);
	std::cout << "\n" << dog.getBrain() << "\n";
	std::cout << dog2.getBrain() << "\n" << "\n";
	for (int i = 0; i < 10; i++){
		if (i % 2 == 0){
			animals[i] = new Dog();
			std::cout << "\n";
		}
		else{
			animals[i] = new Cat();
			std::cout << "\n";
		}
	}
	const Dog *dogPtr = dynamic_cast<const Dog *>(animals[0]);
	std::cout << dogPtr->getBrain() << "\n";
	const Dog *dogPtr2 = dynamic_cast<const Dog *>(animals[2]);
	std::cout << dogPtr2->getBrain() << "\n";
	std::cout << "\n";
	for (int i = 0; i < 10; i++){
		delete animals[i];
		std::cout << "\n";
	}
	return 0;
}