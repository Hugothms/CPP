/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SupplementEnemy.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:33:57 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/18 13:08:42 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SupplementEnemy.hpp"

SupplementEnemy::SupplementEnemy():
Enemy(170, "Supplement Enemy")
{
	std::cout << "I'm a SupplementEnemy!" << std::endl;
}

SupplementEnemy::~SupplementEnemy()
{
	std::cout << "Noooooo..." << std::endl;
}

void  SupplementEnemy::takeDamage(int damage)
{
	this->Enemy::takeDamage(damage);
}
