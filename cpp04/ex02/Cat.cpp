#include "Cat.hpp"

////////////////////////////////
//constructors and destructors//
////////////////////////////////

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &source)
	: Animal(source), brain(NULL)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = source;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

/////////////
//operators//
/////////////

Cat	&Cat::operator=(const Cat &source)
{
	std::cout << "Cat assignation operator called" << std::endl;
	this->type = source.getType();
	if (this->brain != NULL)
		delete this->brain;
	this->brain = new Brain(*source.brain);

	return (*this);
}

////////////////
//interactions//
////////////////

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

///////////////////
//setters&getters//
///////////////////

std::string	Cat::getBrainIdea(int index) const
{
	if (this->brain == NULL)
		return ("");
	return (this->brain->getIdeas(index));
}

void	Cat::setBrainIdea(int index, std::string idea)
{
	if (this->brain != NULL)
		this->brain->setIdeas(index, idea);
}