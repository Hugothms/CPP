/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 16:01:36 by hthomas           #+#    #+#             */
/*   Updated: 2021/03/30 19:27:09 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

Zombie*				Zombie::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name, this->type);
	return (zombie);
}

void const			Zombie::announce()
{
	std::cout << '<' << getName() << '(' << getType() << ")> Braiiiiiiinnnssss..." << std::endl;
}

std::string const	Zombie::getName()
{
	return (this->name);
}

std::string const	Zombie::getType()
{
	return (this->type);
}
