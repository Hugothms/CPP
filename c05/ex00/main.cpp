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

# include"Bureaucrat.hpp"

int main(int argc, char const *argv[])
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
	return 0;
}
