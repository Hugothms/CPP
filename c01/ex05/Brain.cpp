/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 13:31:08 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/20 16:51:03 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <sstream>	//for std::stringstream
# include "Brain.hpp"

Brain::Brain()
{
	IQ = 100;
	playInstrument = "guitar";
	code = true;
}

std::string	Brain::identify()
{
	std::ostringstream address;
	address << (void *)this;
	return (address.str()); // std::cout << std::hex << this << std::endl;
}
