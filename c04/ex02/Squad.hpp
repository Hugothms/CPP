/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:13:02 by hthomas           #+#    #+#             */
/*   Updated: 2020/12/03 16:29:53 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include"ISquad.hpp"

class Squad: public ISquad
{
	private:
		static int	count;
	public:
		Squad();
		~Squad();
		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int) const;
		virtual int push(ISpaceMarine*);
};

//initialise static member function
int Squad::count = 0;

#endif
