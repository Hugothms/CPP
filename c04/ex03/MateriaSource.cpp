/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:21:43 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/13 16:21:28 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"MateriaSource.hpp"

/*
** Constructors & Destructors
*/
MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource(/* args */)
{
}

MateriaSource::~MateriaSource()
{
}

/*
** Copy constructor
*/
MateriaSource::MateriaSource(const MateriaSource& copy)
{
}

/*
** Operation overload =
*/
MateriaSource &MateriaSource::operator=(const MateriaSource& copy)
{
	return (*this);
}

/*
** Functions
*/

void		MateriaSource::learnMateria(AMateria*)
{

}

AMateria*	MateriaSource::createMateria(std::string const & type)
{

}

