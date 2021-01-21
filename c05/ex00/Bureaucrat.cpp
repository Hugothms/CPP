/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:44 by hthomas           #+#    #+#             */
/*   Updated: 2021/01/21 20:09:13 by hthomas          ###   ########.fr       */
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
	this->grade = checkGrade(grade);
	this->name = name;
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

void		Bureaucrat::incrementGrade()
{
	if (this->grade == 1)
		throw GradeTooHighException();
	else
		this->grade--;
}

void		Bureaucrat::decrementGrade()
{
	if (this->grade == 150)
		throw GradeTooHighException();
	else
		this->grade++;
}

int			Bureaucrat::checkGrade(int grade)
{
	try
	{
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
	}
	catch(std::exception & e)
	{
	    std::cerr << "exception caught: " << e.what() << '\n';
	}
	return (grade);
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return o;
}
