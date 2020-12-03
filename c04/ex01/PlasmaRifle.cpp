/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:03:17 by hthomas           #+#    #+#             */
/*   Updated: 2020/12/03 15:39:40 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():
AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::~PlasmaRifle()
{}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}