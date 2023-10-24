/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:16:35 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/24 03:42:21 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    f_name = "";
    l_name = "";
    n_name = "";
    darkest_secret = "";
    phone = "";
    index = 0;
}
    
std::string Contact::get_f_name()
{
    return (f_name);
}

std::string Contact::get_l_name()
{
    return (l_name);
}

std::string Contact::get_n_name()
{
    return (n_name);
}

std::string Contact::get_darkest_secret()
{
    return (darkest_secret);
}
std::string Contact::get_phone()
{
    return (phone);
}

int Contact::get_index()
{
    return (index);
}

void	Contact::set_f_name(std::string F_name)
{
    f_name = F_name;
}

void	Contact::set_l_name(std::string L_name)
{
    l_name = L_name;
}

void	Contact::set_n_name(std::string N_name)
{
    n_name = N_name;
}

void	Contact::set_darkest_secret(std:: string Darkest_secret)
{
    darkest_secret = Darkest_secret;
}

void	Contact::set_phone(std::string Phone)
{
    phone = Phone;
}

void	Contact::set_index(int Index)
{
    index = Index;
}
