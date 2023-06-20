#include "Harl.hpp"
#include <string>

Harl::Harl(void)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Harl::Harl(Harl const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Harl & Harl::operator=(Harl const & rhs)
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
		(void)rhs;
	return (*this);
}

Harl::~Harl(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-";
	std::cout << "special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough";
	std::cout << " bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for";
	std::cout << " years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*type[4])(void) = {&Harl::debug, &Harl::info,
									&Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;

	for (i = 0; i < 4; i++)
	{
		if (levels[i].compare(level) == 0)
		{
			(this->*type[i])();
			break ;
		}
	}
	if (i == 4)
		std::cout << "Invalid complaint" << std::endl;
	return ;
}
