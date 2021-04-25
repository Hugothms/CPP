/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:47 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/25 23:04:37 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include<iostream>
# include<cstdlib>

# include"Form.hpp"

class RobotomyRequestForm: public Form
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string& target);
	~RobotomyRequestForm();
	bool execute(const Bureaucrat& executor) const;
};

#endif
