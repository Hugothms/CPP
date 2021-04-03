/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:53 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/03 14:50:02 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include<iostream>
# include<string>

# include"FragTrap.hpp"
# include"NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
	protected:
		// using		ClapTrap::Name;
		// unsigned int	Hit_points;
		// unsigned int	Max_hit_points;
		// unsigned int	Energy_points;
		// unsigned int	Max_energy_points;
		// unsigned int	Level;
		// unsigned int	Melee_attack_damage;
		// unsigned int	Ranged_attack_damage;
		// unsigned int	Armor_damage_reduction;
	public:
		SuperTrap();
		SuperTrap(std::string name);
		~SuperTrap();
		using	ClapTrap::getName;
		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		using	FragTrap::vaulthunter_dot_exe;
		using	NinjaTrap::ninjaShoebox;
};

#endif
