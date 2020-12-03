/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:27:35 by hthomas           #+#    #+#             */
/*   Updated: 2020/11/04 12:05:54 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Victim.hpp"

Victim::Victim(std::string name): name(name)
{
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::getName(void) const
{
	return (this->name);
}

std::ostream	&operator<<(std::ostream &o, Victim const &i)
{
	o << "I am " << i.getName() << " and I like otters!" << std::endl;
	return o;
}

void	Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}