/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:53 by hthomas           #+#    #+#             */
/*   Updated: 2021/06/28 15:21:15 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include<iostream>
# include<string>
# include<cstdlib>

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
		std::string		getName(void);
		virtual void	rangedAttack(const std::string& target);
		virtual void	meleeAttack(const std::string& target);
		virtual void	takeDamage(unsigned int amount);
		virtual void	beRepaired(unsigned int amount);
};

#endif
