/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 16:14:25 by hthomas           #+#    #+#             */
/*   Updated: 2020/04/26 14:17:13 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string	type;
public:
	ZombieEvent(void);
	void	setZombieType(std::string type);
};