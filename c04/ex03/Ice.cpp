/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:14:13 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/13 17:15:31 by hthomas          ###   ########.fr       */
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
}

// Operation overload =
Ice &Ice::operator=(const Ice& copy)
{
	return (*this);
}

// Functions
Ice*	Ice::clone() const
{
	return (&Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}