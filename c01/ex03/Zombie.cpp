/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 16:01:36 by hthomas           #+#    #+#             */
/*   Updated: 2021/03/28 16:41:47 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->name = "null";
	this->type = "nice";
}

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

Zombie* Zombie::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name, this->type);
	return (zombie);
}

void	Zombie::announce() const
{
	std::cout << '<' << getName() << '(' << getType() << ")> Braiiiiiiinnnssss..." << std::endl;
}


std::string Zombie::getName() const
{
	return (this->name);
}

std::string Zombie::getType() const
{
	return (this->type);
}
