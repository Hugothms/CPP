/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:49 by hthomas           #+#    #+#             */
/*   Updated: 2021/01/22 11:26:53 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"Form.hpp"

int main(int argc, char const *argv[])
{
	Bureaucrat bob = Bureaucrat("bob", 42);
	std::cout << bob << std::endl;
	Form formidable = Form("formidable", 42, 24);
	std::cout << formidable << std::endl;
	formidable.beSigned(bob);
	std::cout << formidable << std::endl;
	return 0;
}
