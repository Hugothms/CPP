/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:53 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 09:20:52 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include<iostream>
# include<string>

class FragTrap
{
	private:
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
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);
};


#endif