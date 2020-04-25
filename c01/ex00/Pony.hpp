/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 13:27:56 by hthomas           #+#    #+#             */
/*   Updated: 2020/04/25 14:45:18 by hthomas          ###   ########.fr       */
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
	std::string	getName(void);
	std::string	getColor(void);
	int			getAge(void);
	void		jump(void);
};

#endif