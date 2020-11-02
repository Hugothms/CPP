/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 13:31:08 by hthomas           #+#    #+#             */
/*   Updated: 2020/11/02 11:03:25 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>	//for std::stringstream
#include "Brain.hpp"

Brain::Brain(){}

std::string	Brain::identify() const
{
	std::ostringstream address;
	address << (void const *)this;
	return (address.str()); // std::cout << std::hex << this << std::endl;
}
