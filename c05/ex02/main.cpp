/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:49 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/25 23:52:38 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"ShrubberyCreationForm.hpp"
# include"RobotomyRequestForm.hpp"
# include"PresidentialPardonForm.hpp"
# include"Bureaucrat.hpp"

int main()
{
	srand(time(NULL));

	Bureaucrat charly = Bureaucrat("Charly", 1);
	std::cout << charly << std::endl;

	std::cout << std::endl;

	try
	{
		ShrubberyCreationForm scf = ShrubberyCreationForm("Prisonner");
		std::cout << scf << std::endl;
		charly.signForm(scf);
		charly.executeForm(scf);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		RobotomyRequestForm rrf = RobotomyRequestForm("Prisonner");
		std::cout << rrf << std::endl;
		charly.signForm(rrf);
		charly.executeForm(rrf);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		PresidentialPardonForm ppf = PresidentialPardonForm("Prisonner");
		std::cout << ppf << std::endl;
		charly.signForm(ppf);
		charly.executeForm(ppf);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}


