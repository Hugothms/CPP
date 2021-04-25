/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:49 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/25 22:55:01 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Form.hpp"
# include"Bureaucrat.hpp"

int main()
{
	Bureaucrat bob = Bureaucrat("bob", 24);
	std::cout << bob << std::endl;
	Bureaucrat alice = Bureaucrat("alice", 42);
	std::cout << alice << std::endl;
	Form formidable = Form("formidable", 42, 24);
	std::cout << formidable << std::endl << std::endl;

	Bureaucrat test = Bureaucrat("test", 1);
	try
	{
		test.incrementGrade();
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}


	try
	{
		bob.signForm(formidable);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << formidable << std::endl << std::endl;

	try
	{
		alice.signForm(formidable);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << formidable << std::endl << std::endl;

	try
	{
		bob.signForm(formidable);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << formidable << std::endl;
	return 0;
}
