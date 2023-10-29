/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:45:48 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/29 21:45:49 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string name;
    Zombie* zombie;

    std::cout << "#--------------------------#"<< std::endl;
    std::cout << "Allocating a zombie in stack"<< std::endl;
    std::cout << "Enter the name of zombie: ";
    std::cin >> name;
    zombie = newZombie(name);
    zombie->announce();
    delete zombie;
    std::cout << "#--------------------------#"<< std::endl;
    std::cout << "Allocating a zombie in heap"<< std::endl;
    std::cout << "Enter the name of zombie: ";
    std::cin >> name;
    randomChump(name);
    return 0;
}
