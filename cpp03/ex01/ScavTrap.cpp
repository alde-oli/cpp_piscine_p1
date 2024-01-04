#include "ScavTrap.hpp"

////////////////////////////////
//constructors and destructors//
////////////////////////////////

ScavTrap::ScavTrap()
	: ClapTrap()
{
	std::cout << "A wild ScavTrap appeared, created from the void" << std::endl;
	this->_hp = 100;
	this->_e = 50;
	this->_ap = 20;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "A wild ScavTrap named " << name << " appeared, created from the void" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_e = 50;
	this->_ap = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap's soul fades away as he stares at you in disappointment..." <<std::endl;
}

/////////////////////////
//interaction functions//
/////////////////////////

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hp == 0)
	{
		std::cout << "... " << this->_name << " is in a long sleep and unfortunatly can't do anything anymore" <<  std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " tries attacking " << target << std::endl;
	if (this->_e == 0)
		std::cout  << "Ohh noo, the poor little thing is too tired... you should kill it" << std::endl;
	else
	{
		std::cout << this->_name << " focuses all it's energy and hits " << target << "as hard as it can, dealing an incredible " << this->_ap << " points damage ! Damn that must hurt !" << std::endl;
		this->_e -= 1;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " in now in guard mode" << std::endl;
}
