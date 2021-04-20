/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:09:16 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/20 11:43:21 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"PowerFist.hpp"

PowerFist::PowerFist():
AWeapon("Power Fist", 8, 50)
{}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
