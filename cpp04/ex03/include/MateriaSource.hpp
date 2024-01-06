#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		virtual ~MateriaSource(void);

		MateriaSource		&operator=(MateriaSource const &rhs);

		virtual void		learnMateria(AMateria *m);
		virtual AMateria	*createMateria(std::string const &type);

		int					getLearnedMateria(void) const;

	private:
		AMateria			*_materia[4];
		int					_nb;
};

#endif