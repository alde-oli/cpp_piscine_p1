#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	public:
		Contact() {};
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
		
		enum Attribute { FirstName, LastName, Nickname, PhoneNumber, DarkestSecret };
		void printAttribute(Attribute attribute);
		std::string getAttribute(Attribute attribute);

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif