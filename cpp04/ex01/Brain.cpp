#include "Brain.hpp"

////////////////////////////////
//constructors and destructors//
////////////////////////////////

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
}

Brain::Brain(const Brain &source)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = source;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

/////////////
//operators//
/////////////

Brain	&Brain::operator=(const Brain &source)
{
	std::cout << "Brain assignation operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = source.ideas[i];
	return (*this);
}


///////////////////
//setters&getters//
///////////////////

std::string	Brain::getIdeas(int index) const
{
	if (index < 0 || index >= 100)
		return ("");
	return (this->ideas[index]);
}

void	Brain::setIdeas(int index, std::string idea)
{
	this->ideas[index] = idea;
}
