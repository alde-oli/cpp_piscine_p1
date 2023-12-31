#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &source);
		~Dog();

		Dog		&operator=(const Dog &source);

		void    makeSound() const;
};

#endif