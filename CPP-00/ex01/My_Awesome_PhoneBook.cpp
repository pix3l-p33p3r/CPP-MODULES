/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   My_Awesome_PhoneBook.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:25:52 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/26 00:30:06 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int check_valid(const std::string tmp[5]) {
	for (int i = 0; i < 5; i++) {
		switch (i) {
			case 0:
				if (tmp[i].empty() || !std::isalpha(tmp[i][0])) {
					std::cout << "Error: Enter a valid first name" << std::endl;
					return -1;
				}
				break;
			case 1:
				if (tmp[i].empty() || !std::isalpha(tmp[i][0])) {
					std::cout << "Error: Enter a valid last name" << std::endl;
					return -1;
				}
				break;
			case 2:
				if (tmp[i].empty() || !std::isalpha(tmp[i][0])) {
					std::cout << "Error: Enter a valid nick name" << std::endl;
					return -1;
				}
				break;
			case 3:
				if (tmp[i].empty() || !std::isalnum(tmp[i][0])) {
					std::cout << "Error: Enter a valid darkest secret" << std::endl;
					return -1;
				}
				break;
			case 4:
				if (tmp[i].empty() || !std::isdigit(tmp[i][0])) {
					std::cout << "Error: Enter a valid phone number" << std::endl;
					return -1;
				}
				break;
		}
	}
	return 0;
}

std::string* get_data(std::string tmp[5]) { 
	std::cout << std::left;
	std::cout << std::setw(21) << "Enter first name" << ":";
	if (!std::getline(std::cin, tmp[0])) {
		std::cout << "END OF FILE" << std::endl;
		exit(0);
	}
	std::cout << std::setw(21) << "Enter last name" << ":";
	if (!std::getline(std::cin, tmp[1])) {
		std::cout << "END OF FILE" << std::endl;
		exit(0);
	}
	std::cout << std::setw(21) << "Enter nick name" << ":";
	if (!std::getline(std::cin, tmp[2])) {
		std::cout << "END OF FILE" << std::endl;
		exit(0);
	}
	std::cout << std::setw(21) << "Enter darkest secret" << ":";
	if (!std::getline(std::cin, tmp[3])) {
		std::cout << "END OF FILE" << std::endl;
		exit(0);
	}
	std::cout << std::setw(21) << "Enter phone number" << ":";
	if (!std::getline(std::cin, tmp[4])) {
		std::cout << "END OF FILE" << std::endl;
		exit(0);
	}
	return tmp;
}

int main() {
	PhoneBook phonebook;

	std::string cmd;
	std::string tmp[5];

	while (true) {
		std::cout << "~-------------------------------------------~" << std::endl;
		std::cout << "# Enter your command [ADD, SEARCH, EXIT]:" << std::endl;
		if (!std::getline(std::cin, cmd)) {
			std::cout << "END OF FILE" << std::endl;
			exit(0);
		}
		if (cmd == "ADD") {
			std::string* tmp_ptr = get_data(tmp);
			if (check_valid(tmp_ptr) == 0)
				phonebook.add_contact(tmp_ptr);
		} else if (cmd == "SEARCH") {
			phonebook.show_details();
		} else if (cmd == "EXIT") {
			break;
		}
	}
}
