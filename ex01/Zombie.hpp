#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie{
	private:
		std::string  name;

	public:
		Zombie();
		~Zombie(void);
		void announce(void);
		void setZombieName(std::string const& Name);
};

Zombie* zombieHorde(int N, std::string const& Name);

#endif
