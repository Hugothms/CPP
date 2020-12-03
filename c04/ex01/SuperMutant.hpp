/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:45:28 by hthomas           #+#    #+#             */
/*   Updated: 2020/12/03 14:54:07 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include"Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
		SuperMutant();
		~SuperMutant();
		void  takeDamage(int damage);
};

#endif
