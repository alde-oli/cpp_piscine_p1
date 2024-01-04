#include "FragTrap.hpp"

int main()
{
	std::cout << "=== Création de FragTraps ===" << std::endl;
	FragTrap ft1("Fraggy");
	std::cout << std::endl;

	FragTrap ft2("Boomer");
	std::cout << std::endl;
	
	std::cout << "=== Test des méthodes de FragTrap ===" << std::endl;
	ft1.attack("Target1");
	ft1.takeDamage(15);
	ft1.beRepaired(10);
	ft1.highFive();
	std::cout << std::endl;

	ft2.attack("Target2");
	ft2.takeDamage(20);
	ft2.beRepaired(15);
	ft2.highFive();
	std::cout << std::endl;

	std::cout << "=== Test de la copie de FragTrap ===" << std::endl;
	FragTrap ft3 = ft1;
	ft3.attack("Target3");
	ft3.highFive();
	std::cout << std::endl;

	return 0;
}
