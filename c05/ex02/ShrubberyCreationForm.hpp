/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:47 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/14 18:03:39 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include<iostream>
# include<fstream>
# include"Form.hpp"

class ShrubberyCreationForm: public Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string& target);
	~ShrubberyCreationForm();
	bool execute(Bureaucrat const&  executor) const;
};

#endif
