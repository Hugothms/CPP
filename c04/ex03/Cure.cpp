/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:14:13 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/14 09:55:41 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Cure.hpp"

// Constructors & Destructors
Cure::Cure(): AMateria("cure")
{
}

Cure::~Cure()
{
}

// Copy constructor
Cure::Cure(const Cure& copy): AMateria("Cure")
{
	this->xp = copy.xp;
}

// Operation overload =
Cure &Cure::operator=(const Cure& copy)
{
	xp = copy.getXP();
	return (*this);
}

// Functions
Cure*	Cure::clone() const
{
	Cure *clone = new Cure(*this);
	return (clone);
}

void	Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}