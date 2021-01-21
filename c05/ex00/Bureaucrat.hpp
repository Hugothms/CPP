/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:47 by hthomas           #+#    #+#             */
/*   Updated: 2021/01/21 20:04:56 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include<iostream>
#include <exception>



class Bureaucrat
{
private:
	std::string	name;
	int			grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	std::string	getName();
	int 		getGrade();
	void 		incrementGrade();
	void 		decrementGrade();
	int 		checkGrade(int);
	
	class GradeTooHighException: public std::exception
	{
	public:
		GradeTooHighException(/* args */);
		~GradeTooHighException();
		const char* what()
		{
			return ("Grade too high");
		}
	};

	class GradeTooLowException: public std::exception
	{
	public:
		GradeTooLowException(/* args */);
		~GradeTooLowException();
		const char* what()
		{
			return ("Grade too low");
		}
	};
};

std::ostream	&operator<<(std::ostream &o, Sorcerer const &i);

#endif
