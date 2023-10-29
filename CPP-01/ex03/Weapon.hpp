#ifndef WEOPON_HPP
# define WEOPON_HPP

#include <iostream>

class Weapon{
    private:
        std::string	type;
	public:
		Weapon();
		Weapon(std::string type);
		const std::string&	getType();
		void				setType(std::string type);
};

#endif