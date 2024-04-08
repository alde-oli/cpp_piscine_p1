#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain
{
	public:
		Brain();
		Brain(const Brain &source);
		~Brain();

		Brain			&operator=(const Brain &source);

		std::string		getIdeas(int index) const;
		void			setIdeas(int index, std::string idea);

	private:
		std::string		ideas[100];
};

#endif