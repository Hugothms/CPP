/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 16:14:25 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 12:29:06 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <string>
# include <cstdlib>	/* srand, rand */

# include "Zombie.hpp"

class ZombieHorde
{
	private:
		int		size;
		Zombie	*horde;
	public:
		ZombieHorde(int n);
		~ZombieHorde();
		void	announce(void) const;
};

#endif
