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
		void	setName(std::string newName);
		void	announce(void);
	private:
		std::string	name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif