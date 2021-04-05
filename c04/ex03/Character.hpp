/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:21:45 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/04 10:39:33 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_HPP
# define Character_HPP

# include"ICharacter.hpp"

class Character: public ICharacter
{
	public:
		Character();
		Character(const Character &old);
		Character &operator=(const Character &other);
		~Character();
		Character* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

#endif
