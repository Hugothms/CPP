/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 13:46:55 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 09:20:52 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(){}

HumanA::HumanA(std::string name, class Weapon& weapon): name(name), weapon(&weapon)
{
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
