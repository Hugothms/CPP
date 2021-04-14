/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:13:02 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/14 17:59:23 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
private:
public:
	// Constructors & Destructors
	Cure();
	~Cure();

	// Copy constructor
	Cure(const Cure& copy);

	// Operation overload =
	Cure& operator=(const Cure& copy);

	Cure*	clone() const;
	void	use(ICharacter& target);
};

#endif
