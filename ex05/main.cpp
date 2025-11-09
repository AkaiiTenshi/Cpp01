#include "Harl.hpp"
#include <iostream>

int main(){
	Harl h;
	Harl c;

	std::cout << "Testing with Harl h" << std::endl;
	h.complain("ERROR");
	h.complain("WARNING");

	std::cout << "\nTesting with Harl c" << std::endl;
	c.complain("INFO");
	c.complain("ERROR");
	c.complain("DEBUG");
}
