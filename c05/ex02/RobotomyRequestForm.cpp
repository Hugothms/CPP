/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:44 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/26 00:23:43 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
Form("RobotomyRequestForm", 72, 45)
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target):
Form("RobotomyRequestForm", 72, 45, target)
{
	srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	this->Form::execute(executor);
	if(std::rand() % 2)
	{
		std::cout << "Crrrrrsh pshhhhhh cric-crac-croc pif-paf-pouf" << std::endl;
		std::cout << this->getTarget() << " has been robotomized successfully !" << std::endl;
	}
	else
		std::cout << this->getTarget() << " robotomy failed" << std::endl;
}
