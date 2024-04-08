#include "FragTrap.hpp"

////////////////////////////////
//constructors and destructors//
////////////////////////////////

FragTrap::FragTrap()
	: ClapTrap()
{
	std::cout << "A wild FragTrap appeared, created from the void" << std::endl;
	this->_hp = 100;
	this->_e = 100;
	this->_ap = 30;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "A wild FragTrap named " << name << " appeared, created from the void" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_e = 100;
	this->_ap = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap's soul fades away as he stares at you in disappointment..." <<std::endl;
}

/////////////////////////
//interaction functions//
/////////////////////////

void	FragTrap::highFive(void)
{
	std::cout << "FragTrap " << this->_name << " is trying to celebrate with everyone" << std::endl;
	if (this->_e == 0)
		std::cout  << "Ohh noo, the poor little thing is too tired... you should kill it" << std::endl;
	else
	{
		std::cout << this->_name << " high vives the team" << std::endl;
		this->_e -= 1;
	}
}