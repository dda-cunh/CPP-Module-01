#include "../inc/Zombie.hpp"

#define N 30

int	main(void)
{
	Zombie	*zombies = zombieHorde(N, "Fernando");

	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete[] zombies;
}
