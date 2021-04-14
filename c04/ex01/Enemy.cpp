/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:15:49 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/14 17:58:36 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Enemy.hpp"

Enemy::Enemy():
hp(0), type("")
{}

Enemy::Enemy(const Enemy& enemy):
hp(enemy.hp), type(enemy.type)
{}

Enemy::Enemy(int hp, std::string const& type):
hp(hp), type(type)
{}

Enemy::~Enemy()
{}

Enemy& Enemy::operator=(const Enemy&e)
{
	this->hp = e.getHP();
	this->type = e.getType();
	return (*this);
}

std::string  Enemy::getType() const
{
	return (this->type);
}

int  Enemy::getHP() const
{
	return (this->hp);
}

void  Enemy::takeDamage(int damage)
{
	if (damage > 0)
		this->hp -= damage;
}