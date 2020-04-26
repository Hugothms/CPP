/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 13:58:50 by hthomas           #+#    #+#             */
/*   Updated: 2020/04/26 14:45:21 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony myLittlePony = Pony("Marie", "Blonde", 23);
	int	obstacle = 5;
	std::cout << myLittlePony.getName() << std::endl;
	while (obstacle--)
		myLittlePony.jump();
}

void	ponyOnTheHeap()
{
	Pony *hmyLittlePony = new Pony;
	*hmyLittlePony = Pony("Marie", "Blonde", 23);
	int	obstacle = 5;
	std::cout << hmyLittlePony->getName() << std::endl;
	while (obstacle--)
		hmyLittlePony->jump();
	delete hmyLittlePony;
}

int main(int argc, char const *argv[])
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return 0;
}
