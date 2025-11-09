#include "Harl.hpp"
#include <iostream>
#include <string>

int main(int ac, char **av){
	if (ac == 2){
		Harl h;
		int lvl = -1;
		std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

		for (int i = 0; i < 4; i++){
			if (av[1] == levels[i]){
				lvl = i;
				break;
			}
		}
		switch (lvl){
			case 0:
				h.complain("DEBUG");
			case 1:
				h.complain("INFO");
			case 2:
				h.complain("WARNING");
			case 3:
				h.complain("ERROR");
				break ;
			default:
				std::cout <<"[Probably complaining about insignificant problems]\n";
				break;
		}


	}
	else{
		std::cerr << "Give me a proper argument por favor" << std::endl;
		return 1;
	}
}
