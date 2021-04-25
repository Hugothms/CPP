/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:08:02 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/26 00:33:18 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->raw = 0;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->raw = value << this->point_pos;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->raw = roundf(value * (1 << this->point_pos));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	Fixed::operator=(other);
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Assignation operator called" << std::endl;
	if(this == &other)
		return (*this);
	this->raw = other.getRawBits();
	return (*this);
}


int		Fixed::getRawBits(void) const
{
	return (this->raw);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->raw = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->raw) / (1 << this->point_pos));
}

int		Fixed::toInt(void) const
{
	return (this->raw >> this->point_pos);
}

std::ostream	&operator<<(std::ostream& stream, const Fixed& fixed)
{
	stream << fixed.toFloat();
	return stream;
}
