#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie*     ptr_Zombie;
    int         N;
    std::string name;

    std::cout << "Enter a valid number: " << std::endl;
    std::cin >> N;
    std::cout << "Enter the name of Zombies" << std::endl;
    std::cin >> name;
    ptr_Zombie = zombieHorde(N, name);
    if (ptr_Zombie)
    {
        for(int i = 0; i < N; i++)
        {
            ptr_Zombie[i].announce();
        }
        delete[] ptr_Zombie;
    }
    return 0;
}