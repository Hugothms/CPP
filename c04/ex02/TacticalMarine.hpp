/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:21:45 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/18 12:49:13 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include"ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine& other);
		TacticalMarine& operator=(const TacticalMarine& other);
		~TacticalMarine();
		TacticalMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

#endif
