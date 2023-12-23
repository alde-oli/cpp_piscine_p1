#include "ScavTrap.hpp"

int main()
{
	std::cout << "=== Création de ScavTraps ===" << std::endl;
	ScavTrap st1("Scavy");
	std::cout << std::endl;

	ScavTrap st2("Guardian");
	std::cout << std::endl;

	std::cout << "=== Test des méthodes de ScavTrap ===" << std::endl;
	st1.attack("Target1");
	st1.takeDamage(10);
	st1.beRepaired(5);
	st1.guardGate();
	std::cout << std::endl;

	st2.attack("Target2");
	st2.takeDamage(15);
	st2.beRepaired(10);
	st2.guardGate();
	std::cout << std::endl;

	std::cout << "=== Test de la copie de ScavTrap ===" << std::endl;
	ScavTrap st3 = st1;
	st3.attack("Target3");
	st3.guardGate();
	std::cout << std::endl;

	return 0;
}
