#include "../inc/HumanB.hpp"

HumanB::HumanB(void)
{
	std::cout << "Default constructor called" << std::endl;
}

HumanB::HumanB(HumanB const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

HumanB & HumanB::operator=(HumanB const & rhs)
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
		this->name = rhs.name;
	return (*this);
}

HumanB::~HumanB(void)
{
	std::cout << "Destructor called" << std::endl;
}

HumanB::HumanB(std::string newName, Weapon *newWeapon) : name(newName) , weapon(newWeapon)
{
	std::cout << "Parametric constructor called" << std::endl;
}

HumanB::HumanB(std::string newName) : name(newName)
{
    std::cout << "One parameter constructor called" << std::endl;
}

void    HumanB::attack(void)
{
	if (this->weapon == NULL)
	{
		std::cout << this->name << " has no weapon" << std::endl;
		return ;
	}
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void   HumanB::setWeapon(Weapon &newWeapon)
{
    weapon = &newWeapon;
}
