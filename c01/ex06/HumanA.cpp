/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 13:46:55 by hthomas           #+#    #+#             */
/*   Updated: 2021/03/31 21:30:23 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(){}

HumanA::HumanA(std::string name, class Weapon weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

void	HumanA::attack(void)
{
	std::cout << "NAME attacks with his WEAPON_TYPE" << std::endl;
}
