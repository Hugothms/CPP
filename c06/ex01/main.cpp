/* ************************************************************************** */
/*	                                                                          */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 12:45:42 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/27 15:39:11 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <ctime>
# include <string>
# include <cstdlib>
# include <iostream>
# pragma pack(1)

struct Data
{
	int			n;
	std::string	s1;
	std::string	s2;
};

void*	serialize(void)
{
	Data			*ret = new Data;
	static char	set[] = "abcdefghijklmnopqrstuvwxyz"
						"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
						"1234567890";

	for (int i = 0; i < 8; i += 1)
	{
		ret->s1 += set[std::rand() % sizeof(set)];
	}
	ret->n = std::rand() * (std::rand() & 1 ? 1 : -1);
	for (int i = 0; i < 8; i += 1)
	{
		ret->s2 += set[std::rand() % sizeof(set)];
	}
	return (ret);
}

Data*	deserialize(void *raw)
{
	Data			*ret = reinterpret_cast<Data*>(raw);
	std::cout << sizeof(raw) << std::endl;
	return (ret);
}

int		main(void)
{
	srand(time(0));
	void			*ser = serialize();

	// std::cout << ((Data*)ser)->s1 << std::endl;
	// std::cout << ((Data*)ser)->n << std::endl;
	// std::cout << ((Data*)ser)->s2 << std::endl;

	Data			*des = deserialize(ser);

	std::cout << des->s1 << std::endl;
	std::cout << des->n << std::endl;
	std::cout << des->s2 << std::endl;

	delete des;
	return (0);
}