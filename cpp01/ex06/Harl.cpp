#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	std::string cases[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int lvl = -1;

	for (int i = 0; i < 4; i++)
		if (level == cases[i])
			lvl = i;

	switch (lvl)
	{
		case 0:
			for (int i = 0; i < 4; i++)
				(this->*f[i])();
			break;
		case 1:
			for (int i = 1; i < 4; i++)
				(this->*f[i])();
			break;
		case 2:
			for (int i = 2; i < 4; i++)
				(this->*f[i])();
			break;
		case 3:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
			break;
	}
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl << "I really do!" << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon costs more money." << std::endl << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl << "This is unacceptable!" << std::endl << "I want to speak to the manager now." << std::endl << std::endl;
}