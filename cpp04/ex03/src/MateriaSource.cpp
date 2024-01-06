#include "MateriaSource.hpp"

///////////////////////////////
//constructors and destructor//
///////////////////////////////

MateriaSource::MateriaSource(void)
	: _nb(0)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < this->_nb; i++)
		delete this->_materia[i];
}

//////////////////////
//operators overload//
//////////////////////

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < this->_nb; i++)
			delete this->_materia[i];
		for (int i = 0; i < rhs._nb; i++)
			this->_materia[i] = rhs._materia[i]->clone();
		this->_nb = rhs._nb;
	}
	return (*this);
}

////////////////
//interactions//
////////////////

void	MateriaSource::learnMateria(AMateria *m)
{
	if (this->_nb < 4)
	{
		this->_materia[this->_nb] = m->clone();
		this->_nb++;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->_nb; i++)
		if (this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	return (NULL);
}

///////////////////////
//getters and setters//
///////////////////////

int	MateriaSource::getLearnedMateria(void) const
{
	return (this->_nb);
}