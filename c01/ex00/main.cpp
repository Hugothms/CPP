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

# include "Pony.hpp"

void	ponyOnTheStack(Pony myLittlePony)
{
	myLittlePony = Pony("Marie", "Blonde", 23);
	int	obstacle = 3;
	std::cout << "New pony on stack: " << myLittlePony.getName() << std::endl;
	while (obstacle--)
		myLittlePony.jump();
}

void	ponyOnTheHeap(Pony *myLittlePony)
{
	myLittlePony = new Pony;
	*myLittlePony = Pony("Claire", "Brune", 23);
	int	obstacle = 3;
	std::cout << "New pony on heap: " << myLittlePony->getName() << std::endl;
	while (obstacle--)
		myLittlePony->jump();
	delete myLittlePony;
}

int main()
{
	Pony pony;
	ponyOnTheStack(pony);
	std::cout << "Pony after deletion:" << pony.getName() << std::endl << std::endl;
	ponyOnTheHeap(&pony);
	std::cout << "Pony after deletion:" << pony.getName() << std::endl << std::endl;
	return (0);
}
