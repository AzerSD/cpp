#include <iomanip>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


int main(void)
{
	Animal* CatsAndDogs[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			CatsAndDogs[i] = new Cat();
		else
			CatsAndDogs[i] = new Dog();
	}
	
	std::cout << std::endl;
	for (int i = 0; i < 5; i++) 
		std::cout << "CAT " << i << ":" << ((Cat *)CatsAndDogs[i])->getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;
	for (int i = 5; i < 10; i++)
		std::cout << "DOG " << i << ": " << ((Cat *)CatsAndDogs[i])->getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		delete CatsAndDogs[i];

	return 0;
}