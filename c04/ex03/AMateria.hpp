/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:21:29 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/14 17:58:53 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include"ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string		type;
		unsigned int	xp;

		// Copy constructor
		AMateria(const AMateria& copy);
	public:
		// Constructors & Destructors
		AMateria();
		AMateria(std::string const& type);
		virtual ~AMateria();

		// Operation overload =
		AMateria& operator=(const AMateria& other);

		std::string const	&getType() const; //Returns the materia type
		unsigned int		getXP() const; //Returns the Materia's XP
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
