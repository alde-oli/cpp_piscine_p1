#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Cat cat1;
    Dog dog1;

	std::cout << std::endl << std::endl;

    cat1.makeSound();
    dog1.makeSound();

	std::cout << std::endl << std::endl;

    cat1.setBrainIdea(0, "Chase mice");
    std::cout << "Idea 0 in cat3's brain: " << cat1.getBrainIdea(0) << std::endl;
    dog1.setBrainIdea(0, "Fetch ball");
    std::cout << "Idea 0 in dog3's brain: " << dog1.getBrainIdea(0) << std::endl;

	std::cout << std::endl << std::endl;

    Cat cat2(cat1);
	std::cout << std::endl;
    Dog dog2(dog1);

	std::cout << std::endl << std::endl;

	std::cout << "Idea 0 in cat2's brain: " << cat2.getBrainIdea(0) << std::endl;
	std::cout << "Idea 0 in dog2's brain: " << dog2.getBrainIdea(0) << std::endl;

	std::cout << std::endl << std::endl;

    return 0;
}