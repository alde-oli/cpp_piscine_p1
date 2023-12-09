#include "Contact.hpp"
#include "Phonebook.hpp"

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cctype>

int getValidIndex(int maxIndex);

int main()
{
	Phonebook	phoneBook;
	std::string	command;
	int			index = 0;

	if (index)
		return 0;
	while (true)
	{
		std::cout << "[Beebop] What do you want to do ?\n(ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);

		if (command == "EXIT")
			break;
		else if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
		{
			phoneBook.printAllContacts();
			index = getValidIndex(phoneBook.getNbContacts());
			if (phoneBook.getNbContacts() == 0)
				continue;
			phoneBook.printOneContact(index);
		} 
	}

	return 0;
}


bool isOnlyDigits(const std::string& str)
{
    for (size_t i = 0; i < str.length(); ++i)
        if (!std::isdigit(str[i]))
            return false;
    return true;
}

int getValidIndex(int maxIndex)
{
    std::string input;
    int index;

	if (maxIndex == 0)
	{
		std::cout << "[Beepbop] Looks like you have no friend... :/" << std::endl;
		return -1;
	}
    while (true)
	{
		std::cout << "[beebop] Enter index: ";
        std::getline(std::cin, input);
		if (isOnlyDigits(input))
		{
			index = atoi(input.c_str());
			if (index >= 0 && index < maxIndex)
				break;
			else
				std::cout << "[Beepop] Can you count?" << std::endl;
		}
		else
			std::cout << "[Beebop] That's not even a number what are you doing????" << std::endl;
    }
    return index;
}
