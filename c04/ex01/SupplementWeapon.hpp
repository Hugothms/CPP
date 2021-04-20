/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SupplementWeapon.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 11:51:43 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/20 11:43:44 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPPLEMENTWEAPON_HPP
# define SUPPLEMENTWEAPON_HPP

# include"AWeapon.hpp"

class SupplementWeapon: public AWeapon
{
	public:
		SupplementWeapon();
		void attack() const;
};

#endif
