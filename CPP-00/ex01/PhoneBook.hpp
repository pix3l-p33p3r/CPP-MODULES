/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:26:39 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/26 00:35:44 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP


#include <iostream> // Include for std::cout, std::cin, std::endl
#include <string> // Include for std::string
#include <cstdlib> // Include for std::atoi
#include <iomanip> // Include for std::setw
#include <stdlib.h> // Include for exit(0)
#include "Contact.hpp" // Include for Contact class


class  PhoneBook{
	private:
        Contact con[8];
	    int		index_contact;
	    int		number_of_contacts;
    public:
	    PhoneBook();
	    void	set_indexContact(int Num_con);
        int		get_indexContact();
	    int		get_numberofContact();
	    void	add_contact(std::string temp[5]);
	    void	show_details();
};

#endif