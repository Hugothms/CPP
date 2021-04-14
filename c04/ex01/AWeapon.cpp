/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 12:07:54 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/14 17:58:17 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"AWeapon.hpp"

AWeapon::AWeapon():
name(""), damage(0), apcost(0)
{}

AWeapon::AWeapon(const AWeapon& weapon):
name(weapon.name), damage(weapon.damage), apcost(weapon.apcost)
{}

AWeapon::AWeapon(std::string const& name, int apcost, int damage):
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
