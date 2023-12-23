#include "ClapTrap.hpp"

////////////////////////////////
//constructors and destructors//
////////////////////////////////

ClapTrap::ClapTrap(void)
{
	std::cout << "A wild ClapTrap appeared, created from the void" << std::endl;
	this->_hp = 10;
	this->_e = 10;
	this->_ap = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hp = 10;
	this->_e = 10;
	this->_ap = 0;
	std::cout << "A wild ClapTrap named " << name << " appeared, created from the void" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &source)
{
	std::cout << "Kagebunshin no jutsu ! A ClapTrap was created, copied from another ClapTrap" << std::endl;
	*this = source;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap's soul fades away as he stares at you in disappointment..." <<std::endl;
}

///////////
//getters//
///////////

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHp(void) const
{
	return (this->_hp);
}

unsigned int	ClapTrap::getE(void) const
{
	return (this->_e);
}

unsigned int	ClapTrap::getAp(void) const
{
	return (this->_ap);
}

/////////////
//overloadd//
/////////////

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	this->_name = rhs.getName();
	this->_hp = rhs.getHp();
	this->_e = rhs.getE();
	this->_ap = rhs.getAp();
	return (*this);
}

/////////////////////////
//interaction functions//
/////////////////////////

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hp == 0)
	{
		std::cout << "... " << this->_name << " is in a long sleep and unfortunatly can't do anything anymore" <<  std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " tries attacking " << target << std::endl;
	if (this->_e == 0)
		std::cout  << "Ohh noo, the poor little thing is too tired... you should kill it" << std::endl;
	else
	{
		std::cout << this->_name << " focuses all it's energy and hits " << target << "as hard as it can, dealing an incredible " << this->_ap << " points damage ! Damn that must hurt !" << std::endl;
		this->_e -= 1;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << "Chill dude " << this->_name << " is already dead, leave it alone !" <<  std::endl;
		return ;
	}
	std::cout  << this->_name << " gets punched  and takes " << amount << " points of damage " << std::endl;
	if (amount > this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount;
	if (this->_hp == 0)
		std::cout << "Oh nooooo he died !... Anyway, last week" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << "Unfortunatly this little robot can't undead itself" <<  std::endl;
		return ;
	}
	std::cout  << this->_name << " Chugs a big bottle of holy wd40 and gains back " << amount << " hp" << std::endl;
	this->_hp += amount;
	this->_e -= 1;
}
