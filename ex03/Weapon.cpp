#include "Weapon.hpp"

Weapon::Weapon(std::string Type) : type(Type){

}

Weapon::~Weapon(){}

std::string const &Weapon::getType() const{
	return(type);
}

void Weapon::setType(std::string const& newType){
	type = newType;
}
