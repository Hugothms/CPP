/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:44 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 09:20:52 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Bureaucrat.hpp"

const int	Bureaucrat::HIGHESTGRADE = 1;
const int	Bureaucrat::LOWESTGRADE = 150;

Bureaucrat::Bureaucrat()
{
	this->name = "";
	this->grade = LOWESTGRADE;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	this->grade = checkGrade(grade);
	this->name = name;
}

Bureaucrat::~Bureaucrat()
{
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
	// if (this->grade == HIGHESTGRADE)
	// 	throw GradeTooHighException();
	this->grade = checkGrade(grade - 1);
}

void		Bureaucrat::decrementGrade()
{
	// if (this->grade == LOWESTGRADE)
	// 	throw GradeTooLowException();
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

void		Bureaucrat::signForm(Form &form)
{
	if (form.beSigned(*this))
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	else
	{
		std::cout << this->getName() << " cannot sign " << form.getName() << " because ";
		if (form.getStatus())
			std::cout << "form is already signed";
		if (form.getStatus() && !form.beSigned(*this))
			std::cout << " AND ";
		if (!form.beSigned(*this))
			std::cout << "grade is too low";
		std::cout << std::endl;
	}
}

void		Bureaucrat::executeForm(Form const & form)
{
	if (form.execute(*this))
		std::cout << this->getName() << " executes " << form.getName() << std::endl;
	else
	{
		std::cout << this->getName() << " cannot sign " << form.getName() << " because ";
		if (form.getStatus())
			std::cout << "form is already signed";
		if (form.getStatus() && !form.execute(*this))
			std::cout << " AND ";
		if (!form.execute(*this))
			std::cout << "grade is too low";
		std::cout << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat: GradeTooHighExeption";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat: GradeTooLowExeption";
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &self)
{
	o << self.getName() << ", bureaucrat grade " << self.getGrade();
	return o;
}
