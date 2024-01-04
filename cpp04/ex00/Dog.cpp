#include "Dog.hpp"

////////////////////////////////
//constructors and destructors//
////////////////////////////////

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &dog)
    : Animal(dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

/////////////
//operators//
/////////////

Dog	&Dog::operator=(const Dog &source)
{
    std::cout << "Dog assignation operator called" << std::endl;
    this->type = source.getType();
    return (*this);
}

////////////////
//interactions//
////////////////

void	Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}
