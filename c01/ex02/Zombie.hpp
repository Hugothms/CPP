/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 15:56:02 by hthomas           #+#    #+#             */
/*   Updated: 2020/04/26 14:20:18 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	name;
	std::string	type;
public:
	Zombie(std::string name, std::string type);
	Zombie *newZombie(std::string name);
	void	announce(void);
	std::string getName();
	std::string getType();
};
