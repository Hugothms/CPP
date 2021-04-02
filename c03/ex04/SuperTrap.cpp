/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:46 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 10:19:22 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SuperTrap.hpp"

SuperTrap::SuperTrap(): ClapTrap()
{
	std::cout << "Just created an unamed SuperTrap" << std::endl;
	this->Energy_points = 50;
	this->Max_energy_points = 50;
	this->Melee_attack_damage = 20;
	this->Ranged_attack_damage = 15;
	this->Armor_damage_reduction = 3;
}

SuperTrap::SuperTrap(std::string name): ClapTrap(name)
{
	std::cout << "Just created SuperTrap: " << name << std::endl;
	this->Energy_points = 50;
	this->Max_energy_points = 50;
	this->Melee_attack_damage = 20;
	this->Ranged_attack_damage = 15;
	this->Armor_damage_reduction = 3;
}

SuperTrap::~SuperTrap()
{
	std::cout << "Time to destruct SuperTrap: " << this->Name << std::endl;
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	// this->ClapTrap::rangedAttack(target);
	std::cout << "SVPR-TP " << this->Name << " attacks " << target << " at range, causing " << this->Ranged_attack_damage << " points of damage!" << std::endl;
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	// this->ClapTrap::meleeAttack(target);
	std::cout << "SVPR-TP " << this->Name << " attacks " << target << " in melee, causing " << this->Melee_attack_damage << " points of damage!" << std::endl;
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
	std::cout << "SVPR-TP " << this->Name << " takes " << amount << " points of damage!" << std::endl;
}

void	SuperTrap::beRepaired(unsigned int amount)
{
	if (amount > this->Max_energy_points - this->Energy_points)
		amount = this->Max_energy_points - this->Energy_points;
	this->Energy_points += amount;
	std::cout << "SVPR-TP " << this->Name << " gain " << amount << " health points from reparation" << std::endl;
}

void	SuperTrap::challengeNewcomer(void)
{
	if (this->Energy_points < 25)
	{
		std::cout << "Out of energy" << std::endl;
		return ;
	}
	this->Energy_points -= 25;
	std::string challenges[] = {"Jump at 15 feets", "Get graduated", "Create an new weapon", "Find love", "Run a marathon"};
	std::string challenge = challenges[rand() % 5];
	std::cout << "SuperTrap choose " << challenge << " challenge !" << std::endl;
}