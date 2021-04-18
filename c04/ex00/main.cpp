/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:12:15 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/18 13:10:41 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include<iostream>

# include "Peon.hpp"
# include "Sorcerer.hpp"
# include "Supplement.hpp"
# include "Victim.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");
	Supplement azerty("Azerty");

	std::cout << robert << jim << joe << azerty;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(azerty);

	return 0;
}
