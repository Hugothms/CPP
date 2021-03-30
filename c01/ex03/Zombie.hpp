/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 15:56:02 by hthomas           #+#    #+#             */
/*   Updated: 2021/03/30 19:29:18 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	name;
		std::string	type;
	public:
		Zombie(void);
		Zombie(std::string name, std::string type);
		Zombie *newZombie(std::string name);
		void	announce(void) const;
		std::string getName() const;
		std::string getType() const;
};

#endif
