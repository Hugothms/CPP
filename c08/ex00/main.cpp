/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 10:07:57 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/21 13:51:17 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"
#include<vector>
#include<list>
#include<iostream>

int main()
{
	/**** VALUES TO SEARCH FOR ****/
	std::vector<int> values;
	values.push_back(42);
	values.push_back(43);


	/**** SEARCH IN VECTOR ****/
	std::vector<int> vect;
	vect.push_back(1);
	vect.push_back(-999);
	vect.push_back(42);
	vect.push_back(1996);

	for (size_t i = 0; i < values.size(); i++)
	{
		int value = values[i];
		std::cout << "Searched " << value << ": ";
		try
		{
			std::vector<int>::iterator found = easyfind(vect, value);
			std::cout << *found << " found !" << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}



	/**** SEARCH IN LIST ****/
	std::list<int> list;
	list.push_back(1);
	list.push_back(-999);
	list.push_back(42);
	list.push_back(1996);

	for (size_t i = 0; i < values.size(); i++)
	{
		int value = values[i];
		std::cout << "Searched " << value << ": ";
		try
		{
			std::list<int>::iterator found = easyfind(list, value);
			std::cout << *found << " found !" << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	return 0;
}
