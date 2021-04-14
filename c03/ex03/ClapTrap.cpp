/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:46 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/14 17:57:36 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Just created an unamed ClapTrap" << std::endl;
	this->Name = "";
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Level = 1;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Just created ClapTrap: " << name << std::endl;
	this->Name = name;
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Level = 1;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Time to destruct ClapTrap: " << this->Name << std::endl;
}

std::string	ClapTrap::getName(void)
{
	return (this->Name);
}

void	ClapTrap::rangedAttack(std::string const& target)
{
	// this->ClapTrap::rangedAttack(target);
	std::cout << "ClapTrap " << this->Name << " attacks " << target << " at range, causing " << this->Ranged_attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const& target)
{
	// this->ClapTrap::meleeAttack(target);
	std::cout << "ClapTrap " << this->Name << " attacks " << target << " in melee, causing " << this->Melee_attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	amount -= this->Armor_damage_reduction;
	if (amount > this->Max_hit_points)
		amount = this->Max_hit_points;
	if (amount > this->Energy_points)
		amount = this->Energy_points;
	this->Energy_points -= amount;
	std::cout << "ClapTrap " << this->Name << " takes " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (amount > this->Max_energy_points - this->Energy_points)
		amount = this->Max_energy_points - this->Energy_points;
	this->Energy_points += amount;
	std::cout << "ClapTrap " << this->Name << " gain " << amount << " health points from reparation" << std::endl;
}
