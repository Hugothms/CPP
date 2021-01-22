/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:47 by hthomas           #+#    #+#             */
/*   Updated: 2021/01/22 10:20:13 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include<iostream>
#include<exception>
#include"Bureaucrat.hpp"


class Form
{
private:
	const std::string	name;
	bool				isSigned;
	const int 			gradeSign;
	const int 			gradeExecute;
public:
	static const int HIGHESTGRADE;
	static const int LOWESTGRADE;
	Form();
	Form(std::string name, int grade);
	~Form();
	std::string	getName() const;
	int 		getGrade() const;
	void 		incrementGrade();
	void 		decrementGrade();
	int 		checkGrade(int);
	
	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, Form const &b);

#endif
