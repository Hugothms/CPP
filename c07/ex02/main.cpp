/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 14:56:10 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/15 15:35:34 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <iostream>
# include <string>
# include "array.hpp"

template<typename T>
void	print(Array<T> &array)
{
	for (size_t i = 0; i < array.size(); i++)
	{
		array[i] = i;
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

int main(void)
{
	std::cout << std::endl << "INT" << std::endl;
	Array<int> intR;
	print(intR);

	Array<int> intRR(5);
	print(intRR);

	intR = intRR;
	print(intR);

	std::cout << std::endl << "FLOAT" << std::endl;
	Array<float> floatR(25);
	print(floatR);

	std::cout << std::endl << "STRING" << std::endl;
	Array<std::string> stringR(5);
	print(stringR);

	Array<std::string> stringRR = stringR;
	for (size_t i = 0; i < 5; i++)
		stringRR[i] = "42";
	print(stringRR);

	std::cout << std::endl << "---" << std::endl;

	try
	{
		intRR[-1] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		intRR[999] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}