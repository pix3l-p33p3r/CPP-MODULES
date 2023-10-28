/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:16:40 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/28 13:59:06 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index_contact = 0;
	number_of_contacts = 0;
}

void PhoneBook::set_indexContact(int Num_con){
	number_of_contacts = Num_con;
}

int PhoneBook::get_indexContact(){
	return(index_contact);
}

int PhoneBook::get_numberofContact(){
	return(number_of_contacts);
}

void PhoneBook::add_contact(std::string temp[5])
{
	if (index_contact > 7)
		index_contact = 0;
	con[index_contact].set_f_name(temp[0]);
	con[index_contact].set_l_name(temp[1]);
	con[index_contact].set_n_name(temp[2]);
	con[index_contact].set_darkest_secret(temp[3]);
	con[index_contact].set_index(index_contact);
	con[index_contact++].set_phone(temp[4]);
	if (number_of_contacts < 8)
		number_of_contacts++;
}

void ft_print(std::string str)
{
	if (str.length() > 9)
		std::cout << str.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << str;
}

void PhoneBook::show_details()
{
	std::string index_contact;
	int i;

	std::cout << "~-------------------------------------------~" << std::endl;
	std::cout << "|     index|First name|Last name |  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (i = 0; i < number_of_contacts; i++)
	{
		std::cout << std::right;
		std::cout << "|" << std::setw(10) << i << "|";
		ft_print(con[i].get_f_name());
		std::cout << "|";
		ft_print(con[i].get_l_name());
		std::cout << "|";
		ft_print(con[i].get_n_name());
		std::cout << "|" << std::endl;
	}
	std::cout << "~-------------------------------------------~" << std::endl;
	std::cout << "Enter contact index : ";
	if (!getline(std::cin, index_contact))
	{
		std::cout << "EoF" << std::endl;
		exit(0);
	}

	std::string::size_type j = 0;
	for (; std::isdigit(index_contact[j]) && j <  index_contact.size(); j++);
	if (j != index_contact.size()) {
		std::cout << "Unvalid index" << std::endl;
	} else {
		const char* cstr = index_contact.c_str();
		i = std::atoi(cstr);

		if (i >= number_of_contacts) {
			if (number_of_contacts > 0)
				std::cout << "The index must be between 0 and " << number_of_contacts - 1 << std::endl;
			else
				std::cout << "No contact has been found" << std::endl;
		} else {
			std::cout << std::left;
			std::cout << "#-------------------------------------------#" << std::endl;
			std::cout << "|-----------------Contact " << i << "-----------------|" << std::endl;
			std::cout << std::setw(21) << "First name" << ": " << con[i].get_f_name() << std::endl;
			std::cout << std::setw(21) << "Last name" << ": " << con[i].get_l_name() << std::endl;
			std::cout << std::setw(21) << "Nick name" << ": " << con[i].get_n_name() << std::endl;
			std::cout << std::setw(21) << "Darkest secret" << ": " << con[i].get_darkest_secret() << std::endl;
			std::cout << std::setw(21) << "Phone number" << ": " << con[i].get_phone() << std::endl;
			std::cout << "#-------------------------------------------#" << std::endl;
		}
	}
}
