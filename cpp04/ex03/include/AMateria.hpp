#ifndef AMAETERIA_HPP
# define AMAETERIA_HPP

# include <iostream>

class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &src);
		virtual ~AMateria(void);

		AMateria			&operator=(AMateria const &rhs);

		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);

		std::string const	&getType(void) const;

	protected:
		std::string			_type;
};

#endif