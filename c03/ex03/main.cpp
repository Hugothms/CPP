/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:49 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 09:20:52 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include<iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"

int main()
{
	srand(time(NULL));

	/////////////////FRAGTRAP
	FragTrap bob = FragTrap("bob");

	bob.takeDamage(50);
	bob.beRepaired(15);
	bob.meleeAttack("fred");
	bob.rangedAttack("fred");

	bob.beRepaired(8000);
	bob.takeDamage(12345);

	vaulthunter_dot_exe("bob");
	vaulthunter_dot_exe("bob");
	vaulthunter_dot_exe("bob");
	vaulthunter_dot_exe("bob");

	/////////////////SCAVTRAP
	std::cout << std::endl;
	ScavTrap alice = ScavTrap("alice");

	alice.takeDamage(50);
	alice.beRepaired(15);
	alice.meleeAttack("fred");
	alice.rangedAttack("fred");

	alice.beRepaired(8000);
	alice.takeDamage(12345);

	vaulthunter_dot_exe("alice");
	vaulthunter_dot_exe("alice");
	vaulthunter_dot_exe("alice");
	vaulthunter_dot_exe("alice");

	/////////////////NINJATRAP
	std::cout << std::endl;
	NinjaTrap derek = NinjaTrap("derek");

	derek.takeDamage(50);
	derek.beRepaired(15);
	derek.meleeAttack("fred");
	derek.rangedAttack("fred");

	derek.beRepaired(8000);
	derek.takeDamage(12345);

	derek.ninjaShoebox(&bob);
	derek.ninjaShoebox(&alice);
	derek.ninjaShoebox(&derek);
	ClapTrap charly = ClapTrap("charly");
	derek.ninjaShoebox(&charly);
	return 0;
}
