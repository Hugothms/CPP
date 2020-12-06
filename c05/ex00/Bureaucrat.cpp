/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:44 by hthomas           #+#    #+#             */
/*   Updated: 2020/12/06 11:40:36 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	this->name = "";
	this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (grade < 1)
		throw GradeTooHighExeption;
	else if (grade > 150)
		throw GradeTooLowExeption;
	this->grade = grade;
	this->name = name;

	try
	{
		
	}
	catch (std::exception & e)
	{
		/* handle exception */
	}
}

Bureaucrat::~Bureaucrat()
{
}

std::string	Bureaucrat::getName()
{
	return this->name;
}

int 		Bureaucrat::getGrade()
{
	return this->grade;
}
