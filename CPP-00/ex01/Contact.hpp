/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:16:37 by elel-yak          #+#    #+#             */
/*   Updated: 2023/10/28 12:04:09 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream> // Include for std::cout, std::cin, std::endl

class Contact{
	private:
		std::string	f_name;
        std::string	l_name;
        std::string	n_name;
        std::string	darkest_secret;
        std::string	phone;
        int			index; // index of the contact in the phonebook
    public:
        Contact(); // Constructor
        std::string get_f_name();
        std::string get_l_name();
        std::string get_n_name();
        std::string get_darkest_secret();
        std::string get_phone();
        int			get_index(); // index of the contact in the phonebook
        void		set_f_name(std::string F_name);
        void		set_l_name(std::string L_name);
        void		set_n_name(std::string N_name);
        void		set_darkest_secret(std:: string Darkest_secret);
        void		set_phone(std::string Phone);
        void		set_index(int index);
};

#endif