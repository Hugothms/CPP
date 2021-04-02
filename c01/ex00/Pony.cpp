/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 13:39:07 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 09:20:52 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Pony.hpp"

Pony::Pony(std::string name, std::string color, int age)
{
	this->name = name;
	this->color = color;
	this->age = age;
}

std::string Pony::getName(void)
{
	return (this->name);
}

std::string Pony::getColor(void)
{
	return (this->color);
}

int 		Pony::getAge(void)
{
	return (this->age);
}

void		Pony::jump(void)
{
	std::cout << this->getName() << " just jumped !" << std::endl;
}
