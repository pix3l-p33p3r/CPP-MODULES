/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:53:52 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/15 18:39:12 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) {
    if (ac < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }

    for (int i = 1; i < ac; ++i) { 
        std::string arg = av[i]; 
        for (int j = 0; j < arg.length(); ++j) {
            char& c = arg[j]; // reference to char
            if (std::islower(c)) {
                c = std::toupper(c);
            }
        }
        std::cout << arg; 
        if (i < ac - 1) { 
            std::cout << " ";
        }
    }
    std::cout << std::endl; // add a new line at the end

    return 0;
}
