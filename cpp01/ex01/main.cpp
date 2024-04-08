#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombies;

	zombies = zombieHorde(5, "Spaghetto");
	if (!zombies)
		return (1);
	std::cout << std::endl << "the horde was created successfully !" << std::endl << std::endl;
	for (int i = 0; i < 5; i++)
		zombies[i].announce();
	std::cout << std::endl << "now it's time to die !" << std::endl << std::endl;
	delete [] zombies;
	return (0);
}