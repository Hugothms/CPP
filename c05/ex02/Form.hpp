/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:47 by hthomas           #+#    #+#             */
/*   Updated: 2021/01/22 13:58:21 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include<iostream>
#include<exception>
#include"Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const std::string	name;
	const std::string	target;
	bool				status;
	const int 			gradeSign;
	const int 			gradeExecute;
public:
	static const int HIGHESTGRADE;
	static const int LOWESTGRADE;
	Form();
	Form(const std::string &name, const int gradeSign, const int GradeExecute);
	Form(const std::string &name, const int gradeSign, const int GradeExecute, const std::string &target);
	~Form();
	std::string	getName() const;
	std::string	getTarget() const;
	bool 		getStatus() const;
	int 		getGradeSign() const;
	int 		getGradeExecute() const;
	int 		checkGrade(int);
	bool		beSigned(Bureaucrat &);
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
	virtual bool execute(Bureaucrat const & executor) const;
};

std::ostream	&operator<<(std::ostream &o, Form const &b);

#endif
