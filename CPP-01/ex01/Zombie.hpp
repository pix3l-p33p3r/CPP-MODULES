/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:41:10 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/29 22:41:11 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include<iostream>

class Zombie{
    private:
        std::string name;
    public:
        void announce(void);
        void set_name(std::string name);
        std::string get_name(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif