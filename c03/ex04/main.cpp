/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:49 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/03 14:52:51 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include<iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"
# include "SuperTrap.hpp"

int main()
{
	srand(time(NULL));

	FragTrap alice = FragTrap("alice");

	alice.takeDamage(50);
	alice.beRepaired(15);
	alice.meleeAttack("fred");
	alice.rangedAttack("fred");

	alice.beRepaired(8000);
	alice.takeDamage(12345);

	alice.vaulthunter_dot_exe("fred");

	/////////////////NINJATRAP
	std::cout << std::endl;
	SuperTrap derek = SuperTrap("derek");

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
