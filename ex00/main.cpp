#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombieheap = newZombie("Fernando");
	randomChump("Fabricio");
	zombieheap->announce();
	delete zombieheap;
}
