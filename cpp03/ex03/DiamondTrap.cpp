#include "DiamondTrap.hpp"

////////////////////////////////
//constructors and destructors//
////////////////////////////////

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	FragTrap::_hp = 100;
	ScavTrap::_e = 50;
	FragTrap::_ap = 30;
	std::cout << "A wild DiamondTrap named " << name << " appeared, created from the void" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap's soul fades away as he stares at you in disappointment..." << std::endl;
}

/////////////////////////
//interaction functions//
/////////////////////////

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My DiamondTrap name is " << this->_name << " and my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}
