/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:53 by hthomas           #+#    #+#             */
/*   Updated: 2020/11/03 10:14:47 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include<iostream>
#include<string>

class ScavTrap
{
	private:
		std::string Name;
		int 		Hit_points;
		int 		Max_hit_points;
		int 		Energy_points;
		int 		Max_energy_points;
		int 		Level;
		int 		Melee_attack_damage;
		int 		Ranged_attack_damage;
		int 		Armor_damage_reduction;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

void	challengeNewcomer(void);

#endif