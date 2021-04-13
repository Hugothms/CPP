/* ************************************************************************** */
/*	                                                                          */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:21:43 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/13 15:31:00 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Character.hpp"

Character::Character()
{
	for (int i = 0; i < this->maxInventorySize; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string name)
{
	for (int i = 0; i < this->maxInventorySize; i++)
		this->inventory[i] = NULL;
	this->name = name;
}

Character::~Character()
{
	for (int i = 0; i < this->maxInventorySize; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

Character::Character(const Character &copy)
{
	for (int i = 0; i < this->maxInventorySize; i++)
	{
		// if (this->inventory[i])
		// {
		// 	delete this->inventory[i];
		// 	this->inventory[i] = NULL;
		// }
		this->inventory[i] = copy.inventory[i]->clone();
	}
	this->name = name;
}

Character &Character::operator=(const Character &other)
{
	for (int i = 0; i < this->maxInventorySize; i++)
	{
		if (this->inventory[i])
		{
			delete this->inventory[i];
			this->inventory[i] = NULL;
		}
		this->inventory[i] = other.inventory[i]->clone();
	}
	this->name = other.name;
}

std::string const	&Character::getName() const
{
	return this->name;
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < this->maxInventorySize; i++)
		if (this->inventory[i] == m)
			return ;
	for (int i = 0; i < this->maxInventorySize; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int i)
{
	if (i >= this->maxInventorySize || !this->inventory[i])
		return ;
	this->inventory[i] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= this->maxInventorySize || !this->inventory[idx])
		return ;
	this->inventory[idx]->use(target);
}
