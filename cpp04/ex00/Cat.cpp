#include "Cat.hpp"

////////////////////////////////
//constructors and destructors//
////////////////////////////////

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &source)
    : Animal(source)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = source;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

/////////////
//operators//
/////////////

Cat	&Cat::operator=(const Cat &source)
{
    std::cout << "Cat assignation operator called" << std::endl;
    this->type = source.getType();
    return (*this);
}

////////////////
//interactions//
////////////////

void	Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
