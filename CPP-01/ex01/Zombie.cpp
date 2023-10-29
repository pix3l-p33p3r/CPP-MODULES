#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << name << ": i am here" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}


std::string	Zombie::get_name(void)
{
	return(name);
}
