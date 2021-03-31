/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 13:46:55 by hthomas           #+#    #+#             */
/*   Updated: 2021/03/31 21:06:33 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(){}

Brain		&Human::getBrain()
{
	return (this->brain);
}

std::string	Human::identify(void)
{
	return (this->getBrain().identify());
}
