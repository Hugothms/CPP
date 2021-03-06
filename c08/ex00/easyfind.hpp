/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 10:07:59 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/28 12:42:54 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <exception>

class NotFoundException: public std::exception
{
	virtual const char* what() const throw()
	{
		return ("NotFoundException: Item not found");
	}
};

template <typename T>
typename T::iterator	easyfind(T &container, int value)
{
	typename T::iterator iterator = std::find(container.begin(), container.end(), value);
	if (iterator == container.end())
		throw NotFoundException();
	return (iterator);
}

template <typename T>
int						easyfindIndex(T &container, int value)
{
	typename T::iterator iterator = std::find(container.begin(), container.end(), value);
	if (iterator == container.end())
		throw NotFoundException();
	int index = distance(container.begin(), iterator);
	return (index);
}

#endif
