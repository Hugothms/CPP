/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:47 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/14 18:03:43 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include<iostream>
# include<exception>
# include"Form.hpp"

class Form;
class Bureaucrat
{
private:
	std::string	name;
	int			grade;
public:
	static const int HIGHESTGRADE;
	static const int LOWESTGRADE;
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	std::string	getName() const;
	int 		getGrade() const;
	void 		incrementGrade();
	void 		decrementGrade();
	int 		checkGrade(int);
	void		signForm(Form& );
	void		executeForm(Form const&  form);
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

std::ostream	&operator<<(std::ostream& o, Bureaucrat const& b);

#endif
