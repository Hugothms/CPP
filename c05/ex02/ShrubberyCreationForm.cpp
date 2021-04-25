/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:44 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/25 15:53:27 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
Form("ShrubberyCreationForm", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target):
Form("ShrubberyCreationForm", 145, 137, target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

bool	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	const std::string tree = "        # #### ####\n      ### \\/#|### |/####\n     ##\\/#/ \\||/##/_/##/_#\n   ###  \\/###|/ \\/ # ###\n ##_\\_#\\_\\## | #/###_/_####\n## #### # \\ #| /  #### ##/##\n __#_--###`  |{,###---###-~\n           \\ }{\n            }}{\n            }}{\n            {{}\n      , -=-~{ .-^- _\n            `}\n             {\n";
	if (this->Form::execute(executor))
	{
		std::ofstream newFile;
		const std::string filename = this->getTarget()+"_shrubbery";
		newFile.open(filename.c_str());
		newFile << tree;
		std::cout << this->getTarget() << "_shrubbery created" << std::endl;
		return true;
	}
	return false;
}
