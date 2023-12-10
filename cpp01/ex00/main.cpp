#include "Zombie.hpp"


int main(void)
{
	Zombie	*zombie;

	zombie = newZombie("Steve");
	std::cout << "<" << zombie->getName() << "> Hello there !" << std::endl;
	zombie->announce();
	delete zombie;

	randomChump("Bob");

	randomChump("Patrick");
	return (0);
}