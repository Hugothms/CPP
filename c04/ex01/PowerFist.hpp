/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:07:57 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/16 11:25:14 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include"AWeapon.hpp"

class PowerFist: public AWeapon
{
	public:
		PowerFist();
		virtual ~PowerFist();
		void attack() const;
};

#endif
