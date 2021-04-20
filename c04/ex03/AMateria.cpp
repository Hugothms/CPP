/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:21:31 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/20 22:55:23 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"AMateria.hpp"

AMateria::AMateria()
{
	this->xp = 0;
	this->type = "";
}

AMateria::AMateria(std::string const& type)
{
	this->xp = 0;
	this->type = type;
}

AMateria::~AMateria()
{}

AMateria::AMateria(const AMateria& other)
{
	AMateria::operator=(other);
}

AMateria& AMateria::operator=(const AMateria& other)
{
	this->xp = other.getXP();
	return (*this);
}

std::string const	&AMateria::getType() const //Returns the materia type
{
	return type;
}

unsigned int		AMateria::getXP() const //Returns the Materia's XP
{
	return xp;
}

void				AMateria::use(ICharacter& target)
{
	(void) target;
	xp += 10;
}
