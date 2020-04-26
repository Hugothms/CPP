/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 16:01:36 by hthomas           #+#    #+#             */
/*   Updated: 2020/04/26 14:19:37 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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

// int main(int argc, char const *argv[])
// {
// 	Zombie hugo = Zombie("hug");
// 	hugo.announce();
// 	return 0;
// }