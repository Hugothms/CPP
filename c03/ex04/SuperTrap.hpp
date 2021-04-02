/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:53 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 10:31:35 by hthomas          ###   ########.fr       */
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
	public:
		SuperTrap();
		SuperTrap(std::string name);
		~SuperTrap();
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		// void	takeDamage(unsigned int amount);
		// void	beRepaired(unsigned int amount);
		// void	challengeNewcomer(void);
};

#endif
