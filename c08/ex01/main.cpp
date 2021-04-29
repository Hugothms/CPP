/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 19:00:56 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/29 13:21:58 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(1000);
	sp.addNumber(2);
	sp.addNumber(-100);
	sp.addNumber(3);
	sp.addNumber(42);


	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;


	std::cout << std::endl;
	try
	{
		std::cout << "Trying to add one more element to sp: ";
		sp.addNumber(1);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	Span sp2 = Span(20);
	try
	{
		sp2.addNumbers(-200, -180);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
	return 0;
}
