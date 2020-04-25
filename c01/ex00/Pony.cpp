/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 13:39:07 by hthomas           #+#    #+#             */
/*   Updated: 2020/04/25 15:30:51 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	Pony::SetPony(std::string name, std::string color, int age)
{
	this->name = name;
	this->color = color;
	this->age = age;
}

Pony::Pony(std::string name, std::string color, int age)
{
	SetPony(name, color, age);
}


std::string	Pony::getName(void)
{
	return (this->name);
}

std::string	Pony::getColor(void)
{
	return (this->color);
}

int			Pony::getAge(void)
{
	return (this->age);
}

void		Pony::jump(void)
{
	std::cout << this->getName() << " just jumped !" << std::endl;
}