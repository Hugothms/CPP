/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:21:45 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 09:37:57 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	std::string			name;
	static const int	maxMemorySize = 4;
	AMateria			*memory[4];
public:
	// Constructors & Destructors
	MateriaSource();
	~MateriaSource();

	// Copy constructor
	MateriaSource(const MateriaSource& copy);

	// Operation overload =
	MateriaSource& operator=(const MateriaSource& copy);

	// Functions
	void		learnMateria(AMateria*);
	AMateria*	createMateria(const std::string&  type);
};

#endif
