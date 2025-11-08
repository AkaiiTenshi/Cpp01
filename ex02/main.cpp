#include <string>
#include <iostream>

int main(){
	std::string Str = "HI THIS IS BRAIN";
	std::string *stringPTR = &Str;
	std::string& stringREF = Str;

	std::cout << "Str: " << &Str << " " << "PTR: " << stringPTR << " " << "REF: " << & stringREF << std::endl;
	std::cout << "Str: " << Str << " " << "PTR: " << *stringPTR << " " << "REF: " <<  stringREF << std::endl;
}	
