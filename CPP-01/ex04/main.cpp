/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:42:12 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/29 22:42:13 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Syntax error: <filename> string1 string2" << std::endl;
		exit (EXIT_FAILURE);
	}
	replace_str(av);
	return (0);
}