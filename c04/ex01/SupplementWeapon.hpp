/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SupplementWeapon.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 11:51:43 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/18 13:07:13 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPPLEMENTWEAPON_HPP
# define SUPPLEMENTWEAPON_HPP

# include"AWeapon.hpp"

class SupplementWeapon: public AWeapon
{
	public:
		SupplementWeapon();
		virtual ~SupplementWeapon();
		void attack() const;
};

#endif
