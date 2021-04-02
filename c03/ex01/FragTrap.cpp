/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:46 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 09:20:52 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Just created an unamed FragTrap" << std::endl;
	this->Name = "";
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 100;
	this->Max_energy_points = 100;
	this->Level = 1;
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Just created FragTrap: " << name << std::endl;
	this->Name = name;
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 100;
	this->Max_energy_points = 100;
	this->Level = 1;
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;
}

FragTrap::~FragTrap()
{
	std::cout << "Time to destruct FragTrap: " << this->Name << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at range, causing " << this->Ranged_attack_damage << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " in melee, causing " << this->Melee_attack_damage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	amount -= this->Armor_damage_reduction;
	if (amount < 0)
		amount = 0;
	else if (amount > this->Max_hit_points)
		amount = this->Max_hit_points;
	if (amount > this->Energy_points)
		amount = this->Energy_points;
	this->Energy_points -= amount;
	std::cout << "FR4G-TP " << this->Name << " takes " << amount << " points of damage!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (amount > this->Max_energy_points - this->Energy_points)
		amount = this->Max_energy_points - this->Energy_points;
	this->Energy_points += amount;
	std::cout << "FR4G-TP " << this->Name << " gain " << amount << " health points from reparation" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->Energy_points < 25)
	{
		std::cout << "Out of energy" << std::endl;
		return ;
	}
	this->Energy_points -= 25;
	std::string attacks[] = {"Rainbow Laser", "Love Grenade", "Exploding Samsung", "Big Gun", "Lazy Punch"};
	std::string attack = attacks[rand() % 5];
	int amount = 5;
	std::cout << "VaultHunter attacks " << target << " with special attack " << attack << " causing " << amount << " points of damage !" << std::endl;
}
