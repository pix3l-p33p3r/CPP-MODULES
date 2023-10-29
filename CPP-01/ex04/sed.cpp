#include "Sed.hpp"

void	replace_str(char	**av)
{
	std::string		file_name = av[1];
	std::string		old_str = av[2];
	std::string		new_str = av[3];
	std::string		line;

	size_t	index = 0;
	size_t	position = 0;

	std::ifstream	in_file(file_name);
	if (!in_file.is_open())
	{
		std::cerr << "Error opening input file: " << file_name << std::endl;
		return ;
	}
	std::ofstream	out_file(file_name + ".replace");
	if (!out_file.is_open())
	{
		std::cerr << "Error opening output file: " << file_name + ".replace" << std::endl;
        in_file.close();
		return ;
	}
	std::getline(in_file, line, '\0');
	if(av[2][0] == '\0')
	{
		index = line.length();
		line.erase(index, 1);
		line.insert(index, new_str); 
	}
	else
	{
		index = line.find(old_str, 0);
		while (index != std::string::npos)
		{
			line.erase(index, old_str.length());
			line.insert(index, new_str);
			position = index + new_str.length();
			index = line.find(old_str, position);
		}
	}
	out_file << line;
	in_file.close();
    out_file.close();
	std::cout << "Replacement completed and saved to " << file_name << ".replace" << std::endl;
}