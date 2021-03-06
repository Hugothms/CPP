/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:56:44 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/29 13:21:49 by hthomas          ###   ########.fr       */
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

void	Span::addNumbers(int start, int end)
{
	for (int i = start; i <= end; i++)
	{
		std::cout << "Trying to add: " << i << std::endl;
		this->addNumber(i);
	}
}

int		Span::shortestSpan(void)
{
	if (this->count < 2)
		throw NoSpanPossibleException();
	std::vector<int> sorted = this->vector;
	std::sort(sorted.begin(), sorted.end());
	int min = sorted[1] - sorted[0];
	for(size_t i = 1; i < this->vector.size() - 1; i++)
	{
		int span = sorted[i + 1] - sorted[i];
		if (span >= 0 && span < min)
			min = span;
	}
	return (min);
}

int		Span::longestSpan(void)
{
	std::vector<int> sorted = this->vector;
	std::sort(sorted.begin(), sorted.end());
	return (sorted.back() - sorted.front());
}
