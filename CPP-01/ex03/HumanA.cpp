/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:41:42 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/29 22:41:43 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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