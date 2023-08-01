
#ifndef __DOG_HPP__
# define __DOG_HPP__
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {
	private:
			Brain* _brain;

	public:
		Dog(void);
		Dog(std::string type);
		Dog(const Dog &obj);
		Dog &operator=(const Dog &cpy);
		~Dog(void);
		
		void makeSound(void) const;
		Brain* getBrain(void) const;
};

#endif
