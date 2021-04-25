/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:44 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/25 23:04:37 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
Form("PresidentialPardonForm", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target):
Form("PresidentialPardonForm", 25, 5, target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

bool	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (this->Form::execute(executor))
	{
		std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
		return true;
	}
	return false;
}
