/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 13:39:07 by hthomas           #+#    #+#             */
/*   Updated: 2020/04/24 14:21:12 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, int age)
{
	SetPony(name, color, age);
}

void	Pony::SetPony(std::string name, std::string color, int age)
{
	this->name = name;
	this->color = color;
	this->age = age;
}

// std::string	Pony::getName()
// {
	// return (this->name);
// }

// std::string	Pony::getColor()
// {
	// return (this->color);
// }

// int			Pony::getAge()
// {
	// return (this->age);
// }
