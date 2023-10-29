/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:42:03 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/29 22:42:04 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	type = "Constructor";
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

const std::string&	Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}