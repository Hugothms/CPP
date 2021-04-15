/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:13:43 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/15 11:01:20 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include<iostream>

# include"Victim.hpp"

class Peon: public Victim
{
	private:
		Peon(void);
	public:
		Peon(std::string name);
		~Peon();
		void getPolymorphed() const;
};

std::ostream	&operator<<(std::ostream& o, Peon const& i);

#endif
