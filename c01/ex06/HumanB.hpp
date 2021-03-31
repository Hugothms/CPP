/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 13:45:42 by hthomas           #+#    #+#             */
/*   Updated: 2021/03/31 21:28:09 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanB();
		HumanB(std::string name);
		class Weapon	getWeapon();
		void			setWeapon(class Weapon weapon);
		void			attack(void);
};

#endif
