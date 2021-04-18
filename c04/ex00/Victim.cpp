/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:27:35 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/18 13:02:19 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Victim.hpp"

Victim::Victim(std::string name): name(name)
{
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim& other):
name(other.getName())
{}

Victim& Victim::operator=(const Victim& other)
{
	this->name = other.getName();
	return (*this);
}

std::string Victim::getName(void) const
{
	return (this->name);
}

std::ostream	&operator<<(std::ostream& o, Victim const& i)
{
	o << "I am " << i.getName() << " and I like otters!" << std::endl;
	return o;
}

void	Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}
