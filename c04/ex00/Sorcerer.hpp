/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:25:59 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/25 23:03:56 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include<iostream>
# include"Victim.hpp"

class Sorcerer
{
private:
	std::string	name;
	std::string	title;
	Sorcerer(void);
public:
	Sorcerer(std::string name, std::string title);
	~Sorcerer();
	Sorcerer(const Sorcerer& other);
	Sorcerer& operator=(const Sorcerer& other);
	std::string	getName(void) const;
	std::string	getTitle(void) const;
	void polymorph(const Victim& ) const;
};

std::ostream	&operator<<(std::ostream& o, const Sorcerer& i);

#endif