#include "../inc/Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Zombie::Zombie(Zombie const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Zombie & Zombie::operator=(Zombie const & rhs)
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
		this->name = rhs.getName();
	return (*this);
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor called for " << this->getName() << std::endl;
}

Zombie::Zombie(std::string newName) : name(newName)
{
	std::cout << "Parametric constructor called" << std::endl;
}

std::string	Zombie::getName(void) const
{
	return(this->name);
}

void	Zombie::setName(std::string newName)
{
	this->name = newName;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
