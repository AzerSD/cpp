
#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__
# include <iostream>

class Brain {
	private:
		std::string _ideas[100];

	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain &obj);
		Brain& operator=(const Brain &cpy);
		const std::string &getIdea(int index) const;
};

#endif