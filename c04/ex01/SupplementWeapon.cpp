/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SupplementWeapon.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:33:57 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/20 11:43:36 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SupplementWeapon.hpp"

SupplementWeapon::SupplementWeapon():
AWeapon("Supplement Weapon", 6, 31)
{}

void SupplementWeapon::attack() const
{
	std::cout << "* kalash kalash *" << std::endl;
}
