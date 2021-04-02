/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:13:29 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 09:20:52 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

std::string Peon::getName(void) const
{
	return (this->Victim::getName());
}

std::ostream	&operator<<(std::ostream &o, Peon const &i)
{
	o << "I am " << i.getName() << " and I like otters!" << std::endl;
	return o;
}

void	Peon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}