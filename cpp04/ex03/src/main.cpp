#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	std::cout << "----------subject main test----------" << std::endl;

	IMateriaSource* src = new MateriaSource();
	Ice *testice = new Ice();
	Cure *testcure = new Cure();

	src->learnMateria(testice);
	src->learnMateria(testcure);

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete testice;
	delete testcure;
	delete src;

	std::cout << "----------additional tests----------" << std::endl;

	// Test MateriaSource
    MateriaSource* materiaSource = new MateriaSource();
	Ice *ice = new Ice();
	Cure *cure = new Cure();

	std::cout << "MateriaSource has learned: " << materiaSource->getLearnedMateria() << std::endl;

    materiaSource->learnMateria(ice);
    materiaSource->learnMateria(cure);

    std::cout << "MateriaSource has learned: " << materiaSource->getLearnedMateria() << std::endl;

    AMateria* createdMateria = materiaSource->createMateria("ice");
    if (createdMateria != NULL)
        std::cout << "MateriaSource created: " << createdMateria->getType() << std::endl;

    delete createdMateria;
    delete materiaSource;

	std::cout << std::endl;

    // Test Character
    Character* character = new Character("Sephiroth");

	std::cout << "Character inventory size: " << character->getInventorySize() << std::endl;

    character->equip(ice);
    character->equip(cure);

    std::cout << "Character name: " << character->getName() << std::endl;
    std::cout << "Character inventory size: " << character->getInventorySize() << std::endl;

	character->unequip(1);
	std::cout << "Character inventory size: " << character->getInventorySize() << std::endl;

    Character* target = new Character("Cloud");

    character->use(0, *target);
    character->use(1, *target);

    delete target;
	delete ice;
    delete character;

	std::cout << std::endl;

    // Test AMateria
    AMateria* materia = new Ice();
    std::cout << "AMateria type: " << materia->getType() << std::endl;
    Character* targetForMateria = new Character("targetForMateria");
    materia->use(*targetForMateria);
    delete targetForMateria;
    delete materia;

	std::cout << "----------end of additional tests----------" << std::endl;
	return 0;
}