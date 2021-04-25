/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:11:08 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/25 23:02:02 by hthomas          ###   ########.fr       */
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
	public:
		Enemy(int hp, const std::string& type);
		Enemy(const Enemy& other); // Constructeur de recopie
		Enemy& operator=(const Enemy&); // Operator d'affectation
		virtual ~Enemy(); // Destructeur éventuellement virtuel
		std::string getType() const;
		int getHP() const;
		virtual void takeDamage(int);
};

#endif
