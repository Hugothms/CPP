/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 12:07:54 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/25 23:02:02 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"AWeapon.hpp"

AWeapon::AWeapon():
name(""), damage(0), apcost(0)
{}

AWeapon::AWeapon(const AWeapon& other)
{
	AWeapon::operator=(other);
}

AWeapon::AWeapon(const std::string& name, int apcost, int damage):
name(name), damage(damage), apcost(apcost)
{}

AWeapon::~AWeapon()
{}

AWeapon& AWeapon::operator=(const AWeapon& weapon)
{
	this->name = weapon.getName();
	this->damage = weapon.getDamage();
	this->apcost = weapon.getAPCost();
	return (*this);
}

std::string	AWeapon::getName() const
{
	return (this->name);
}

int			AWeapon::getAPCost() const
{
	return (this->apcost);
}

int			AWeapon::getDamage() const
{
	return (this->damage);
}
