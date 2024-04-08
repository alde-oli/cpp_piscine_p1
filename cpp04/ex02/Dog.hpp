#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &source);
		~Dog();

		Dog			&operator=(const Dog &source);

		void    	makeSound() const;

		std::string	getBrainIdea(int index) const;
		void		setBrainIdea(int index, std::string idea);

	private:
		Brain		*brain;
};

#endif