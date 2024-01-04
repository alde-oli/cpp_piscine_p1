#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    // Démonstration du polymorphisme avec Animal, Dog, et Cat
    std::cout << "===== Polymorphisme avec Animal, Dog et Cat =====" << std::endl;
    Animal* animals[3];

    animals[0] = new Animal();
    animals[1] = new Dog();
    animals[2] = new Cat();

    for (int i = 0; i < 3; ++i) {
        std::cout << animals[i]->getType() << " says: ";
        animals[i]->makeSound();
    }

    for (int i = 0; i < 3; ++i) {
        delete animals[i];
    }

    // Démonstration sans polymorphisme avec WrongAnimal et WrongCat
    std::cout << "\n===== Sans Polymorphisme avec WrongAnimal et WrongCat =====" << std::endl;
    WrongAnimal* wrongAnimals[2];

    wrongAnimals[0] = new WrongAnimal();
    wrongAnimals[1] = new WrongCat();

    for (int i = 0; i < 2; ++i) {
        std::cout << wrongAnimals[i]->getType() << " says: ";
        wrongAnimals[i]->makeSound();
    }

    for (int i = 0; i < 2; ++i) {
        delete wrongAnimals[i];
    }

    return 0;
}
