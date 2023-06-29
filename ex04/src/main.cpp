#include "notsed.hpp"

int main(int ac, char **av)
{
	if (ac > 4 || ac < 4)
		return (exit_(1));
	if (!fExists(av[1]))
		return (exit_(2));
	return (replaceIf(av[1], av[2], av[3]));
}
