/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:20:21 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/04 09:52:15 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"PlasmaRifle.hpp"
# include"PowerFist.hpp"
# include"SuperMutant.hpp"
# include"RadScorpion.hpp"
# include"Character.hpp"

int	main()
{
	Character *Hero = new Character("Hero");
	std::cout << *Hero;
	Enemy *b = new RadScorpion();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();

	Hero->equip(pr);
	std::cout << *Hero;
	Hero->equip(pf);
	std::cout << *Hero;

	Hero->attack(b);
	std::cout << *Hero;
	Hero->equip(pr);
	std::cout << *Hero;
	Hero->attack(b);
	std::cout << *Hero;
	Hero->attack(b);
	std::cout << *Hero;

	std::cout << std::endl;
	std::cout << std::endl;

	Enemy *a = new SuperMutant();
	Hero->attack(a);
	std::cout << *Hero;
	Hero->attack(a);
	std::cout << *Hero;
	Hero->attack(a);
	std::cout << *Hero;
	Hero->attack(a);
	std::cout << *Hero;
	Hero->attack(a);
	std::cout << *Hero;

	Hero->recoverAP();
	std::cout << *Hero;
	Hero->attack(a);
	std::cout << *Hero;

	return (0);
}
