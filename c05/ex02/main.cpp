/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:49 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 09:20:52 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"ShrubberyCreationForm.hpp"
# include"RobotomyRequestForm.hpp"
# include"PresidentialPardonForm.hpp"
# include"Bureaucrat.hpp"

int main(int argc, char const *argv[])
{
	srand(time(NULL));

	Bureaucrat charlie = Bureaucrat("Charlie", 1);
	std::cout << charlie << std::endl;

	ShrubberyCreationForm scf = ShrubberyCreationForm("Prisonner");
	std::cout << scf << std::endl;
	charlie.signForm(scf);
	charlie.executeForm(scf);

	RobotomyRequestForm rrf = RobotomyRequestForm("Prisonner");
	std::cout << rrf << std::endl;
	charlie.signForm(rrf);
	charlie.executeForm(rrf);

	PresidentialPardonForm ppf = PresidentialPardonForm("Prisonner");
	std::cout << ppf << std::endl;
	charlie.signForm(ppf);
	charlie.executeForm(ppf);
	return 0;
}
