/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:47 by hthomas           #+#    #+#             */
/*   Updated: 2021/06/08 16:36:07 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include<iostream>
# include<string>
# include"Form.hpp"
# include"PresidentialPardonForm.hpp"
# include"RobotomyRequestForm.hpp"
# include"ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	~Intern();
	Form*	makeForm(const std::string& name, const std::string& target) const;
};

#endif
