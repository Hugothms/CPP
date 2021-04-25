/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:27:59 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/25 23:03:56 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include<iostream>

class Victim
{
private:
	std::string	name;
	Victim(void);
public:
	Victim(std::string name);
	virtual ~Victim();
	Victim(const Victim& other);
	Victim& operator=(const Victim& other);
	std::string	getName(void) const;
	virtual void getPolymorphed() const;
};

std::ostream	&operator<<(std::ostream& o, const Victim& i);

#endif