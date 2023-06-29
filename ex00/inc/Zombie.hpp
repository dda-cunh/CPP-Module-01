#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	public:
		Zombie(void);
		Zombie(Zombie const & src);
		Zombie & operator=(Zombie const & rhs);
		~Zombie(void);

		Zombie(std::string);
		std::string	getName(void) const;
		void	announce(void);
	private:
		std::string	name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif