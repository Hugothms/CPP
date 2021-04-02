/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:49 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 09:26:53 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include<iostream>
# include "FragTrap.hpp"

int main()
{
	srand(time(NULL));

	FragTrap bob = FragTrap("Bob");

	bob.takeDamage(50);
	bob.beRepaired(15);
	bob.meleeAttack("Fred");
	bob.rangedAttack("Fred");

	bob.beRepaired(8000);
	bob.takeDamage(12345);

	FragTrap	alice = FragTrap("Alice");

	alice.vaulthunter_dot_exe("Fred");
	alice.vaulthunter_dot_exe("Fred");
	alice.vaulthunter_dot_exe("Fred");
	alice.vaulthunter_dot_exe("Fred");
	alice.vaulthunter_dot_exe("Fred");
	return 0;
}
