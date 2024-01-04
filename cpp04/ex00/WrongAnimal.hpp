#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &source);
		virtual	~WrongAnimal();

		WrongAnimal	&operator=(const WrongAnimal &source);

		void		makeSound() const;
		std::string	getType() const;

	protected:
		std::string	type;
};

#endif
