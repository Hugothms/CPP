/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:26:37 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/25 23:03:56 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title):
name(name), title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& other)
{
	Sorcerer::operator=(other);
}

Sorcerer& Sorcerer::operator=(const Sorcerer& other)
{
	this->name = other.getName();
	this->title = other.getTitle();
	return (*this);
}

std::string	Sorcerer::getName(void) const
{
	return (this->name);
}

std::string	Sorcerer::getTitle(void) const
{
	return (this->title);
}

std::ostream	&operator<<(std::ostream& o, const Sorcerer& i)
{
	o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies!" << std::endl;
	return o;
}

void Sorcerer::polymorph(const Victim& victim) const
{
	victim.getPolymorphed();
}
