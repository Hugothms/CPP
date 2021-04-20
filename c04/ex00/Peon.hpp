/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:13:43 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/20 10:55:09 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include<iostream>

# include"Victim.hpp"

class Peon: public Victim
{
public:
	Peon(std::string name);
	virtual ~Peon();
	void getPolymorphed() const;
};

std::ostream	&operator<<(std::ostream& o, Peon const& i);

#endif
