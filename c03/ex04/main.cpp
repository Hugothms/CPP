/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:49 by hthomas           #+#    #+#             */
/*   Updated: 2021/07/01 15:10:10 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "ScavTrap.hpp"
# include "SuperTrap.hpp"

int main()
{
	srand(time(NULL));

	ClapTrap hugo = ClapTrap("hugo");
	std::cout << std::endl;
	FragTrap alice = FragTrap("alice");
	std::cout << std::endl;
	SuperTrap derek = SuperTrap("derek");
	std::cout << std::endl;

	derek.takeDamage(50);
	derek.beRepaired(15);
	derek.meleeAttack("fred");
	derek.rangedAttack("fred");

	derek.beRepaired(8000);
	derek.takeDamage(12345);

	derek.ninjaShoebox(&alice);
	derek.vaulthunter_dot_exe("fred");
	return 0;
}
