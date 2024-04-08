#include "Harl.hpp"

int main()
{
	while(1)
	{
		std::string level;
		std::cout << "Enter a level of complaint (debug, info, warning, error, exit (to stop the program)): ";
		std::getline(std::cin, level);
		if (level == "exit")
			break;
		if (level == "debug" || level == "info" || level == "warning" || level == "error")
		{
			Harl harl;
			harl.complain(level);
		}
		else
			std::cout << "Invalid level of complaint." << std::endl;
	}
	return (0);
}