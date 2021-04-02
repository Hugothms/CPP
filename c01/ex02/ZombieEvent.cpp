/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 16:14:37 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 11:47:32 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
}

std::string const	ZombieEvent::getType()
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
	srand(time(NULL));
	std::string	names[8] = {"Isabelle", "Benjamin", "Valentin", "Jessee", "Delger", "Hugo", "Anais", "Amina"};
	std::string	types[5] = { "Nice", "Clumsy", "Beautiful", "Mean", "Sad"};

	Zombie *zz = new Zombie(names[std::rand() % 8], types[std::rand() % 5]);
	return (zz);
}
