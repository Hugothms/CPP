/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:53 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 09:37:51 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include<iostream>
# include<string>

class ClapTrap
{
	protected:
		std::string		Name;
		unsigned int	Hit_points;
		unsigned int	Max_hit_points;
		unsigned int	Energy_points;
		unsigned int	Max_energy_points;
		unsigned int	Level;
		unsigned int	Melee_attack_damage;
		unsigned int	Ranged_attack_damage;
		unsigned int	Armor_damage_reduction;
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
