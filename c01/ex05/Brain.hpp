/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 13:26:29 by hthomas           #+#    #+#             */
/*   Updated: 2020/04/26 14:04:31 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Brain
{
private:
	int		IQ;
	bool	playInstrument;
	bool	code;
public:
	Brain();
	std::string identify(void);
};
