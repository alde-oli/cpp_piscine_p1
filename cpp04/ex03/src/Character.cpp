#include "Character.hpp"

///////////////////////////////
//constructors and destructor//
///////////////////////////////

Character::Character(std::string const &name)
	: _name(name), _nbMateria(0)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const &src)
{
	*this = src;
}

Character::~Character(void)
{
	for (int i = 0; i < this->_nbMateria; i++)
		delete this->_inventory[i];
}

//////////////////////
//operators overload//
//////////////////////

Character	&Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < this->_nbMateria; i++)
			delete this->_inventory[i];
		for (int i = 0; i < rhs._nbMateria; i++)
			this->_inventory[i] = rhs._inventory[i]->clone();
		this->_nbMateria = rhs._nbMateria;
	}
	return (*this);
}

////////////////
//interactions//
////////////////

void	Character::equip(AMateria *m)
{
	if (this->_nbMateria < 4)
	{
		this->_inventory[this->_nbMateria] = m;
		this->_nbMateria++;
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->_nbMateria)
	{
		for (int i = idx; i < this->_nbMateria - 1; i++)
			this->_inventory[i] = this->_inventory[i + 1];
		this->_inventory[this->_nbMateria - 1] = NULL;
		this->_nbMateria--;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < this->_nbMateria)
		this->_inventory[idx]->use(target);
}

//////////////////////
//geters and setters//
//////////////////////

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

int					Character::getInventorySize(void) const
{
	return (this->_nbMateria);
}