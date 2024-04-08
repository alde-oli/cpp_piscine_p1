#include "DiamondTrap.hpp"

int main()
{
	std::cout << "=== Création de DiamondTraps ===" << std::endl;
	DiamondTrap dt1("Diamondy");
	std::cout << std::endl;

	DiamondTrap dt2("Shiny");
	std::cout << std::endl;

	std::cout << "=== Test des méthodes de DiamondTrap ===" << std::endl;
	dt1.attack("Target1");
	dt1.takeDamage(20);
	dt1.beRepaired(15);
	dt1.guardGate();
	dt1.highFive();
	dt1.whoAmI();
	std::cout << std::endl;

	dt2.attack("Target2");
	dt2.takeDamage(25);
	dt2.beRepaired(20);
	dt2.guardGate();
	dt2.highFive();
	dt2.whoAmI();
	std::cout << std::endl;

	std::cout << "=== Test de la copie de DiamondTrap ===" << std::endl;
	DiamondTrap dt3 = dt1;
	dt3.whoAmI();
	std::cout << std::endl;

	return 0;
}