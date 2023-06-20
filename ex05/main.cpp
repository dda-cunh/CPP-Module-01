#include "Harl.hpp"

const std::string	YELLOW	= "\033[33m";
const std::string	GREEN	= "\033[32m";
const std::string	RESET	= "\033[0m";
const std::string	BLUE	= "\033[34m";
const std::string	RED		= "\033[31m";

int main(void)
{
	Harl	karen;

	std::cout << RESET << GREEN << "Debug call:" << BLUE << std::endl;
	karen.complain("DEBUG");
	std::cout << RESET << GREEN << "Info call:" << BLUE << std::endl;
	karen.complain("INFO");
	std::cout << RESET << GREEN << "Warning call:" << BLUE << std::endl;
	karen.complain("WARNING");
	std::cout << RESET << GREEN << "Error call:" << BLUE << std::endl;
	karen.complain("ERROR");
	std::cout << RESET << GREEN << "Invalid call:" << BLUE << std::endl;
	karen.complain("YO");
	std::cout << RESET;
	return (0);
}
