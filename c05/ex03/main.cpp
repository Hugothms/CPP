/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:49 by hthomas           #+#    #+#             */
/*   Updated: 2021/01/22 21:31:16 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"
#include"Bureaucrat.hpp"
#include"Intern.hpp"

int main(int argc, char const *argv[])
{
	Intern sousFifre = Intern();
	sousFifre.makeForm("Presidential Pardon", "Tamer");
	sousFifre.makeForm("Shrubbery Creation", "Tamer");
	sousFifre.makeForm("Garbage", "Tamer");
	
	return 0;
}
