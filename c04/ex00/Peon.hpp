/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:13:43 by hthomas           #+#    #+#             */
/*   Updated: 2020/11/04 12:11:49 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include<iostream>

#include"Victim.hpp"

class Peon: public Victim
{
	private:
		Peon(void);
	public:
		Peon(std::string name);
		~Peon();
		std::string	getName(void) const;
		void getPolymorphed() const;
};

std::ostream	&operator<<(std::ostream &o, Peon const &i);

#endif
