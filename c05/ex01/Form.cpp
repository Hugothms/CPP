/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:44 by hthomas           #+#    #+#             */
/*   Updated: 2021/01/22 10:12:23 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"

const int	Form::HIGHESTGRADE = 1;
const int	Form::LOWESTGRADE = 150;

Form::Form()
{
	this->name = "";
	this->grade = LOWESTGRADE;
}

Form::Form(std::string name, int grade)
{
	this->grade = checkGrade(grade);
	this->name = name;
}

Form::~Form()
{
}

std::string	Form::getName() const
{
	return this->name;
}

int 		Form::getGrade() const
{
	return this->grade;
}

void		Form::incrementGrade()
{
	// if (this->grade == HIGHESTGRADE)
	// 	throw GradeTooHighException();
	this->grade = checkGrade(grade - 1);
}

void		Form::decrementGrade()
{
	// if (this->grade == LOWESTGRADE)
	// 	throw GradeTooLowException();
	this->grade = checkGrade(grade + 1);
}

int			Form::checkGrade(int grade)
{
	try
	{
		if (grade < HIGHESTGRADE)
		{
			grade = 1;
			throw GradeTooHighException();
		}
		else if (grade > LOWESTGRADE)
		{
			grade = 150;
			throw GradeTooLowException();
		}
	}
	catch(std::exception & e)
	{
	    std::cerr << e.what() << std::endl;
	}
	return (grade);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form: GradeTooHighExeption";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form: GradeTooLowExeption";
}

std::ostream	&operator<<(std::ostream &o, Form const &self)
{
	o << self.getName() << ", Form grade " << self.getGrade();
	return o;
}
