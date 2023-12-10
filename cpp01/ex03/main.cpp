#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	std::cout << "HumanA test:" << std::endl;
	{
		Weapon gun = Weapon("AK47");

		HumanA bob("Bob", gun);
		bob.attack();
		gun.setType("M16");
		bob.attack();
	}
	std::cout << std::endl << "HumanB test:" << std::endl;
	{
		Weapon gun = Weapon("AK47");
		
		HumanB jim("Jim");
		jim.setWeapon(gun);
		jim.attack();
		gun.setType("M16");
		jim.attack();
	}
	return 0;
}