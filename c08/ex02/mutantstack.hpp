/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 19:42:58 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/26 20:50:48 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iterator>
#include <deque>

template< class T, class Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
public:
	MutantStack(): std::stack<T,Container>()
	{};
	MutantStack(const MutantStack<T, Container> &other): std::stack<T,Container>()
	{
		*this = other;
	}
	~MutantStack();
	MutantStack&	operator=(const MutantStack& other)
	{
		if (this != &other)
			this->c = other.c;
		return *this;
	}
	typedef typename std::stack<T, Container>::container_type::iterator iterator;
	typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin(){return this->c.begin();}
	iterator end(){return this->c.end();}
	const_iterator begin() const{return this->c.begin();}
	const_iterator end() const{return this->c.end();}
	reverse_iterator rbegin(){return this->c.rbegin();}
	reverse_iterator rend(){return this->c.rend();}
	const_reverse_iterator rbegin() const{return this->c.rbegin();}
	const_reverse_iterator rend() const{return this->c.rend();}
};

#endif
