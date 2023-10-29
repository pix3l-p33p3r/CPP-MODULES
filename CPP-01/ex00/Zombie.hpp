/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:40:54 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/29 22:40:55 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include<iostream>

class   Zombie
{
    private:
        std::string	name;
    public:
        Zombie();
        ~Zombie();
		Zombie(std::string name);
        void		announce(void);
        std::string get_name(void);
        void        set_name(std::string);
        
};

Zombie*		newZombie( std::string name );
void		randomChump( std::string name );

#endif