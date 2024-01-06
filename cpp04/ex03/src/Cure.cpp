#include "Cure.hpp"

/////////////////////////////
//Constructors & Destructor//
/////////////////////////////

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(Cure const &src) : AMateria(src)
{
}

Cure::~Cure(void)
{
}

//////////////////////
//operators overload//
//////////////////////

Cure	&Cure::operator=(Cure const &rhs)
{
	if (this != &rhs)
	{
		AMateria::operator=(rhs);
	}
	return (*this);
}

////////////////
//interactions//
////////////////

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}