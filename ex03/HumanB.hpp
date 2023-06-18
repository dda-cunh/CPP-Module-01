#ifndef	HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
	public:
		std::string	name;
		Weapon		weapon;

		HumanB(void);
		HumanB(HumanB const & src);
		HumanB & operator=(HumanB const & rhs);
		~HumanB(void);

		HumanB(std::string, Weapon);
		HumanB(std::string);
		void	attack(void);
		void    setWeapon(Weapon weapon);
};

HumanB	*HumanBHorde(int N, std::string name);

#endif