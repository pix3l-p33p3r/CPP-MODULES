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