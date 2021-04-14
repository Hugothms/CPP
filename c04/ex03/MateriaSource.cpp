/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:21:43 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/14 10:10:57 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"MateriaSource.hpp"

/*
** Constructors & Destructors
*/
MateriaSource::MateriaSource()
{
}

MateriaSource::~MateriaSource()
{
}

/*
** Copy constructor
*/
MateriaSource::MateriaSource(const MateriaSource& copy): name(copy.name)
{
	for (int i = 0; i < this->maxMemorySize; i++)
		this->memory[i] = copy.memory[i];
}

/*
** Operation overload =
*/
MateriaSource &MateriaSource::operator=(const MateriaSource& copy)
{
	this->name = copy.name;
	for (int i = 0; i < this->maxMemorySize; i++)
		this->memory[i] = copy.memory[i];
	return (*this);
}

/*
** Functions
*/

void		MateriaSource::learnMateria(AMateria *mat)
{
	for (int i = 0; i < this->maxMemorySize; i++)
	{
		if (this->memory[i]->getType() != mat->getType())
			this->memory[i] = mat;
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->maxMemorySize; i++)
	{
		if (this->memory[i]->getType() != type)
			return (this->memory[i]->clone());
	}
	return (0);
}

