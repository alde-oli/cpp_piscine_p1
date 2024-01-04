#include "WrongCat.hpp"

////////////////////////////////
//constructors and destructors//
////////////////////////////////

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &wrongCat)
    : WrongAnimal(wrongCat)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = wrongCat;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

/////////////
//operators//
/////////////

WrongCat	&WrongCat::operator=(const WrongCat &source)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    this->type = source.getType();
    return (*this);
}

////////////////
//interactions//
////////////////

void	WrongCat::makeSound() const
{
    std::cout << "*mew mew?*" << std::endl;
}