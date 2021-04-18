/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SupplementEnemy.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 11:51:43 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/18 13:07:39 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPPLEMENT_HPP
# define SUPPLEMENT_HPP

# include"Enemy.hpp"

class SupplementEnemy: public Enemy
{
	public:
		SupplementEnemy();
		virtual ~SupplementEnemy();
		void  takeDamage(int damage);
};

#endif
