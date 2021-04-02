/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:49 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 10:21:22 by hthomas          ###   ########.fr       */
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

	ScavTrap alice = ScavTrap("alice");

	alice.takeDamage(50);
	alice.beRepaired(15);
	alice.meleeAttack("fred");
	alice.rangedAttack("fred");

	alice.beRepaired(8000);
	alice.takeDamage(12345);

	alice.challengeNewcomer();

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
	derek.ninjaShoebox(&derek);
	ClapTrap charly = ClapTrap("charly");
	derek.ninjaShoebox(&charly);
	return 0;
}
