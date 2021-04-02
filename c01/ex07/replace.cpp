/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 13:58:50 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 09:20:52 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <ios>
# include <fstream>

int	main(int argc, char const *argv[])
{
	// CHECK ARGS
	if (argc != 4)
	{
		std::cout << "Usage: ./replace s1 s2 filename" << std::endl;
		return 0;
	}
	std::string	s1 = argv[1];
	std::string	s2 = argv[2];
	std::string	filename = argv[3];
	if (s1.empty() || s2.empty() || filename.empty())
	{
		std::cout << "String shouldn't be emmpty" << std::endl;
		return 0;
	}

	// READ FROM FILE
	std::string line;
	std::ifstream filefrom(filename);
	std::string	content = "";
	if (filefrom.is_open())
	{
		while (getline(filefrom, line))
			content.append(line+'\n');
		filefrom.close();
		if (line != "")
		{
	        content.pop_back();
			std::cout << "qsdfgh" << std::endl;
		}
	}
	else
	{
		std::cout << "Unable to open file '" << filename << "'" << std::endl;
		return 0;
	}

	// REPLACE S1 BY S2
	int 	start = 0;
	size_t	pos;

	while ((pos = content.find(s1, start)) != std::string::npos)
	{
		content.replace(pos, s1.length(), s2);
		start += pos + s1.length();
	}

	// WRITE FROM FILE
	std::ofstream fileto(filename + ".replace");
	if (fileto.is_open())
	{
		fileto << content;
		fileto.close();
	}
	else
	{
		std::cout << "Unable to open file '" << filename + ".replace'" << std::endl;
		return 0;
	}
	return 0;
}
