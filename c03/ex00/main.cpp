/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:49 by hthomas           #+#    #+#             */
/*   Updated: 2020/11/03 10:04:55 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "FragTrap.hpp"

int main()
{
	srand(time(NULL));

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
	return 0;
}