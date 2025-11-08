#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), _weapon(0){

}

HumanB::~HumanB(){}


void HumanB::setWeapon(Weapon& weapon){
	_weapon = &weapon;
}

void HumanB::attack() const{
	if(!_weapon)
		std::cout << _name << "has no weapon to attack and is to weak to fight barehanded" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
