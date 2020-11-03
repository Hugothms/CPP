/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:46 by hthomas           #+#    #+#             */
/*   Updated: 2020/11/03 14:40:19 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Just created an unamed ClapTrap" << std::endl;
	this->Name = "";
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Level = 1;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Just created ClapTrap: " << name << std::endl;
	this->Name = name;
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Level = 1;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Time to destruct ClapTrap: " << this->Name << std::endl;
}

std::string	ClapTrap::getName(void)
{
	return (this->Name);
}

void	ClapTrap::rangedAttack(std::string const & target)
{
}

void	ClapTrap::meleeAttack(std::string const & target)
{
}

void	ClapTrap::takeDamage(unsigned int amount)
{
}

void	ClapTrap::beRepaired(unsigned int amount)
{
}
