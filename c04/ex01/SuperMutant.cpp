/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:42:36 by hthomas           #+#    #+#             */
/*   Updated: 2020/12/03 16:01:51 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"SuperMutant.hpp"

SuperMutant::SuperMutant():
Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void  SuperMutant::takeDamage(int damage)
{
	this->Enemy::takeDamage(damage - 3);
}
