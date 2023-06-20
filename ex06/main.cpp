#include "Harl.hpp"

int	get_type(std::string s)
{
	if (s.compare("DEBUG") == 0)
		return (0);
	if (s.compare("INFO") == 0)
		return (1);
	if (s.compare("WARNING") == 0)
		return (2);
	if (s.compare("ERROR") == 0)
		return (3);
	return (-1);
}

int main(int ac, char **av)
{
	std::string	filter;
	Harl		karen;

	if (ac != 2)
		return (1);
	filter = av[1];
	switch (get_type(av[1]))
	{
		case 0:
		{
			karen.complain("DEBUG");
			std::cout << std::endl;
			karen.complain("INFO");
			std::cout << std::endl;
			karen.complain("WARNING");
			std::cout << std::endl;
			karen.complain("ERROR");
		}
		break ;
		case 1:
		{
			karen.complain("INFO");
			std::cout << std::endl;
			karen.complain("WARNING");
			std::cout << std::endl;
			karen.complain("ERROR");
		}
		break ;
		case 2:
		{
			karen.complain("WARNING");
			std::cout << std::endl;
			karen.complain("ERROR");
		}
		break ;
		case 3:
			karen.complain("ERROR");
		break ;
		default:
			karen.complain("INVALID");
	}
	return (0);
}
