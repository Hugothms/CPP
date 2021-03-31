/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 13:58:50 by hthomas           #+#    #+#             */
/*   Updated: 2021/03/31 20:52:43 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main()
{
	Zombie fred = Zombie("Fred", "Funny");
	fred.announce();

	ZombieEvent zombie_Event;
	Zombie *random_Zombie = zombie_Event.randomChump();
	(*random_Zombie).announce();
	delete(random_Zombie);
	return (0);
}
