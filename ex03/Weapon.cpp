#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Weapon::Weapon(Weapon const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Weapon & Weapon::operator=(Weapon const & rhs)
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

Weapon::~Weapon(void)
{
	std::cout << "Destructor called for " << this->getType() << std::endl;
}

Weapon::Weapon(std::string type) : type(type)
{
	std::cout << "Parametric constructor called" << std::endl;
}

const std::string&	Weapon::getType(void) const
{
	return(this->type);
}

void	Weapon::setType(std::string newtype)
{
	this->type = newtype;
	return ;
}
