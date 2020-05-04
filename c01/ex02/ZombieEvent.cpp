/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugothms <hugothms@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 16:14:37 by hthomas           #+#    #+#             */
/*   Updated: 2020/05/03 23:00:49 by hugothms         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
}

std::string ZombieEvent::getType()
{
	return (this->type);
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name, this->getType());
	return (zombie);
}

Zombie* ZombieEvent::randomChump()
{
	const char *colour[4] = { "Blue", "Red", "Orange", "Yellow" }; ++++++
}