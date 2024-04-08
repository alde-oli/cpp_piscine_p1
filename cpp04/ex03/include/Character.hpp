#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(std::string const &name);
		Character(Character const &src);
		~Character(void);

		Character			&operator=(Character const &rhs);

		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);

		std::string const	&getName(void) const;
		int					getInventorySize(void) const;

	private:
		std::string			_name;
		AMateria			*_inventory[4];
		int					_nbMateria;
};

#endif