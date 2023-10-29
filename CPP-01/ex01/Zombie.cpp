/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:41:07 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/29 22:41:08 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
