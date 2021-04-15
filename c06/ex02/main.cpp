/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 12:45:42 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/15 11:25:02 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include<iostream> //cout
# include<cstdlib>

# include"A.hpp"
# include"B.hpp"
# include"C.hpp"

Base*	generate(void)
{
	int		r = std::rand() % 3;

	if (r == 0)
	{
		std::cout << "A" << std::endl;
		return (new A());
	}
	else if (r == 1)
	{
		std::cout << "B" << std::endl;
		return (new B());
	}
	std::cout << "C" << std::endl;
	return (new C());
}

void	identify_from_pointer(Base* p)
{
	A	*a = dynamic_cast<A*>(p);
	if (a)
		std::cout << "A" << std::endl;
	B	*b = dynamic_cast<B*>(p);
	if (b)
		std::cout << "B" << std::endl;
	C	*c = dynamic_cast<C*>(p);
	if (c)
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base& p)
{
	try
	{
		A	&cl_a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		static_cast<void>(cl_a);
	}
	catch (std::bad_cast &bc)
	{
		// std::cout << "Failed to cast A" << std::endl;
	}
	try
	{
		B	&cl_b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		static_cast<void>(cl_b);
	}
	catch (std::bad_cast &bc)
	{
		// std::cout << "Failed to cast B" << std::endl;
	}
	try
	{
		C	&cl_c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		static_cast<void>(cl_c);
	}
	catch (std::bad_cast &bc)
	{
		// std::cout << "Failed to cast C" << std::endl;
	}
}

int		main()
{
	srand(time(NULL));
	std::cout << "Random generated is from type: ";
	Base	*p = generate();

	std::cout << "Identified from pointer: ";
	identify_from_pointer(p);

	std::cout << "Identified from reference: ";
	identify_from_reference(*p);
	return 0;
}
