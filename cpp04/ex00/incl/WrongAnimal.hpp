
#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__
# include <iostream>

class WrongAnimal {
	protected:
		std::string	_type;
	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &obj);
		WrongAnimal& operator=(const WrongAnimal &cpy);
		virtual ~WrongAnimal(void);
    
		std::string getType(void) const;
		void makeSound(void) const;
};

#endif