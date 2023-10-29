/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:42:07 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/29 22:42:08 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEOPON_HPP
# define WEOPON_HPP

#include <iostream>

class Weapon{
    private:
        std::string	type;
	public:
		Weapon();
		Weapon(std::string type);
		const std::string&	getType();
		void				setType(std::string type);
};

#endif