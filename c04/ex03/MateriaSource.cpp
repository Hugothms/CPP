/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:21:43 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/20 14:10:40 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"MateriaSource.hpp"

/*
** Constructors & Destructors
*/
MateriaSource::MateriaSource()
{
	for (int i = 0; i < this->maxMemorySize; i++)
		this->memory[i] = NULL;
}

MateriaSource::~MateriaSource()
{
}

/*
** Copy constructor
*/
MateriaSource::MateriaSource(const MateriaSource& other)
{
	MateriaSource::operator=(other);
}

/*
** Operation overload =
*/
MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	this->name = other.name;
	for (int i = 0; i < this->maxMemorySize; i++)
		this->memory[i] = other.memory[i];
	return (*this);
}

/*
** Functions
*/

void		MateriaSource::learnMateria(AMateria *mat)
{
	for (int i = 0; i < this->maxMemorySize; i++)
		if (!this->memory[i])
		{
			this->memory[i] = mat;
			return ;
		}

}

AMateria*	MateriaSource::createMateria(std::string const&  type)
{
	for (int i = 0; i < this->maxMemorySize; i++)
	{
		if (this->memory[i] && this->memory[i]->getType() == type)
			return (this->memory[i]->clone());
	}
	return (0);
}
