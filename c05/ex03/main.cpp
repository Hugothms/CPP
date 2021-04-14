/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:49 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/14 17:50:30 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"ShrubberyCreationForm.hpp"
# include"RobotomyRequestForm.hpp"
# include"PresidentialPardonForm.hpp"
# include"Bureaucrat.hpp"
# include"Intern.hpp"

int main()
{
	Intern sousFifre = Intern();
	sousFifre.makeForm("PresidentialPardon", "Tamer");
	sousFifre.makeForm("ShrubberyCreation", "Tamer");
	sousFifre.makeForm("Garbage", "Tamer");

	return 0;
}
