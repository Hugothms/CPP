/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 13:39:07 by hthomas           #+#    #+#             */
/*   Updated: 2020/11/01 19:25:08 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void				Pony::SetPony(std::string name, std::string color, int age)
{
	this->name = name;
	this->color = color;
	this->age = age;
}

Pony::Pony(std::string name, std::string color, int age)
{
	SetPony(name, color, age);
}

std::string const	Pony::getName(void)
{
	return (this->name);
}

std::string const	Pony::getColor(void)
{
	return (this->color);
}

int const			Pony::getAge(void)
{
	return (this->age);
}

void const			Pony::jump(void)
{
	std::cout << this->getName() << " just jumped !" << std::endl;
}