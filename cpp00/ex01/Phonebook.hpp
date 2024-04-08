#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class Phonebook
{
	public:
		Phonebook();
		void	addContact();
		void	printOneContact(int index);
		void	printAllContacts();
		int		getNbContacts();
	private:
		Contact	_contacts[8];
		int		_nb_contacts;
};

#endif