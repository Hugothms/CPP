/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 19:00:56 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/21 21:07:37 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(1);
	sp.addNumber(2);
	sp.addNumber(3);
	sp.addNumber(-100);
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
	return 0;
}