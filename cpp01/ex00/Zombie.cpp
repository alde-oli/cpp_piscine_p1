#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	this->announce();
}

Zombie::~Zombie(void)
{
	this->announceDeath();
}


void		Zombie::announce(void)
{
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void		Zombie::announceDeath(void)
{
	std::cout << this->_name << " miserably died." << std::endl;
}


std::string	Zombie::getName(void)
{
	return (this->_name);
}
