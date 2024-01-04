#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	public:
		Animal();
		Animal(const Animal &source);
		virtual	~Animal();

		Animal			&operator=(const Animal &source);

		virtual void	makeSound() const;
		std::string		getType() const;

	protected:
		std::string		type;
};

#endif