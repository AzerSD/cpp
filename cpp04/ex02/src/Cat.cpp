
#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain()) {
	std::cout << "### Cat from Animal is constructed" << std::endl;
	_type = "Cat";
}

Cat::Cat(std::string type) : Animal(type), _brain(new Brain()) {
	std::cout << "### Cat " << type << " constructor called" << std::endl;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "### Cat " << this->_type << " is destroyed"<< std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj) {
	this->_brain = new Brain(*obj._brain);
	std::cout << "### Cat copy constructor called on " << obj._type << std::endl;
}

Cat& Cat::operator=(const Cat& cpy) {
	this->_type = cpy._type;
	this->_brain = new Brain(*cpy._brain);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "<< Meow - Meow >>" << std::endl;
}

Brain* Cat::getBrain() const
{
	return this->_brain;
}
