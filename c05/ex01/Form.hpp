/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:47 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/26 00:04:34 by hthomas          ###   ########.fr       */
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
	static const int	HIGHESTGRADE;
	static const int	LOWESTGRADE;
	const std::string	name;
	bool				status;
	const int 			gradeSign;
	const int 			gradeExecute;
	int					checkGrade(int);
public:
	Form();
	Form(const std::string& name, const int gradeSign, const int GradeExecute);
	~Form();
	Form(const Form& other);
	Form&				operator=(const Form& other);
	std::string			getName() const;
	bool 				getStatus() const;
	int 				getGradeSign() const;
	int 				getGradeExecute() const;
	void				beSigned(Bureaucrat& bureaucrat);

	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};
};

std::ostream	&operator<<(std::ostream& o, const Form& self);

#endif
