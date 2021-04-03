/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:46 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/03 16:10:56 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Just created an unamed ScavTrap" << std::endl;
	this->Name = "";
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 50;
	this->Max_energy_points = 50;
	this->Level = 1;
	this->Melee_attack_damage = 20;
	this->Ranged_attack_damage = 15;
	this->Armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Just created ScavTrap: " << name << std::endl;
	this->Name = name;
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 50;
	this->Max_energy_points = 50;
	this->Level = 1;
	this->Melee_attack_damage = 20;
	this->Ranged_attack_damage = 15;
	this->Armor_damage_reduction = 3;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Time to destruct ScavTrap: " << this->Name << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "Sc4v-TP " << this->Name << " attacks " << target << " at range, causing " << this->Ranged_attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "Sc4v-TP " << this->Name << " attacks " << target << " in melee, causing " << this->Melee_attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	amount -= this->Armor_damage_reduction;
	if (amount < 0)
		amount = 0;
	else if (amount > this->Max_hit_points)
		amount = this->Max_hit_points;
	if (amount > this->Energy_points)
		amount = this->Energy_points;
	this->Energy_points -= amount;
	std::cout << "Sc4v-TP " << this->Name << " takes " << amount << " points of damage!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (amount > this->Max_energy_points - this->Energy_points)
		amount = this->Max_energy_points - this->Energy_points;
	this->Energy_points += amount;
	std::cout << "Sc4v-TP " << this->Name << " gain " << amount << " health points from reparation" << std::endl;
}

void	ScavTrap::challengeNewcomer(void)
{
	std::string challenges[] = {"Jump at 15 feets", "Get graduated", "Create an new weapon", "Find love", "Run a marathon"};
	std::string challenge = challenges[std::rand() % 5];
	std::cout << "ScavTrap " << this->Name << " choose a new challenge: " << challenge << std::endl;
}
