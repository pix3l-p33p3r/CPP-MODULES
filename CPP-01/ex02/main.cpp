/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:41:24 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/29 22:41:25 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;


	std::cout << "The memory address of the string variable: " << &str << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;;
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "The value of the string variable: " << str << std::endl;
	std::cout << "The value pointed to by stringPTR: " << (*stringPTR) << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}