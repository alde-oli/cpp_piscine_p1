#include "Contact.hpp"

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
	: _first_name(first_name), _last_name(last_name), _nickname(nickname), _phone_number(phone_number), _darkest_secret(darkest_secret)
{
}

void Contact::printAttribute(Attribute attribute)
{
	switch (attribute)
	{
		case FirstName:
			std::cout << this->_first_name;
			break;
		case LastName:
			std::cout << this->_last_name;
			break;
		case Nickname:
			std::cout << this->_nickname;
			break;
		case PhoneNumber:
			std::cout << this->_phone_number;
			break;
		case DarkestSecret:
			std::cout << this->_darkest_secret;
			break;
	}
}

std::string Contact::getAttribute(Attribute attribute)
{
	switch (attribute)
	{
		case FirstName:
			return this->_first_name;
		case LastName:
			return this->_last_name;
		case Nickname:
			return this->_nickname;
		case PhoneNumber:
			return this->_phone_number;
		case DarkestSecret:
			return this->_darkest_secret;
	}
	return "";
}
