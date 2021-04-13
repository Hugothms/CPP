/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:13:02 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/13 17:03:57 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
private:
	// Operation overload =
	Cure &operator=(const Cure& copy);
public:
	// Constructors & Destructors
	Cure();
	~Cure();

	// Copy constructor
	Cure(const Cure& copy);

	Cure*	clone() const;
	void	use(ICharacter& target);
};

#endif
