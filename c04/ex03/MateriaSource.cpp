/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:21:43 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/04 10:19:38 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	// new TacticalMarine();
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &old)
{
	// new TacticalMarine();
    *this = old;
	std::cout << "Tactical Marine (copied) ready for battle!" << std::endl;
}

TacticalMarine& TacticalMarine::operator=(const TacticalMarine &other)
{
	(void) other;
	std::cout << "Tactical Marine (assigned) ready for battle!" << std::endl;
	return (*this);
}

TacticalMarine::~TacticalMarine()
{
	// delete(this);
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine* TacticalMarine::clone() const
{
	return (new TacticalMarine(*this));
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
