/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 13:58:50 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 09:20:52 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Zombie.hpp"
# include "ZombieHorde.hpp"

int		main()
{
	Zombie fred = Zombie("Fred", "Funny");
	fred.announce();
	std::cout << "---------" << std::endl;
	srand(time(NULL));
	ZombieHorde zombie_Horde(7);
	zombie_Horde.announce();
	return (0);
}
