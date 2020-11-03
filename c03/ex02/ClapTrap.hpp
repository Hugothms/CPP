/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:53 by hthomas           #+#    #+#             */
/*   Updated: 2020/11/03 11:16:06 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include<iostream>
#include<string>

class ClapTrap
{
	protected:
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
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		virtual void rangedAttack(std::string const & target);
		virtual void meleeAttack(std::string const & target);
		virtual void takeDamage(unsigned int amount);
		virtual void beRepaired(unsigned int amount);
};

#endif