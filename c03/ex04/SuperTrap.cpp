/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:46 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 12:23:51 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
}

SuperTrap::SuperTrap(std::string name)
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

void	SuperTrap::meleeAttack(std::string const &target)
{
	return (FragTrap::rangedAttack(target));
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	return (NinjaTrap::meleeAttack(target));
}
