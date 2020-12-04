/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:21:31 by hthomas           #+#    #+#             */
/*   Updated: 2020/12/04 14:42:54 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	new AssaultTerminator();
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &old)
{
	new AssaultTerminator();
	std::cout << "* teleports from space * (copied)" << std::endl;
}

AssaultTerminator& AssaultTerminator::operator=(const AssaultTerminator &other)
{
	std::cout << "* teleports from space * (assigned)" << std::endl;
	return (*new AssaultTerminator(other));
}

AssaultTerminator::~AssaultTerminator()
{
	delete(this);
	std::cout << "I’ll be back..." << std::endl;
}

ISpaceMarine* AssaultTerminator::clone() const
{
	return (new AssaultTerminator(*this));
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

