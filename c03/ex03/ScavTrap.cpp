/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:46 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/25 23:02:02 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "Just created an unamed ScavTrap" << std::endl;
	this->Energy_points = 50;
	this->Max_energy_points = 50;
	this->Melee_attack_damage = 20;
	this->Ranged_attack_damage = 15;
	this->Armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "Just created ScavTrap: " << name << std::endl;
	this->Energy_points = 50;
	this->Max_energy_points = 50;
	this->Melee_attack_damage = 20;
	this->Ranged_attack_damage = 15;
	this->Armor_damage_reduction = 3;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Time to destruct ScavTrap: " << this->Name << std::endl;
}

void	ScavTrap::rangedAttack(const std::string& target)
{
	// this->ClapTrap::rangedAttack(target);
	std::cout << "SC4V-TP " << this->Name << " attacks " << target << " at range, causing " << this->Ranged_attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(const std::string& target)
{
	// this->ClapTrap::meleeAttack(target);
	std::cout << "SC4V-TP " << this->Name << " attacks " << target << " in melee, causing " << this->Melee_attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	amount -= this->Armor_damage_reduction;
	if (amount > this->Max_hit_points)
		amount = this->Max_hit_points;
	if (amount > this->Energy_points)
		amount = this->Energy_points;
	this->Energy_points -= amount;
	std::cout << "SC4V-TP " << this->Name << " takes " << amount << " points of damage!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (amount > this->Max_energy_points - this->Energy_points)
		amount = this->Max_energy_points - this->Energy_points;
	this->Energy_points += amount;
	std::cout << "SC4V-TP " << this->Name << " gain " << amount << " health points from reparation" << std::endl;
}

void	ScavTrap::challengeNewcomer(void)
{
	if (this->Energy_points < 25)
	{
		std::cout << "Out of energy" << std::endl;
		return ;
	}
	this->Energy_points -= 25;
	std::string challenges[] = {"Jump at 15 feets", "Get graduated", "Create an new weapon", "Find love", "Run a marathon"};
	std::string challenge = challenges[std::rand() % 5];
	std::cout << "ScavTrap " << this->getName() << " choose " << challenge << " challenge !" << std::endl;
}