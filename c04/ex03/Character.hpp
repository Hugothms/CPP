/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:21:45 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/14 17:59:16 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_HPP
# define Character_HPP

# include"ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string			name;
		static const int	maxInventorySize = 4;
		AMateria			*inventory[4];
	public:
		Character();
		Character(std::string name);
		~Character();
		Character(const Character& old);
		Character& operator=(const Character& other);
		std::string const	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif
