/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:44:50 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/20 11:39:52 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"RadScorpion.hpp"

RadScorpion::RadScorpion():
Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}
