/* ************************************************************************* */
/*                                                                           */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 09:48:01 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/28 12:28:55 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include<iostream> //cout

template<typename T>
void swap(T& p1, T& p2)
{
	T tmp = p1;
	p1 = p2;
	p2 = tmp;
}

template<typename T>
T  min(T& p1, T& p2)
{
	return (p1 < p2 ? p1 : p2);
}

template<typename T>
T  max(T& p1, T& p2)
{
	return (p1 > p2 ? p1 : p2);
}

int main()
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "min(" << a << ", " << b << ") = " << ::min(a, b) << std::endl;
	std::cout << "max(" << a << ", " << b << ") = " << ::max(a, b) << std::endl;


	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "min(" << c << ", " << d << ") = " << ::min(c, d) << std::endl;
	std::cout << "max(" << c << ", " << d << ") = " << ::max(c, d) << std::endl;

	return 0;
}
