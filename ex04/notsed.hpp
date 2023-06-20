#ifndef	NOTSED_HPP
# define	NOTSED_HPP

# include <sys/stat.h>
# include <iostream>
# include <fstream>

bool	fExists(const std::string& name);
int		replaceIf(std::string filename, std::string s1, std::string s2);
int		exit_(int status);

#endif