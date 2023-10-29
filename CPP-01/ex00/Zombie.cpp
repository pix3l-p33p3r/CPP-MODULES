/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:40:52 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/29 22:40:53 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::Zombie()
{
    std::cout << "Default contructor called" << std::endl;
    name = "";
}

Zombie::Zombie(std::string name)
{
    std::cout << "Parametrized contructor called" << std::endl;
    this->name = name; 
}

Zombie::~Zombie()
{
    std::cout << this->name << " destroyed" << std::endl;
}

std::string Zombie::get_name(void)
{
    return(name);
}

void Zombie::set_name(std::string Name)
{
    name = Name;
}