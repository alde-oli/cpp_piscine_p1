#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &source);
		~Cat();

		Cat			&operator=(const Cat &source);

		void		makeSound() const;

		std::string	getBrainIdea(int index) const;
		void		setBrainIdea(int index, std::string idea);
	
	private:
		Brain		*brain;
};

#endif