#include <iostream>

int	main(void)
{
	std::string	daString = "HI THIS IS BRAIN";
	std::string	*stringPTR = &daString;
	std::string	&stringREF = daString;

	std::cout << &daString << std::endl;
	std::cout << &stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	std::cout << daString << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

}
