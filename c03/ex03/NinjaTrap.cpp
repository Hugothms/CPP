/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:46 by hthomas           #+#    #+#             */
/*   Updated: 2020/11/03 11:44:13 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(): ClapTrap()
{
	std::cout << "Just created an unamed NinjaTrap" << std::endl;
	this->Max_hit_points = 60;
	this->Energy_points = 120;
	this->Max_energy_points = 120;
	this->Level = 1;
	this->Name = "";
	this->Melee_attack_damage = 60;
	this->Ranged_attack_damage = 5;
	this->Armor_damage_reduction = 0;
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
	std::cout << "Just created NinjaTrap: " << name << std::endl;
	this->Max_hit_points = 60;
	this->Energy_points = 120;
	this->Max_energy_points = 120;
	this->Melee_attack_damage = 60;
	this->Ranged_attack_damage = 5;
	this->Armor_damage_reduction = 0;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Time to destruct NinjaTrap: " << this->Name << std::endl;
}

void	NinjaTrap::rangedAttack(const std::string& target)
{
	// this->ClapTrap::rangedAttack(target);
	std::cout << "N1NJ4-TP " << this->Name << " attacks " << target << " at range, causing " << this->Ranged_attack_damage << " points of damage!" << std::endl;
}

void	NinjaTrap::meleeAttack(const std::string& target)
{
	// this->ClapTrap::meleeAttack(target);
	std::cout << "N1NJ4-TP " << this->Name << " attacks " << target << " in melee, causing " << this->Melee_attack_damage << " points of damage!" << std::endl;
}

void	NinjaTrap::takeDamage(unsigned int amount)
{
	amount -= this->Armor_damage_reduction;
	if (amount > this->Energy_points)
		amount = this->Energy_points;
	this->Energy_points -= amount;
	std::cout << "N1NJ4-TP " << this->Name << " takes " << amount << " points of damage!" << std::endl;
}

void	NinjaTrap::beRepaired(unsigned int amount)
{
	if (amount > this->Max_energy_points - this->Energy_points)
		amount = this->Max_energy_points - this->Energy_points;
	this->Energy_points += amount;
	std::cout << "N1NJ4-TP " << this->Name << " gain " << amount << " health points from reparation" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap *target)
{
	std::cout << "N1NJ4-TP " << this->getName() << " just used special technique against ClapTrap " << target->ClapTrap::getName() << std::endl;;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap *target)
{
	std::cout << "N1NJ4-TP " << this->getName() << " just used special technique against NinjaTrap " << target->ClapTrap::getName() << std::endl;;
}

void	NinjaTrap::ninjaShoebox(FragTrap *target)
{
	std::cout << "N1NJ4-TP " << this->getName() << " just used special technique against FragTrap " << target->ClapTrap::getName() << std::endl;;
}

void	NinjaTrap::ninjaShoebox(ScavTrap *target)
{
	std::cout << "N1NJ4-TP " << this->getName() << " just used special technique against ScavTrap " << target->ClapTrap::getName() << std::endl;;
}
