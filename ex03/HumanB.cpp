#include "HumanB.hpp"

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

HumanB::HumanB(std::string name, Weapon weapon) : name(name) , weapon(weapon)
{
	std::cout << "Parametric constructor called" << std::endl;
}

HumanB::HumanB(std::string name) : name(name) , weapon("Hands")
{
    std::cout << "One parameter constructor called" << std::endl;
}

void    HumanB::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

void   HumanB::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}
