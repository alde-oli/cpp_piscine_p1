#include "Ice.hpp"

///////////////////////////////
//constructors and destructor//
///////////////////////////////

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(Ice const &src) : AMateria(src)
{
}

Ice::~Ice(void)
{
}

//////////////////////
//operators overload//
//////////////////////

Ice	&Ice::operator=(Ice const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

////////////////
//interactions//
////////////////

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}