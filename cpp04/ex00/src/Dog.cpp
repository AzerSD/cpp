
#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "### Dog from Animal is constructed" << std::endl;
	_type = "Dog";
}

Dog::Dog(std::string type) : Animal(type) {
	std::cout << "### Dog " << type << " is constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "### Dog " << this->_type << " is destroyed"<< std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj) {
	std::cout << "### Dog copy constructor called on " << obj._type << std::endl;
}

Dog& Dog::operator=(const Dog& cpy) {
	this->_type = cpy._type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "<< Bark - Bark >>" << std::endl;
}