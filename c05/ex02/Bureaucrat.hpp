/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:47 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/25 23:34:14 by hthomas          ###   ########.fr       */
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
	const std::string	name;
	int					grade;
	int					checkGrade(int);
public:
	static const int	HIGHESTGRADE;
	static const int	LOWESTGRADE;
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat&			operator=(const Bureaucrat& other);
	std::string			getName() const;
	int 				getGrade() const;
	void 				incrementGrade();
	void 				decrementGrade();
	void				signForm(Form& form);
	void				executeForm(const Form& form);

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

std::ostream	&operator<<(std::ostream& o, const Bureaucrat& self);

#endif
