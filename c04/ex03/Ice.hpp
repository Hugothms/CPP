/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:13:02 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/14 17:59:40 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
private:
public:
	// Constructors & Destructors
	Ice();
	~Ice();

	// Copy constructor
	Ice(const Ice& copy);

	// Operation overload =
	Ice& operator=(const Ice& copy);

	Ice*	clone() const;
	void	use(ICharacter& target);
};

#endif
