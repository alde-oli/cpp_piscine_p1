#include "WrongAnimal.hpp"

////////////////////////////////
//constructors and destructors//
////////////////////////////////

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = wrongAnimal;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

///////////
//getters//
///////////

std::string	WrongAnimal::getType() const
{
    return (this->type);
}

/////////////
//operators//
/////////////

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &source)
{
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    this->type = source.getType();
    return (*this);
}

////////////////
//interactions//
////////////////

void	WrongAnimal::makeSound() const
{
    std::cout << "*probably not the animal sound you would expect*" << std::endl;
}
