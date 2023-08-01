
#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "### Default Animal is constructed" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "### Animal " << type << " is constructed" << std::endl;
}

Animal::~Animal() {
	std::cout << "### Animal " << this->_type << " is destroyed" << std::endl;
}

Animal::Animal(const Animal& obj) : _type(obj._type) {
	std::cout << "### Animal copy constructor called on " << obj._type << std::endl;
}

Animal& Animal::operator=(const Animal& cpy) {
	this->_type = cpy._type;
	return *this;
}

void Animal::makeSound() const {
	std::cout << "<< Default Animal sound >>" << std::endl;
}

std::string Animal::getType() const {
	return this->_type;
}