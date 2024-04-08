#include "AMateria.hpp"

///////////////////////////////
//constructors and destructor//
///////////////////////////////

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
}

AMateria::~AMateria(void)
{
}

//////////////////////
//operators overload//
//////////////////////

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}


///////////////
//interaction//
///////////////

void	AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout << "Nothing happens" << std::endl;
}

//////////////////////
//geters and setters//
//////////////////////

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}
