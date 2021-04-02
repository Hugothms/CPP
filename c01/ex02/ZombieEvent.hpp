/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 16:14:25 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 12:27:03 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <string>
# include <stdlib.h>	/* srand, rand */

# include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string	type;
	public:
		ZombieEvent(void);
		std::string	const	getType();
		void				setZombieType(std::string type);
		Zombie				*newZombie(std::string name);
		Zombie				*randomChump();
};

#endif
