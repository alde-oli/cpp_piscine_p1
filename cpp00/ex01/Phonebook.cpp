#include <iomanip>

#include "Contact.hpp"
#include "Phonebook.hpp"

Contact newContact();

Phonebook::Phonebook()
{
	this->_nb_contacts = 0;
}

void	Phonebook::addContact()
{
	std::cout << "[Beepbop] Let's add a new contact!\n";
	if (this->_nb_contacts < 8)
	{
		this->_contacts[this->_nb_contacts] = newContact();
		this->_nb_contacts++;
	}
	else
	{
		std::cout << "[Beepbop] Well... it seems that I have already 8 victims in the basement so I will have to get rid of ";
		this->_contacts[0].printAttribute(Contact::Nickname);
		std::cout << " to make some room...\n";
		std::cout << "[Beepbop] ...\n";
		for (int i = 1; i < 8; i++)
			this->_contacts[i- 1] = this->_contacts[i];
		this->_contacts[7] = newContact();
	}
	std::cout << "[Beepbop] Thanks for your cooperation ! ";
	this->_contacts[this->_nb_contacts - 1].printAttribute(Contact::Nickname);
	std::cout << " has been added to ... the pokedex !\n";
}

Contact newContact()
{
	std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

	std::cout << "[Beepbop] Okay so to add the new contact I need some informations.\n";

	std::cout << "Beggining with the first name: ";
	std::getline(std::cin, firstName);

	std::cout << "and the last name: ";
	std::getline(std::cin, lastName);

	std::cout << "I also would like a nickname for " << firstName << " " << lastName << " : ";
	std::getline(std::cin, nickname);

	std::cout << "Now the phone number: ";
	std::getline(std::cin, phoneNumber);

	std::cout << "Finally I need " << nickname <<"'s darkest secret for an eventual special operation later UwU: ";
	std::getline(std::cin, darkestSecret);

	return Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
}


void	Phonebook::printOneContact(int index)
{
	std::cout << "[Beepbop] Here is hostage number " << index << ":\n";
	std::cout << "((don't worry if the person doesn't respond, I bet they are doing fine :) ...))\n";
	this->_contacts[index].printAttribute(Contact::FirstName);
	std::cout << "\n";
	this->_contacts[index].printAttribute(Contact::LastName);
	std::cout << "\n";
	this->_contacts[index].printAttribute(Contact::Nickname);
	std::cout << "\n";
	this->_contacts[index].printAttribute(Contact::PhoneNumber);
	std::cout << "\n";
	this->_contacts[index].printAttribute(Contact::DarkestSecret);
	std::cout << "\n";
}


void	Phonebook::printAllContacts()
{
	std::cout << "[Beepbop] Choose your fighter:\n";

	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;

	for (int i = 0; i < this->_nb_contacts; i++)
	{
		std::cout << std::setw(10) << i << "|";
		
		std::string output = this->_contacts[i].getAttribute(Contact::FirstName);
		if (output.length() > 10) output = output.substr(0, 9) + ".";
		std::cout << std::setw(10) << output << "|";

		output = this->_contacts[i].getAttribute(Contact::LastName);
		if (output.length() > 10) output = output.substr(0, 9) + ".";
		std::cout << std::setw(10) << output << "|";

		output = this->_contacts[i].getAttribute(Contact::Nickname);
		if (output.length() > 10) output = output.substr(0, 9) + ".";
		std::cout << std::setw(10) << output << std::endl;
	}
}


int		Phonebook::getNbContacts()
{
	return this->_nb_contacts;
}
