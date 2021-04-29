/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 19:42:52 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/29 13:31:40 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"mutantstack.hpp"
#include<iostream>

int	main()
{
	MutantStack<int> mstack;
	std::cout << "Empty: " << mstack.empty() << std::endl;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	std::cout << "Empty: " << mstack.empty() << std::endl;
	mstack.push(0);



	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	std::cout << "MutantStack:" << std::endl;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
