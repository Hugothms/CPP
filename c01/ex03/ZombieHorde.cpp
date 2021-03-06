/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 16:14:37 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 15:18:16 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieHorde.hpp"

std::string rand_name()
{
	std::string	names[8] = {"Benjamin", "Isabelle", "Valentin", "Jessee", "Delger", "Hugo", "Anais", "Amina"};
	return(names[std::rand() % names->size()]);
}

std::string rand_type()
{
	std::string	types[5] = { "Nice", "Mean", "Clumsy", "Beautiful" , "Sad"};
	return(types[std::rand() % types->size()]);
}

ZombieHorde::ZombieHorde(int n)
{
	this->size = n;
	this->horde = new Zombie[n];
	n--;
	while(n >= 0)
		this->horde[n--] = Zombie(rand_name(), rand_type());
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
