/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 12:45:42 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/14 18:10:23 by hthomas          ###   ########.fr       */
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
		return (new A());
	else if (r == 1)
		return (new B());
	return (new C());
}

void	identify_from_pointer(Base* p)
{
	A   *a = dynamic_cast<A*>(p);
    if (a)
        std::cout << "Pointer of type A" << std::endl;
    B   *b = dynamic_cast<B*>(p);
    if (b)
        std::cout << "Pointer of type B" << std::endl;
    C   *c = dynamic_cast<C*>(p);
    if (c)
        std::cout << "Pointer of type C" << std::endl;
}

void	identify_from_reference(Base& p)
{
	try
    {
        A   &cl_a = dynamic_cast<A&>(p);
        std::cout << "A identified from reference" << std::endl;
        static_cast<void>(cl_a);
    }
    catch (std::bad_cast &bc)
    {
        std::cout << "Failed to cast A" << std::endl;
    }
    try
    {
        B   &cl_b = dynamic_cast<B &>(p);
        std::cout << "B identified from reference" << std::endl;
        static_cast<void>(cl_b);
    }
    catch (std::bad_cast &bc)
    {
        std::cout << "Failed to cast B" << std::endl;
    }
    try
    {
        C   &cl_c = dynamic_cast<C &>(p);
        std::cout << "C identified from reference" << std::endl;
        static_cast<void>(cl_c);
    }
    catch (std::bad_cast &bc)
    {
        std::cout << "Failed to cast C" << std::endl;
    }
}

int		main()
{
	srand(time(NULL));
    Base    *p = generate();

    identify_from_pointer(p);
    identify_from_reference(*p);
	return 0;
}
