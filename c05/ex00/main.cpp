/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:49 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/14 17:24:24 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Bureaucrat.hpp"

int main()
{
	Bureaucrat hugo = Bureaucrat("hugo", 42);
	std::cout << hugo << std::endl;

	Bureaucrat boss = Bureaucrat("boss", 3);
	std::cout << boss << std::endl;

	boss.incrementGrade();
	std::cout << boss << std::endl;

	boss.incrementGrade();
	std::cout << boss << std::endl;

	boss.incrementGrade();
	std::cout << boss << std::endl;

	Bureaucrat test = Bureaucrat("test", 1234);
	Bureaucrat test2 = Bureaucrat("test2", 0);
	return 0;
}
