/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:15:49 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/25 23:02:02 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Enemy.hpp"

Enemy::Enemy():
hp(0), type("")
{}

Enemy::Enemy(int hp, const std::string& type):
hp(hp), type(type)
{}

Enemy::~Enemy()
{}

Enemy::Enemy(const Enemy& other)
{
	Enemy::operator=(other);
}

Enemy& Enemy::operator=(const Enemy& other)
{
	this->hp = other.getHP();
	this->type = other.getType();
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
	if (this->hp < 0)
		this->hp = 0;
}