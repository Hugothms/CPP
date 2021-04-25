/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:44 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/25 23:38:44 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Bureaucrat.hpp"

const int	Bureaucrat::HIGHESTGRADE = 1;
const int	Bureaucrat::LOWESTGRADE = 150;

Bureaucrat::Bureaucrat():
name(""), grade(LOWESTGRADE)
{}

Bureaucrat::Bureaucrat(std::string name, int grade):
name(name), grade(checkGrade(grade))
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	this->operator=(other);
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	this->grade = other.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return this->name;
}

int 		Bureaucrat::getGrade() const
{
	return this->grade;
}

void		Bureaucrat::incrementGrade()
{
	this->grade = checkGrade(grade - 1);
}

void		Bureaucrat::decrementGrade()
{
	this->grade = checkGrade(grade + 1);
}

int			Bureaucrat::checkGrade(int grade)
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

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat: GradeTooHighException";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat: GradeTooLowException";
}

std::ostream	&operator<<(std::ostream& o, const Bureaucrat& self)
{
	o << self.getName() << ", bureaucrat grade " << self.getGrade();
	return o;
}
