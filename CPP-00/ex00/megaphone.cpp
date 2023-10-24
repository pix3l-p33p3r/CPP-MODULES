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
		for (int j = 0; av[i][j] != '\0'; ++j) {
			av[i][j] = std::toupper(av[i][j]);
		}
		std::cout << av[i];
		if (i < ac - 1) {
			std::cout << " ";
		}
	}
	std::cout << std::endl;

	return 0;
}
