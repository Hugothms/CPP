/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 13:27:56 by hthomas           #+#    #+#             */
/*   Updated: 2020/11/01 19:23:59 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
	private:
		std::string	name;
		std::string	color;	
		int			age;
	public:
		Pony(std::string name="", std::string color="", int age=0);
		void		SetPony(std::string name, std::string color, int age);
		std::string const	getName(void);
		std::string const	getColor(void);
		int	const			getAge(void);
		void const			jump(void);
};

#endif