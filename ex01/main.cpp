#include "Zombie.hpp"

int main(){

	Zombie* LeJ = zombieHorde(3, "Le J");
	for (int i = 0; i < 3; i++)
		LeJ[i].announce();

	delete[] LeJ;
}
