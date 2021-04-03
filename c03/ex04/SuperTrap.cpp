/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:46 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/03 16:17:57 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SuperTrap.hpp"

SuperTrap::SuperTrap(){}

SuperTrap::SuperTrap(std::string name): ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	std::cout << "Just created SuperTrap: " << name << std::endl;
	this->NinjaTrap::Name = name;
	this->NinjaTrap::Hit_points = 100;
	this->NinjaTrap::Max_hit_points = 100;
	this->NinjaTrap::Energy_points = 120;
	this->NinjaTrap::Max_energy_points = 120;
	this->NinjaTrap::Melee_attack_damage = 60;
	this->NinjaTrap::Ranged_attack_damage = 20;
	this->NinjaTrap::Armor_damage_reduction = 5;
}

SuperTrap::~SuperTrap()
{
	std::cout << "Time to destruct SuperTrap: " << this->NinjaTrap::Name << std::endl;
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	this->FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
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
