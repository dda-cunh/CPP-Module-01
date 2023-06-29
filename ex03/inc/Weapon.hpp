#ifndef	WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{
	public:
		Weapon(void);
		Weapon(Weapon const & src);
		Weapon & operator=(Weapon const & rhs);
		~Weapon(void);

		Weapon(std::string);
		const std::string&	getType(void) const;
		void	setType(std::string newtype);
		void	announce(void);
	private:
		std::string	type;
};

#endif