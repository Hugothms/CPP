/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:47 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/25 23:04:54 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include<iostream>
# include<exception>
# include"Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const std::string	name;
	bool				status;
	const int 			gradeSign;
	const int 			gradeExecute;
	const std::string	target;
public:
	static const int HIGHESTGRADE;
	static const int LOWESTGRADE;
	Form();
	Form(const std::string& name, const int gradeSign, const int GradeExecute);
	Form(const std::string& name, const int gradeSign, const int GradeExecute, const std::string& target);
	~Form();
	Form(const Form& other);
	Form& operator=(const Form& other);
	std::string	getName() const;
	std::string	getTarget() const;
	bool 		getStatus() const;
	int 		getGradeSign() const;
	int 		getGradeExecute() const;
	int 		checkGrade(int);
	bool		beSigned(Bureaucrat& bureaucrat);
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
	virtual bool execute(const Bureaucrat& executor) const;
};

std::ostream	&operator<<(std::ostream& o, const Form& self);

#endif
