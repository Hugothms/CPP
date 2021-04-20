/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:44 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/20 17:10:03 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Bureaucrat.hpp"

const int	Bureaucrat::HIGHESTGRADE = 1;
const int	Bureaucrat::LOWESTGRADE = 150;

Bureaucrat::Bureaucrat():
name(""), grade(LOWESTGRADE)
{}

Bureaucrat::Bureaucrat(std::string name, int grade):
name(""), grade(checkGrade(grade))
{}

Bureaucrat::~Bureaucrat()
{}

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

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat: GradeTooHighExeption";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat: GradeTooLowExeption";
}

std::ostream	&operator<<(std::ostream& o, Bureaucrat const& self)
{
	o << self.getName() << ", bureaucrat grade " << self.getGrade();
	return o;
}
