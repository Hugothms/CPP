/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:20:21 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/18 13:18:01 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Character.hpp"
# include"PlasmaRifle.hpp"
# include"PowerFist.hpp"
# include"RadScorpion.hpp"
# include"SuperMutant.hpp"
# include"SupplementEnemy.hpp"
# include"SupplementWeapon.hpp"

int	main()
{
	Character *Hero = new Character("Hero");
	std::cout << *Hero;
	Enemy *radscorpion = new RadScorpion();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();

	Hero->equip(pr);
	std::cout << *Hero;
	Hero->equip(pf);
	std::cout << *Hero;


	std::cout << std::endl;
	std::cout << std::endl;


	while (Hero->getAP() > Hero->getWeapon()->getAPCost())
	{
		Hero->attack(radscorpion);
		std::cout << *Hero;
	}
	Hero->equip(pr);
	std::cout << *Hero;
	while (Hero->getAP() > Hero->getWeapon()->getAPCost())
	{
		Hero->attack(radscorpion);
		std::cout << *Hero;
	}


	std::cout << std::endl;
	std::cout << std::endl;


	Enemy *supermutant = new SuperMutant();
	while (Hero->getAP() > Hero->getWeapon()->getAPCost())
	{
		Hero->attack(radscorpion);
		std::cout << *Hero;
	}
	std::cout << *Hero;

	Hero->recoverAP();
	std::cout << *Hero;
	Hero->attack(supermutant);
	std::cout << *Hero;


	std::cout << std::endl;
	std::cout << std::endl;

	Enemy *supplementenemy = new SupplementEnemy();
	AWeapon *sw = new SupplementWeapon();
	Hero->equip(sw);
	Hero->attack(supplementenemy);
	return (0);
}
