/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 10:01:48 by hthomas           #+#    #+#             */
/*   Updated: 2021/01/31 15:49:34 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <cctype>

template <typename T> 
class Array
{
private:
	int	length;
	T*	elmts;
public:
	Array(void): length(0), elmts(nullptr){}
	Array(unsigned int n): length(n), elmts(nullptr)
	{
		this->elmts = new T[n]();
	}
	Array(Array<T> const &other): length(other.length), elmts(nullptr)
	{
		if (other.length > 0)
			this->elmts = new T[other.length]();
		for (size_t i = 0; i < other.length; i++)
		{
			this->elmts[i] = other.elmts[i];
		}
	};
	~Array()
	{
		if (this->length > 0)
			delete[] this->elmts;
	};
	
	class OutOfBoundsException: public std::exception
	{
		const char* what() const throw()
			{
				return "ArrayException: index out of bounds";
			}
	};
	
	T &operator[](size_t index)
	{
		if (index >= this->length)
			throw Array::OutOfBoundsException();
		return (this->elmts[index]);
	}
	T const &operator[](size_t index) const
	{
		return (operator[](index));
	}
	size_t size(void) const
	{
		return (this->length);
	}
};

#endif
