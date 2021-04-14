/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:53 by hthomas           #+#    #+#             */
/*   Updated: 2020/11/03 11:44:34 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include<iostream>
# include<string>

# include"ClapTrap.hpp"
# include"FragTrap.hpp"
# include"ScavTrap.hpp"

class NinjaTrap: public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		~NinjaTrap();
		void	rangedAttack(std::string const&  target);
		void	meleeAttack(std::string const&  target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	ninjaShoebox(ClapTrap *target);
		void	ninjaShoebox(NinjaTrap *target);
		void	ninjaShoebox(FragTrap *target);
		void	ninjaShoebox(ScavTrap *target);
};

#endif
