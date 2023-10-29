/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:42:29 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/29 22:42:30 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    std::string cmd;
    Harl    object;
    std::cout << "Enter one cmd: DEBUG, INFO, WARNING, ERROR" << std::endl;
    std:: cin >> cmd;

    object.complain(cmd);
    return(0);
}