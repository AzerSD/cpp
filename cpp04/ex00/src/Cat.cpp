
#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "### Cat from Animal is constructed" << std::endl;
	_type = "Cat";
}

Cat::Cat(std::string type) : Animal(type) {
	std::cout << "### Cat " << type << " constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "### Cat " << this->_type << " is destroyed"<< std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj) {
	std::cout << "### Cat copy constructor called on " << obj._type << std::endl;
}

Cat& Cat::operator=(const Cat& cpy) {
	this->_type = cpy._type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "<< Meow - Meow >>" << std::endl;
}