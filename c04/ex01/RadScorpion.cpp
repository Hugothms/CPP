/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:44:50 by hthomas           #+#    #+#             */
/*   Updated: 2020/12/03 15:59:30 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RadScorpion.hpp"

RadScorpion::RadScorpion():
Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

void  RadScorpion::takeDamage(int damage)
{
	this->Enemy::takeDamage(damage);
}
