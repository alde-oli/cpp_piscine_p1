#include "Animal.hpp"

////////////////////////////////
//constructors and destructors//
////////////////////////////////

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

///////////
//getters//
///////////

std::string	Animal::getType() const
{
	return (this->type);
}

/////////////
//operators//
/////////////

Animal	&Animal::operator=(const Animal &source)
{
	std::cout << "Animal assignation operator called" << std::endl;
	this->type = source.getType();
	return (*this);
}

////////////////
//interactions//
////////////////

void	Animal::makeSound() const
{
	std::cout << "*unidentified animal sound*" << std::endl;
}
