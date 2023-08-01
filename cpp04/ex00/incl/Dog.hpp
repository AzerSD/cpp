
#ifndef __DOG_HPP__
# define __DOG_HPP__
# include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog(void);
		Dog(std::string type);
		Dog(const Dog &obj);
		Dog &operator=(const Dog &cpy);
		~Dog(void);

		void makeSound(void) const;
};

#endif
