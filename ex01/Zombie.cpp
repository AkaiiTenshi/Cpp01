#include "Zombie.hpp"

Zombie::Zombie() : name("") {}

Zombie::~Zombie(){
	std::cout << name << " got destroyed by an unknown force" << std::endl;
}

void Zombie::announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setZombieName(std::string const& Name){
	name = Name;
}
