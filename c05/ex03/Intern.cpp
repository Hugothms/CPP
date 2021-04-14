/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:44 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/14 17:50:40 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

// Form*	Intern::makeForm(const std::string& name, const std::string& target)
// {
// 	PresidentialPardonForm form = PresidentialPardonForm(target);
// 	PresidentialPardonForm form = PresidentialPardonForm(target);
// 	PresidentialPardonForm form = PresidentialPardonForm(target);
// 	std::cout << "Intern creates " << form.getName() << std::endl;
// 	return &form;
// }

Form*	new_shrub(std::string const& target) {
	return new ShrubberyCreationForm(target);
}

Form*	new_pardon(std::string const& target) {
	return new PresidentialPardonForm(target);
}

Form*	new_robo(std::string const& target) {
	return new RobotomyRequestForm(target);
}

typedef Form *(*t_make_funct)(const std::string&);

Form*	Intern::makeForm(const std::string& name, const std::string& formtarget) const {
	const std::string types[3] = {	"PresidentialPardon",
									"RobotomyRequest",
									"ShrubberyCreation"};
	static t_make_funct makeFormFuncts[3] = { new_pardon, new_robo, new_shrub};

	for (int i = 0; i < 3; i++) {
		if (name == types[i]) {
			std::cout << "Intern creates " << name << "." << std::endl;
			return makeFormFuncts[i](formtarget);
		}
	}
	std::cout << "No such form found." << std::endl;
	return NULL;
}