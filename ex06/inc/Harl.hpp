#ifndef	HARL_HPP
# define HARL_HPP

# include <iostream>

class	Harl
{
	public:
		Harl(void);
		Harl(Harl const & src);
		Harl & operator=(Harl const & rhs);
		~Harl(void);

		void	complain(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif