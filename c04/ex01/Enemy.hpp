/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:11:08 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 09:37:57 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include<iostream>

class Enemy
{
	private:
		int			hp;
		std::string type;
		Enemy(); // Constructeur par défaut
		Enemy(const Enemy&); // Constructeur de recopie
		Enemy &operator=(const Enemy&); // Operator d'affectation
	public:
		Enemy(int hp, std::string const &type);
		virtual ~Enemy(); // Destructeur éventuellement virtuel
		std::string getType() const;
		int getHP() const;
		virtual void takeDamage(int);
};

#endif
