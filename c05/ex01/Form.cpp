/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:44 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 09:20:52 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Form.hpp"

const int	Form::HIGHESTGRADE = 1;
const int	Form::LOWESTGRADE = 150;

Form::Form(): status(false), name(""), gradeSign(150), gradeExecute(150){}

Form::Form(const std::string& name, const int gradeSign, const int gradeExe):
status(false), name(name), gradeSign(checkGrade(gradeSign)),
gradeExecute(checkGrade(gradeExe)){}

Form::~Form(){}

std::string	Form::getName() const
{
	return this->name;
}

bool 		Form::getStatus() const
{
	return this->status;
}

int 		Form::getGradeSign() const
{
	return this->gradeSign;
}

int 		Form::getGradeExecute() const
{
	return this->gradeExecute;
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

bool		Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() < this->getGradeSign())
		return false;
	this->status = true;
	return true;
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
	o << self.getName() << ", form status: " << self.getStatus() << ", needed grade to be signed: " << self.getGradeSign() << ", needed grade to be executed: " << self.getGradeExecute();
	return o;
}
