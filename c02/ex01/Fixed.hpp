/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:08:04 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/20 16:55:21 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					raw;
		int static const	point_pos = 8;
	public:
		Fixed();
		Fixed(int const value);
		Fixed(float const value);
		Fixed(Fixed const& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int		getPoint() const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream& o, Fixed const& i);

#endif
