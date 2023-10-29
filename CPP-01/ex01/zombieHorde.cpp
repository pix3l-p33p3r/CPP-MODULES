#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	if (N < 0)
	{
		std::cout << "Enter a valid number (int)" << std::endl;
		return nullptr;
	}
	Zombie*	ptrZombie = new Zombie[N];
	for(int i = 0; i < N; i++)
		ptrZombie[i].set_name(name);
	return ptrZombie;
}