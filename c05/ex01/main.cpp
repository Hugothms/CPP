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

# include"Form.hpp"
# include"Bureaucrat.hpp"

int main(int argc, char const *argv[])
{
	Bureaucrat bob = Bureaucrat("bob", 24);
	std::cout << bob << std::endl;
	Bureaucrat alice = Bureaucrat("alice", 42);
	std::cout << alice << std::endl;
	Form formidable = Form("formidable", 42, 24);
	std::cout << formidable << std::endl;

	bob.signForm(formidable);
	std::cout << formidable << std::endl;
	alice.signForm(formidable);
	std::cout << formidable << std::endl;
	bob.signForm(formidable);
	return 0;
}
