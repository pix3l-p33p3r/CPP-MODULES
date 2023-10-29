/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:41:50 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/29 22:41:51 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
    private:
        std::string name;
        Weapon*     weapon;
    public:
        HumanB(std::string  _name);
        void    setWeapon(Weapon& nweapon);
        void    attack();
};

#endif
