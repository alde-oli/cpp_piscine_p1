#ifndef AMAETERIA_HPP
# define AMAETERIA_HPP

# include <iostream>
# include <ICharacter.hpp>

class AMateria
{
	public:
		AMateria();
		AMateria(AMateria const &src);
		AMateria(std::string const &type);
		~AMateria();

		std::string const &getType() const;
	
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);

	protected:
		std::string _type;
}

#endif