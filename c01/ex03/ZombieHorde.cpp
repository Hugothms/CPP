/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 16:14:37 by hthomas           #+#    #+#             */
/*   Updated: 2021/03/30 19:29:02 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string rand_name()
{
	srand(time(NULL));
	std::string	names[8] = {"Benjamin", "Isabelle", "Valentin", "Jessee", "Delger", "Hugo", "Anais", "Amina"};
	return(names[rand() % 8]);
}

std::string rand_type()
{
	srand(time(NULL));
	std::string	types[5] = { "Nice", "Mean", "Clumsy", "Beautiful" , "Sad"};
	return(types[rand() % 5]);
}

ZombieHorde::ZombieHorde(int n)
{
	this->size = n;
	this->horde = new Zombie[n];
	while(n--)
	{
		this->horde[n + 1] = Zombie(rand_name(), rand_type());
		std::cout << n << std::endl;
	}
	std::cout << "erty" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->horde;
	return ;
}

void	ZombieHorde::announce(void) const
{
	int	i = 0;

	while(i < this->size)
		this->horde[i++].announce();
}
