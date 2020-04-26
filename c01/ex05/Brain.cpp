/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 13:31:08 by hthomas           #+#    #+#             */
/*   Updated: 2020/04/26 14:08:16 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <memory>
#include "Brain.hpp"

Brain::Brain()
{
}

std::string Brain::identify()
{
	return (std::addressof(this));
}
