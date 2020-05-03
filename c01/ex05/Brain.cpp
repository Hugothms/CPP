/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugothms <hugothms@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 13:31:08 by hthomas           #+#    #+#             */
/*   Updated: 2020/05/03 15:54:29 by hugothms         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>	//for std::stringstream
#include "Brain.hpp"

Brain::Brain()
{
}

std::string Brain::identify()
{
	std::ostringstream address;
	address << (void const *)this;
	return (address.str());
}
