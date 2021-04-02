/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 12:02:22 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 09:20:52 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include<iostream>

class AWeapon
{
	private:
		std::string	name;
		int			damage;
		int			apcost;
		AWeapon(); // Constructeur par défaut
		AWeapon(const AWeapon&); // Constructeur de recopie
		AWeapon &operator=(const AWeapon&); // Operator d'affectation
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		~AWeapon(); // Destructeur éventuellement virtuel
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif
