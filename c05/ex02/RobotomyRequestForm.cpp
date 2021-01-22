/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:44 by hthomas           #+#    #+#             */
/*   Updated: 2021/01/22 21:23:27 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): 
Form("RobotomyRequestForm", 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): 
Form("RobotomyRequestForm", 72, 45, target){}

RobotomyRequestForm::~RobotomyRequestForm(){}

bool	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->Form::execute(executor))
	{
		srand(time(NULL));
		if(rand() % 2)
		{
			std::cout << "Crrrrrsh pshhhhhh cric-crac-croc pif-paf-pouf" << std::endl;
			std::cout << this->getTarget() << " has been robotomized successfully !" << std::endl;
		}
		else
			std::cout << this->getTarget() << " robotomy failed" << std::endl;
		return true;
	}
	return false;
}
