
#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__
# include <iostream>

class Animal {
	protected:
		std::string	_type;

	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &Parent);
		Animal &operator=(const Animal &cpyParent);
		virtual ~Animal(void);

		std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif