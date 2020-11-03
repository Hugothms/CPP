/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:26:37 by hthomas           #+#    #+#             */
/*   Updated: 2020/11/03 15:55:04 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
}

Sorcerer::Sorcerer(std::string name, std::string title)
: name(name), title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &i)
{

}