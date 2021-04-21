/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:56:44 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/21 20:53:39 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"span.hpp"

Span::Span(unsigned int N): N(N)
{
	this->count = 0;
}

Span::~Span()
{
}

void	Span::addNumber(int number)
{
	if (this->count >= this->N)
		throw VectorFullException();
	this->count++;
	this->vector.push_back(number);
}

int		Span::shortestSpan(void)
{
	if (this->count < 2)
		throw NoSpanPossibleException();
	int min = INFINITY;
	for(size_t i = 0; i < this->vector.size(); i++)
	{
		for(size_t j = i + 1; j < this->vector.size(); j++)
		{
			int span = this->vector[j] - this->vector[i];
			if (span >= 0 && span < min)
				min = span;
		}
	}
	return (min);
}

int		Span::longestSpan(void)
{
	int max = 0;
	for(size_t i = 0; i < this->vector.size(); i++)
	{
		for(size_t j = i; j < this->vector.size(); j++)
		{
			int span = this->vector[j] - this->vector[i];
			if (span > max)
				max = span;
		}
	}
	return (max);
}
