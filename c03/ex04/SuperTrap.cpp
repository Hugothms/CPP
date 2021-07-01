/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:46 by hthomas           #+#    #+#             */
/*   Updated: 2021/07/01 14:58:21 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{}

SuperTrap::SuperTrap(std::string name): ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	std::cout << "Just created SuperTrap: " << name << std::endl;
	this->NinjaTrap::Hit_points = ClapTrap::Hit_points;
	this->NinjaTrap::Max_hit_points = NinjaTrap::Max_hit_points;
	this->NinjaTrap::Energy_points = NinjaTrap::Energy_points;
	this->NinjaTrap::Max_energy_points = NinjaTrap::Max_energy_points;
	this->NinjaTrap::Melee_attack_damage = NinjaTrap::Melee_attack_damage;
	this->NinjaTrap::Ranged_attack_damage = FragTrap::Ranged_attack_damage;
	this->NinjaTrap::Armor_damage_reduction = FragTrap::Armor_damage_reduction;
}

SuperTrap::~SuperTrap()
{
	std::cout << "Time to destruct SuperTrap: " << this->NinjaTrap::Name << std::endl;
}

void	SuperTrap::rangedAttack(const std::string& target)
{
	this->FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(const std::string& target)
{
	this->NinjaTrap::meleeAttack(target);
}

void	SuperTrap::takeDamage(unsigned int amount)
{
	amount -= this->Armor_damage_reduction;
	if (amount < 0)
		amount = 0;
	else if (amount > this->Max_hit_points)
		amount = this->Max_hit_points;
	if (amount > this->Energy_points)
		amount = this->Energy_points;
	this->Energy_points -= amount;
	std::cout << "SVP3R-TP " << this->Name << " takes " << amount << " points of damage!" << std::endl;
}

void	SuperTrap::beRepaired(unsigned int amount)
{
	if (amount > this->Max_energy_points - this->Energy_points)
		amount = this->Max_energy_points - this->Energy_points;
	this->Energy_points += amount;
	std::cout << "SVP3R-TP " << this->Name << " gain " << amount << " health points from reparation" << std::endl;
}
