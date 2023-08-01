
#ifndef __CAT_HPP__
# define __CAT_HPP__

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {
	private:
		Brain* _brain;

	public:
		Cat(void);
		Cat(std::string type);
		Cat(const Cat &obj);
		Cat &operator=(const Cat &cpy);
		~Cat(void);

		void makeSound(void) const;
		Brain* getBrain(void) const;
};

#endif
