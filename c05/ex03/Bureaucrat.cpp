/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:44 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/26 00:17:03 by hthomas          ###   ########.fr       */
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

void		Bureaucrat::signForm(Form& form)
{
	form.beSigned(*this);
	bool grade_high_enough = this->getGrade() < form.getGradeSign();
	if (grade_high_enough)
	{
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	}
	else
	{
		std::cout << this->getName() << " cannot sign " << form.getName() << " because ";
		if (form.getStatus())
			std::cout << "form is already signed";
		if (form.getStatus() && !grade_high_enough)
			std::cout << " AND ";
		if (!grade_high_enough)
			std::cout << "grade is too low";
		std::cout << std::endl;
	}
}

void		Bureaucrat::executeForm(const Form& form)
{
	if (form.execute(*this))
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
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
