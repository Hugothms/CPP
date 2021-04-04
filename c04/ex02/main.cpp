/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:21:38 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/04 10:15:00 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Squad.hpp"
# include"TacticalMarine.hpp"
# include"AssaultTerminator.hpp"

int main()
{
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AssaultTerminator;
	ISquad *vlc = new Squad;
	vlc->push(bob);
	vlc->push(bob->clone());
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		std::cout << std::endl;
		ISpaceMarine *cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << std::endl;
	delete vlc;
	return 0;
}
