/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:49:12 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/18 12:48:38 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Character.hpp"

Character::Character(std::string const&  name):
name(name), ap(40), weapon(NULL)
{}

Character::~Character()
{}

Character::Character(const Character& other)
{
	this->name = other.getName();
	this->ap = other.getAP();
	this->weapon = other.getWeapon();
}

Character& Character::operator=(const Character& other)
{
	this->name = other.getName();
	this->ap = other.getAP();
	this->weapon = other.getWeapon();
	return (*this);
}

void Character::recoverAP()
{
	if (this->ap < 30)
		this->ap += 10;
	else this->ap = 40;
	std::cout << this->getName() << " get some rest..." << std::endl;
}

void Character::equip(AWeapon* weapon)
{
	this->weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
	if (this->weapon->getAPCost() <= this->ap)
	{
		this->ap -= this->weapon->getAPCost();
		std::cout << this->name << " attacks "<< enemy->getType() << " with a " << this->weapon->getName() << std::endl;
		this->weapon->attack();
		enemy->takeDamage(this->weapon->getDamage());
		if(enemy->getHP() <= 0)
			enemy->~Enemy();
	}
	else
	{
		std::cout << this->name << " doesn't have enough AP to attack with " << this->weapon->getName() << std::endl;
	}
}

std::string  Character::getName() const
{
	return (this->name);
}

int  Character::getAP() const
{
	return (this->ap);
}

AWeapon* Character::getWeapon() const
{
	return (this->weapon);
}

std::ostream	&operator<<(std::ostream& o, Character const& c)
{
	o << c.getName() << " has "<< c.getAP() <<" AP";
	if (c.getWeapon())
		o << " and wields a " << c.getWeapon()->getName() << std::endl;
	else
		o << " and is unarmed" << std::endl;
	return (o);
}
