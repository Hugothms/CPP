/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:13:29 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/25 23:02:51 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

std::ostream	&operator<<(std::ostream& o, const Peon& i)
{
	o << "I am " << i.getName() << " and I like otters!" << std::endl;
	return o;
}

void	Peon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}