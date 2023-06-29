#ifndef	HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA
{
	public:
		std::string	name;
        Weapon      *weapon;

		HumanA(void);
		HumanA(HumanA const & src);
		HumanA & operator=(HumanA const & rhs);
		~HumanA(void);

		HumanA(std::string, Weapon&);
		void	attack(void);
};

#endif