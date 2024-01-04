#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &source);
		~ClapTrap(void);

		ClapTrap		&operator=(const ClapTrap &rhs);

		std::string		getName(void) const;
		unsigned int	getHp(void) const;
		unsigned int	getE(void) const;
		unsigned int	getAp(void) const;

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

	protected:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_e;
		unsigned int	_ap;
};

#endif