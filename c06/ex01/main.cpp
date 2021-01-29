/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 12:45:42 by hthomas           #+#    #+#             */
/*   Updated: 2021/01/29 19:09:13 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //cout
#include <string>
#include <ctime> //srand rand
struct Data
{
	int n;
	std::string s1;
	std::string s2;
};

void*	serialize(void)
{
	Data* ser = new Data;
	static char	set[] = "abcdefghijklmnopqrstuvwxyz"
                       	"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                        "1234567890";
	for (size_t i = 0; i < 8; i++)
	{
		std::cout << set[rand() % sizeof(set)] << std::endl;
		ser->s1[i] = set[rand() % sizeof(set)];
		ser->s2[i] = set[rand() % sizeof(set)];
		std::cout << set.s1 << std::endl;
	}
	ser->n = rand();
	return ser;
}

Data*	deserialize(void* raw)
{
	Data* data;
	data = reinterpret_cast<Data*>(raw);
	return data;
}

int main(int argc, char const *argv[])
{
	void* ser;
	Data* data;

    srand(time(0));
	ser = serialize();
	data = deserialize(ser);

	std::cout 	<< data->s1 << std::endl 
				<< data->n << std::endl
				<< data->s2 << std::endl;
	std::cout << data << std::endl;
	return 0;
}
