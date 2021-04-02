/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:46:37 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 09:20:52 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include<iostream>
# include"AWeapon.hpp"
# include"Enemy.hpp"

class Character
{
	private:
		std::string name;
		int			ap;
		AWeapon		*weapon;
	public:
		Character(std::string const & name);
		~Character();
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string  getName() const;
		int getAP() const;
		AWeapon* getWeapon() const;

};

std::ostream &operator<<(std::ostream &o, Character const &c);

#endif