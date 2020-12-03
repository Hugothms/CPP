/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:20:21 by hthomas           #+#    #+#             */
/*   Updated: 2020/12/03 16:04:44 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PlasmaRifle.hpp"
#include"PowerFist.hpp"
#include"SuperMutant.hpp"
#include"RadScorpion.hpp"
#include"Character.hpp"

int	main()
{
	Character *me = new Character("me");
	std::cout << *me;
	Enemy *b = new RadScorpion();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	
	std::cout << std::endl;
	std::cout << std::endl;

	Enemy *a = new SuperMutant();
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;

	me->recoverAP();
	std::cout << *me;
	me->attack(a);
	std::cout << *me;

	return (0);
}
