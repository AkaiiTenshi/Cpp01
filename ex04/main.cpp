#include "Sed.hpp"
#include <iostream>

int main(int ac, char **av){
	if (ac == 4){
		for (int i = 0; av[i]; i++)
			if (av[i][0] == '\0'){
				std::cerr << "One or more empty arguments, please give me non-empty strings only" << std::endl;
				return 1;
			}
		SedFoo(av[1], av[2], av[3]);
	}
	else{
		std::cerr << "Give me 3 args please, ./sed <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	return 0;
}
