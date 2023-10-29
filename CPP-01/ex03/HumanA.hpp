/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:41:45 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/29 22:41:46 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA{
    private:
		Weapon&	weapon;
		std::string	name;
    public:
		HumanA(std::string name, Weapon& arm);
		void	attack();
};

#endif