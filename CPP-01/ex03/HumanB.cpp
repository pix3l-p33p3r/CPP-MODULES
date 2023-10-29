/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:41:48 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/29 22:41:49 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
    name = _name;
    weapon = NULL;
}

void    HumanB::setWeapon(Weapon& nweapon)
{
    weapon = &nweapon;
}

void    HumanB::attack()
{
    if (weapon != NULL)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " attack without arm"<< std::endl;
}
