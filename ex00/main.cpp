#include "Zombie.hpp"

int main(){

	Zombie Z1("Maurice");
	Zombie Z2("Clemence");
	Z1.announce();
	Z2.announce();

	Zombie* LeJ = newZombie("LeJ");
	LeJ->announce();
	delete LeJ;
	randomChump("LeS");
}
