
#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain()) {
	std::cout << "### Dog from Animal is constructed" << std::endl;
	_type = "Dog";
}

Dog::Dog(std::string type) : Animal(type), _brain(new Brain()) {
	std::cout << "### Dog " << type << " is constructor called" << std::endl;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "### Dog " << this->_type << " is destroyed"<< std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj) {
	this->_brain = new Brain(*obj._brain);
	std::cout << "### Dog copy constructor called on " << obj._type << std::endl;
}

Dog& Dog::operator=(const Dog& cpy) {
	this->_type = cpy._type;
	this->_brain = new Brain(*cpy._brain);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "<< Bark - Bark >>" << std::endl;
}

Brain* Dog::getBrain() const
{
	return this->_brain;
}
