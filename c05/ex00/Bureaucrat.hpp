/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:47 by hthomas           #+#    #+#             */
/*   Updated: 2020/12/06 11:40:11 by hthomas          ###   ########.fr       */
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
	
	class GradeTooHighException
	{
	public:
		GradeTooHighException(/* args */);
		~GradeTooHighException();
	};

	class GradeTooLowException
	{
	public:
		GradeTooLowException(/* args */);
		~GradeTooLowException();
	};
};

#endif
