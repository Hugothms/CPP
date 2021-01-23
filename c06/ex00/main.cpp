/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 12:45:42 by hthomas           #+#    #+#             */
/*   Updated: 2021/01/23 13:25:39 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream> //cout
#include<string> //
#include<stdlib.h> //atoi
#include<iomanip> //fixed & setprecision

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: ./convert *value*" << std::endl;
		return 0;
	}
	char c = (char) std::atoi(argv[1]);
	int i = (int) std::atoi(argv[1]);
	float f = (float) std::atof(argv[1]);
	double d = (double) std::atof(argv[1]);
	bool impossible = (argv[1][0] != '0') && (c == 0);

	std::cout << "char: ";
	if(impossible)
		std::cout << "impossible" << std::endl;
	else if (std::isprint(c))
		std::cout << "'" << c << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	std::cout << "int: ";
	if(impossible)
		std::cout << "impossible" << std::endl;
	else
		std::cout << i << std::endl;
	
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	
	std::cout << "double: " << d << std::endl;
	
	return 0;
}
