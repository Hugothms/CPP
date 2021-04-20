/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:03:17 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/20 11:43:28 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():
AWeapon("Plasma Rifle", 5, 21)
{}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
