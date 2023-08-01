
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << "### default WrongAnimal is constructed" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "### WrongAnimal " << type << " is constructed" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "### WrongAnimal " << this->_type << " is destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& Parent) : _type(Parent._type) {
	std::cout << "### WrongAnimal copy constructor called on " << Parent._type << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& cpyParent) {
	this->_type = cpyParent._type;
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "<< Default WrongAnimal sound >>" << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->_type;
}