/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 13:31:08 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/20 17:10:03 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <sstream>	//for std::stringstream
# include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon(std::string type):
type(type)
{}

std::string const	Weapon::getType(void)
{
	return this->type;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
