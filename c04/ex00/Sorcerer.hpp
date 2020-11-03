/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:25:59 by hthomas           #+#    #+#             */
/*   Updated: 2020/11/03 15:55:27 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include<iostream>
#include<string>

class Sorcerer
{
private:
	std::string	name;
	std::string	title;
	Sorcerer(void);
public:
	Sorcerer(std::string name, std::string title);
	~Sorcerer();
};

// std::ostream	&operator<<(std::ostream &o, Sorcerer const &i);

#endif