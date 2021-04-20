/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 16:01:36 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/20 16:50:28 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(void):
name(""), type("")
{}

Zombie::Zombie(std::string name, std::string type):
name(name), type(type)
{}

Zombie* Zombie::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name, this->type);
	return (zombie);
}

void	Zombie::announce()
{
	std::cout << '<' << getName() << '(' << getType() << ")> Braiiiiiiinnnssss..." << std::endl;
}

std::string Zombie::getName()
{
	return (this->name);
}

std::string Zombie::getType()
{
	return (this->type);
}
