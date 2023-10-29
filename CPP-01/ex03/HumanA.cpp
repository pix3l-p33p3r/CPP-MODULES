#include "HumanA.hpp"

void    HumanA::attack()
{
    if (weapon.getType() != "")
        std::cout << name << " attacks with their " << weapon.getType() << std::endl;
    else
        std::cout << name << " attack without arm"<< std::endl;
}

HumanA::HumanA(std::string name, Weapon& arm): weapon(arm)
{
    this->name = name;
}