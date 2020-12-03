/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:43:48 by hthomas           #+#    #+#             */
/*   Updated: 2020/12/03 14:48:03 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include"Enemy.hpp"

class RadScorpion: public Enemy
{
	public:
		RadScorpion();
		~RadScorpion();
		void  takeDamage(int damage);
};

#endif
