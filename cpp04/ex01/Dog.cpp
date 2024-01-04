#include "Dog.hpp"

////////////////////////////////
//constructors and destructors//
////////////////////////////////

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &dog)
	: Animal(dog), brain(NULL)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = dog;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

/////////////
//operators//
/////////////

Dog	&Dog::operator=(const Dog &source)
{
	std::cout << "Dog assignation operator called" << std::endl;
	this->type = source.getType();
	if (this->brain != NULL)
		delete this->brain;
	this->brain = new Brain(*source.brain);
	return (*this);
}

////////////////
//interactions//
////////////////

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

///////////////////
//setters&getters//
///////////////////

std::string	Dog::getBrainIdea(int index) const
{
	if (this->brain == NULL)
		return ("");
	return (this->brain->getIdeas(index));
}

void	Dog::setBrainIdea(int index, std::string idea)
{
	if (this->brain != NULL)
		this->brain->setIdeas(index, idea);
}