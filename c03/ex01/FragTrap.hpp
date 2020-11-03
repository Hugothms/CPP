/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:53 by hthomas           #+#    #+#             */
/*   Updated: 2020/11/03 09:54:19 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include<iostream>
#include<string>

class FragTrap
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
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

void	vaulthunter_dot_exe(std::string const & target);

#endif