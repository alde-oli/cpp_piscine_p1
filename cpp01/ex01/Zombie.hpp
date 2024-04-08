#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	public:
		Zombie(void){};
		Zombie(std::string name);
		~Zombie(void);

		void		announce(void);
		void		announceDeath(void);
		std::string	setName(std::string name);
		std::string	getName(void);

	private:
		std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif