#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string const& name){
	if (N <= 0)
		return 0;

	Zombie* horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].setZombieName(name);
	return horde;
}
