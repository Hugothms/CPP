/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 14:56:10 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/15 16:07:53 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <iostream>
# include <string>
# include "array.hpp"

template<typename T>
void	print(Array<T> &array)
{
	std::cout << "---" << std::endl;
	for (size_t i = 0; i < array.size(); i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

template<typename T>
void	fill(Array<T> &array)
{
	for (size_t i = 0; i < array.size(); i++)
		array[i] = i * 1.1;
}

int main(void)
{
	std::cout << "INT" << std::endl;
	Array<int> intR;
	print(intR);

	Array<int> intRR(5);
	print(intRR);

	fill(intRR);
	intR = intRR;
	print(intR);


	std::cout << std::endl << "FLOAT" << std::endl;
	Array<float> floatR(25);
	fill(floatR);
	print(floatR);


	std::cout << std::endl << "STRING" << std::endl;
	Array<std::string> stringR(5);
	stringR[0] = "Hello World!";
	stringR[1] = "AZERTY!";
	print(stringR);

	Array<std::string> stringRR = stringR;
	for (size_t i = 0; i < 5; i++)
		stringRR[i] = "42";
	print(stringRR);
	print(stringR);


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