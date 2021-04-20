/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Supplement.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 11:51:43 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/20 10:55:16 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPPLEMENT_HPP
# define SUPPLEMENT_HPP

#include "Victim.hpp"

class Supplement: public Victim
{
public:
	Supplement(std::string name);
	virtual ~Supplement();
	void getPolymorphed() const;
};

#endif
