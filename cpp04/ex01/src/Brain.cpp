
#include "Brain.hpp"
#include <stdlib.h>

Brain::Brain()
{
	const std::string bucketList[] = {
        "It is during our darkest moments that we must focus to see the light.",
        "Clouds come floating into my life, no longer to carry rain or usher storm, but to add color to my sunset sky.",
        "What you do speaks so loudly that I cannot hear what you say.",
        "I am not a product of my circumstances. I am a product of my decisions.",
        "We are what we repeatedly do. Excellence, then, is not an act, but a habit.",
        "We cannot solve problems with the kind of thinking we employed when we came up with them.",
        "Out of difficulties grow miracles.",
        "It is never too late to be what you might have been.",
        "The pessimist sees difficulty in every opportunity. The optimist sees opportunity in every difficulty.",
        "The time is always right to do what is right.",
        "No pressure, no diamonds.",
        "He is a wise man who does not grieve for the things which he has not but rejoices for those which he has.",
        "Whatever the mind of man can conceive and believe, it can achieve.",
        "Oh, the things you can find, if you don’t stay behind.",
        "When you realize how perfect everything is, you will tilt your head back and laugh at the sky.",
        "Develop success from failures. Discouragement and failure are two of the surest steppingstones to success.",
        "You will face many defeats in life, but never let yourself be defeated.",
        "You must do the things you think you cannot do.",
        "Setting goals is the first step in turning the invisible into the visible.",
        "I dwell in possibility."
	};
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = bucketList[rand() % (sizeof(bucketList) / sizeof(std::string))];
	std::cout << "### Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &Parent)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = Parent._ideas[i];
	std::cout << "### Brain copy constructor is called" << std::endl;
}

Brain& Brain::operator=(const Brain &cpyParent)
{
	if (this != &cpyParent)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = cpyParent._ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "### Brain destructor is called" << std::endl;
}

const std::string& Brain::getIdea(int index) const
{
	return this->_ideas[index];
}