/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:49 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/26 00:17:36 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"ShrubberyCreationForm.hpp"
# include"RobotomyRequestForm.hpp"
# include"PresidentialPardonForm.hpp"
# include"Bureaucrat.hpp"
# include"Intern.hpp"

int main()
{
	Intern sousFifre;
	Form *pp = sousFifre.makeForm("PresidentialPardon", "A random citizen");
	Form *sc = sousFifre.makeForm("ShrubberyCreation", "filename");

	std::cout << std::endl;

	Bureaucrat boss = Bureaucrat("Boss", 1);
	boss.executeForm(*pp);
	boss.executeForm(*sc);

	std::cout << std::endl;

	Bureaucrat weak = Bureaucrat("Weak", 140);
	weak.executeForm(*pp);
	weak.executeForm(*sc);

	std::cout << std::endl;

	Form *err = sousFifre.makeForm("UnknownType", "azerty");
	return 0;
}
