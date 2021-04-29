/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:56:42 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/29 13:21:54 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include<iostream>
#include<exception>
#include<vector>
#include<math.h>
#include<algorithm>

class Span
{
private:
	std::vector<int>	vector;
	unsigned int		N;
	unsigned int		count;
public:
	Span(unsigned int N);
	~Span();
	void	addNumber(int number);
	void	addNumbers(int start, int end);
	int		shortestSpan(void);
	int		longestSpan(void);

	class VectorFullException: public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return "VectorFullException: Vector is full";
		}
	};
	class NoSpanPossibleException: public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return "NoSpanPossibleException: Vector contains less than 2 elements";
		}
	};
};

#endif
