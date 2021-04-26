/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:44 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/26 11:17:33 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Form.hpp"

const int	Form::HIGHESTGRADE = 1;
const int	Form::LOWESTGRADE = 150;

Form::Form():
name(""), status(false), gradeSign(1), gradeExecute(1)
{}

Form::Form(const std::string& name, const int gradeSign, const int gradeExe):
name(name), status(false), gradeSign(checkGrade(gradeSign)),
gradeExecute(checkGrade(gradeExe))
{}

Form::Form(const std::string& name, const int gradeSign, const int gradeExe, const std::string& target):
name(name), status(false), gradeSign(checkGrade(gradeSign)),
gradeExecute(checkGrade(gradeExe)), target(target)
{}

Form::~Form()
{}

Form::Form(const Form& other): gradeSign(other.getGradeSign()), gradeExecute(other.getGradeExecute())
{
	this->operator=(other);
}

Form& Form::operator=(const Form& other)
{
	this->status = other.getStatus();
	return (*this);
}

std::string	Form::getName() const
{
	return this->name;
}

std::string	Form::getTarget() const
{
	return this->target;
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
	return (grade);
}

void		Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	this->status = true;
}

void		Form::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > this->getGradeExecute())
		throw GradeTooLowException();
	if (!this->getStatus())
		throw FormNotSignedException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form: GradeTooHighException";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form: GradeTooLowException";
}

const char* Form::FormNotSignedException::what() const throw()
{
	return "Form: FormNotSignedException";
}

std::ostream	&operator<<(std::ostream& o, const Form& self)
{
	o << self.getName() << ", form status: " << self.getStatus() << ", needed grade to be signed: " << self.getGradeSign() << ", needed grade to be executed: " << self.getGradeExecute();
	return o;
}
