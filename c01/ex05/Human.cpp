/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 13:46:55 by hthomas           #+#    #+#             */
/*   Updated: 2020/11/02 11:02:42 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(){}

Brain const			&Human::getBrain() const
{
	return (this->brain);
}

std::string			Human::identify(void) const
{
	return (this->getBrain().identify());
}
