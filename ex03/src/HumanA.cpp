#include "../inc/HumanA.hpp"

HumanA::HumanA(void)
{
	std::cout << "Default constructor called" << std::endl;
}

HumanA::HumanA(HumanA const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

HumanA & HumanA::operator=(HumanA const & rhs)
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
		this->name = rhs.name;
	return (*this);
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor called" << std::endl;
}

HumanA::HumanA(std::string newName, Weapon& newWeapon) : name(newName) , weapon(&newWeapon)
{
	std::cout << "Parametric constructor called" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
