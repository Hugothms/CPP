/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:08:04 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/20 16:53:20 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					raw;
		int static const	number = 8;
	public:
		Fixed();
		Fixed(Fixed const& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int		getPoint() const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
