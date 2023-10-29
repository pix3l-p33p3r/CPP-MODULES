#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include<iostream>

class   Zombie
{
    private:
        std::string	name;
    public:
        Zombie();
        ~Zombie();
		Zombie(std::string name);
        void		announce(void);
        std::string get_name(void);
        void        set_name(std::string);
        
};

Zombie*		newZombie( std::string name );
void		randomChump( std::string name );

#endif