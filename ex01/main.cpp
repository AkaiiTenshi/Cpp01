#include "Zombie.hpp"

int main(){

	Zombie* LeJ = zombieHorde(3, "Le J");
	LeJ->announce();
	delete LeJ;
}
