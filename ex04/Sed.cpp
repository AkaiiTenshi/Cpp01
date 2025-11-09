#include "Sed.hpp"
#include <iostream>
#include <fstream>

int SedFoo(std::string filename, std::string s1, std::string s2){
	std::ifstream ifs(filename.c_str());
	if (!ifs.is_open()){
		std::cerr << "Coulnd't open file " << filename << std::endl;
		return 1;
	}
	std::string line;
	size_t pos = 0;
	std::ofstream outfile(filename.append(".replace").c_str());
	if (!outfile.is_open()){
		std::cerr << "Coulnd't open file " << filename << std::endl;
		ifs.close();
		return 1;
	}
	while(std::getline(ifs, line)){
		pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos){
			line.erase(pos, s1.length());
			line.insert(pos, s2);
		}
		outfile << line << std::endl;	
	}
	ifs.close();
	outfile.close();
	return 0;
}
