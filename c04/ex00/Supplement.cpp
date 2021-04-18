/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Supplement.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:33:57 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/18 12:54:15 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Supplement.hpp"

Supplement::Supplement(std::string name): Victim(name)
{
	std::cout << "Hello I'm " << this->getName() << " and I'm alive" << std::endl;
}

Supplement::~Supplement()
{
	std::cout << "Supplement " << this->getName() << " is dying" << std::endl;
}

void	Supplement::getPolymorphed() const
{
	std::cout << this->getName() << " Has been turned into a blue tortue !" << std::endl;
}
