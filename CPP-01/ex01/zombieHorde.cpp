/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:41:12 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/29 22:41:13 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	if (N < 0)
	{
		std::cout << "Enter a valid number (int)" << std::endl;
		return nullptr;
	}
	Zombie*	ptrZombie = new Zombie[N];
	for(int i = 0; i < N; i++)
		ptrZombie[i].set_name(name);
	return ptrZombie;
}