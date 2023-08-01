
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "### WrongCat is constructed" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
	std::cout << "### WrongCat " << type << " is constructed" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "### WrongCat " << this->_type << " is destroyed"<< std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj) {
	std::cout << "### WrongCat copy constructor called on " << obj._type << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& cpy) {
	this->_type = cpy._type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "<< Bark-Bark >>" << std::endl;
}