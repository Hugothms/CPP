/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:14:13 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/02 09:20:52 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Squad.hpp"

Squad::Squad()
{
	this->count = 0;
	this->size = 5;
	this->marines = new ISpaceMarine*[this->size];
}

Squad::Squad(int size)
{
	this->count = 0;
	this->size = size;
	this->marines = new ISpaceMarine*[this->size];
}

Squad::Squad( const Squad &old)
{
	this->count = old.getCount();
	this->size = old.size;
	this->marines = new ISpaceMarine*[this->size];
	for (size_t i = 0; i < this->count; i++)
		this->marines[i] = old.marines[i]->clone();
}

Squad&	Squad::operator=(const Squad &other)
{
	for (int i = 0; i < this->count; i++)
		delete this->marines[i];
	this->count = other.getCount();
	this->size = other.size;
	this->marines = new ISpaceMarine*[this->size];
	for (size_t i = 0; i < this->count; i++)
		this->marines[i] = other.marines[i]->clone();
	return (*this);
}

Squad::~Squad()
{
	std::cout << getCount() << std::endl;
	for (size_t i = 0; i < this->getCount(); i++)
		delete(this->marines[i]);
	delete[](this->marines);
}

int Squad::getCount() const
{
	return (this->count);
}

ISpaceMarine* Squad::getUnit(int N) const
{
	if (N < 0 || N >= this->getCount())
		return (NULL);
	return(this->marines[N]);
}

int Squad::push(ISpaceMarine *marine)
{
	if (!marine || this->getCount() >= this->size)
		return (-1);
	this->marines[this->getCount()] = marine;
	this->count++;
	return (this->getCount());
}

