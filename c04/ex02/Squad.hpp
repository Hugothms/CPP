/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:13:02 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 09:20:52 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include"ISquad.hpp"
# include"ISpaceMarine.hpp"

class Squad: public ISquad
{
	private:
		int		count;
		int				size;
		ISpaceMarine**	marines;
	public:
		Squad();
		Squad(int size);
		Squad( const Squad &old);
		Squad	&operator=(const Squad &other);
		~Squad();
		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int push(ISpaceMarine*);
};

#endif
