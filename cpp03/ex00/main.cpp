#include <iostream>
#include "ClapTrap.hpp" // Assurez-vous que cette ligne correspond au nom de votre fichier d'en-tête

int main()
{
	ClapTrap ct1("Clappy");

	ct1.attack("Target1");

	ct1.takeDamage(5);

	std::cout << std::endl << std::endl;

	ClapTrap ct2(ct1);

	std::cout << std::endl << std::endl;

	ct1.takeDamage(10);

	ct1.takeDamage(3);

	ct1.beRepaired(5);

	std::cout << std::endl << std::endl;

	ClapTrap ct3("Exhausty");

	for (int i = 0; i < 11; i++)
		ct3.attack("Target2");

	std::cout << std::endl << std::endl;
	return 0;
}
