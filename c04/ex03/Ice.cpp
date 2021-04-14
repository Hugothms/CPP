/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:14:13 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/14 17:59:26 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Ice.hpp"

// Constructors & Destructors
Ice::Ice(): AMateria("ice")
{
}

Ice::~Ice()
{
}

// Copy constructor
Ice::Ice(const Ice& copy): AMateria("ice")
{
	this->xp = copy.xp;
}

// Operation overload =
Ice& Ice::operator=(const Ice& copy)
{
	this->xp = copy.getXP();
	return (*this);
}

// Functions
Ice*	Ice::clone() const
{
	Ice *clone = new Ice(*this);
	return (clone);}

void	Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}