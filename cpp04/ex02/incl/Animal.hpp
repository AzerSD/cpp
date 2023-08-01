
#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__
# include <iostream>

class Animal {
	protected:
		std::string	_type;
		Animal(void);
		Animal &operator=(const Animal &cpy);
		Animal(const Animal &obj);
		Animal(std::string type);

	public:
		virtual ~Animal(void);
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;

};

#endif